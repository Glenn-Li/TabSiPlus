// Product version defines
#pragma once
#define TO_STR2(x)    #x
#define TO_STR(x)    TO_STR2(x)

#define CHS_RESOURCES


#define APPVERSION                    0
#define APPREVISION                    99
#define APPSUBREVISION                2
#define APPRELEASE                    1749

#define    PRODUCTNAME                    "TaiSiPlus Host"

#define VERSIONCOPYRIGHT            "Copyright ?2004 - 2012, Orbit Studio\0"
#define VERSIONCOMMENTS                "Source Dynamics may hate this program\0"
#define VERSIONPRODUCTNAME            PRODUCTNAME "\0"
#define VERSIONINTERNALNAME            "Carnelian\0"

#define VERSIONPRODUCTVERSIONSTR    TO_STR(APPVERSION) "." TO_STR(APPREVISION) "." TO_STR(APPSUBREVISION) " build " TO_STR(APPRELEASE) "\0"

// Module Info:
#define VERSIONFILEVERSIONSTR        TO_STR(MODVERSION) "." TO_STR(MODREVISION) "." TO_STR(MODSUBREVISION) " build " TO_STR(MODRELEASE) "\0"

// Chinese sim:
#ifdef CHS_RESOURCES

#define VERSIONCOPYRIGHT_CHS        "��Ȩ���� ?2004 - 2012, �ǹ칤����(Orbit Studio)\0"
#define VERSIONCOMMENTS_CHS            "Source Dynamics ���ܱȽ������������\0"
#define VERSIONPRODUCTNAME_CHS        VERSIONPRODUCTNAME
#define VERSIONINTERNALNAME_CHS        "ˮ��ʯ\0"

#define VERSIONPRODUCTVERSIONSTR_CHS    TO_STR(APPVERSION) "." TO_STR(APPREVISION) "." TO_STR(APPSUBREVISION)  " ���� " TO_STR(APPRELEASE) "\0"

    // Module Info:
#define VERSIONFILEVERSIONSTR_CHS    TO_STR(MODVERSION) "." TO_STR(MODREVISION) "." TO_STR(MODSUBREVISION)  " ���� " TO_STR(MODRELEASE) "\0"
#define VERSIONORIGINALFILENAME_CHS    VERSIONORIGINALFILENAME

#endif

//#define VERSIONCOMPANYNAME            "\0"
//#define VERSIONTRADEMARKS                "\0"
//#define VERSIONPRIVATEBUILD            "\0"
//#define VERSIONSPECIALBUILD            "\0"
