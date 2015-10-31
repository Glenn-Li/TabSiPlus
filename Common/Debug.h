#ifndef  __GLOBAL_DEBUG_H__
#define __GLOBAL_DEBUG_H__

#ifdef USE_ATLWTL
#define WZ_ASSERT    ATLASSERT
#define WZ_TRACE  ATLTRACE
#else
#define WZ_ASSERT    ASSERT
#define WZ_TRACE  TRACE
#endif

const int gnDbgTraceNone           = 0;
const int gnDbgTraceLogFile        = 1;
const int gnDbgTraceMacro          = 2;

const int gnDbgLevelDetail         = 10;//��߼��𣬼�¼ȫ��������Ϣ
const int gnDbgLevelDebugError     = 7;//��¼���Դ�����Ϣ
const int gnDbgLevelHiDebug        = 6;//��¼�߼�������Ϣ
const int gnDbgLevelNormalDebug    = 5;//һ�������Ϣ
const int gnDbgLevelRunError       = 3;//���д�����Ϣ
const int gnDbgLevelEnRun          = 2;//��ǿ������Ϣ
const int gnDbgLevelRun            = 1;//һ��������Ϣ
const int gnDbgLevelNoOutPut       = 0;//һ��������Ϣ

const int gnLimitUp    = 0;
const int gnLimitDown  = 1;


BOOL InitDebugTracing(int nLevel, int nMethod, BOOL bEnable, LPCTSTR lpszLogFile = NULL);
BOOL UninitDebugTracing();
void EnableTracing(BOOL bEnable);
void SetLimitationMethod(int nLimitMethod);
void EnableExtraTimeInfo(BOOL bEnable);
void EnableExtraProcessInfo(BOOL bEnable);

void __cdecl DebugTracing(int nLevel, LPCTSTR fmt, ... );

#endif //__GLOBAL_DEBUG_H__