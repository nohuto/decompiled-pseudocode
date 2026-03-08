/*
 * XREFs of ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C01BAA80
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C01A6190 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C01BA4C4 (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z.c)
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C01BA8D4 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOG.c)
 *     ?GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C01BAC54 (-GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 */

__int64 __fastcall QueryDisplayConfigInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a6,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a7)
{
  __int64 v7; // rdi
  enum DISPLAYCONFIG_TOPOLOGY_ID *v8; // r14
  __int64 v9; // rbx
  ULONG TimeIncrement; // eax
  enum DISPLAYCONFIG_TOPOLOGY_ID *v11; // r15
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v12; // r12
  unsigned int *v13; // rsi
  int v14; // edx
  unsigned __int64 v15; // r13
  int v16; // r8d
  int v17; // ecx
  bool v18; // al
  int v19; // r10d
  int v20; // ecx
  int v21; // r10d
  unsigned int v22; // r10d
  signed int RequestedPathsModality; // ebx
  unsigned int v24; // r14d
  struct DXGGLOBAL *Global; // rax
  int v26; // eax
  char v28; // [rsp+40h] [rbp-20h] BYREF
  __int16 v29; // [rsp+41h] [rbp-1Fh]
  char v30; // [rsp+43h] [rbp-1Dh]
  unsigned int v31; // [rsp+44h] [rbp-1Ch]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v32; // [rsp+48h] [rbp-18h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v33; // [rsp+50h] [rbp-10h]
  int v34; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v35; // [rsp+A8h] [rbp+48h]
  unsigned int v36; // [rsp+B8h] [rbp+58h]

  v36 = a4;
  v35 = a2;
  v34 = -1;
  v7 = a3;
  v8 = 0LL;
  v29 = 0;
  v30 = 0;
  v9 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v11 = a7;
  v12 = a6;
  v13 = a5;
  v14 = v7 & 7;
  v15 = v9 * TimeIncrement;
  v16 = 0;
  if ( (int)v7 < 0 )
  {
    if ( v14 != 2 )
    {
      WdLogSingleEntry1(3LL, v7);
      RequestedPathsModality = -1073741811;
      goto LABEL_17;
    }
    v16 = 0x80000;
  }
  v17 = v16 | 0x200000;
  v31 = *a5;
  v32 = a6;
  v18 = 1;
  v33 = a6;
  if ( (v7 & 0x40000000) == 0 )
    v17 = v16;
  v28 = 1;
  v19 = v17 | 0x800000;
  if ( (v7 & 0x20000000) == 0 )
    v19 = v17;
  switch ( v14 )
  {
    case 1:
      v22 = v19 | 0x10;
      break;
    case 2:
      v20 = v19 | 0x1000000;
      if ( (v7 & 0x20) == 0 )
        v20 = v19;
      v21 = v20 | 0x2000000;
      if ( (v7 & 0x10000000) == 0 )
        v21 = v20;
      v22 = v21 | 0x40;
      break;
    case 4:
      v8 = (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v34;
      v22 = v19 | 0x400000F;
      goto LABEL_14;
    default:
      RequestedPathsModality = -1073741811;
      WdLogSingleEntry1(3LL, v7);
      goto LABEL_17;
  }
  v18 = 0;
LABEL_14:
  RequestedPathsModality = GetRequestedPathsModality(
                             v22,
                             v18,
                             (struct QDC_CONTEXT *)&v28,
                             (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v34);
  if ( RequestedPathsModality >= 0 )
  {
    *v13 = 1749801491 * ((v33 - v32) >> 3);
    if ( v11 )
      *(_DWORD *)v11 = v34;
  }
LABEL_17:
  v24 = LogDiagQDC(*v13, v12, v7, v36, RequestedPathsModality, v8, v15);
  if ( RequestedPathsModality >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v26 = QDC_CACHE::AddToCache(*((QDC_CACHE **)Global + 187), v35, v24, (unsigned int)v7, *v13, v12, v11);
    if ( v26 )
      WdLogSingleEntry1(3LL, v26);
  }
  return (unsigned int)RequestedPathsModality;
}
