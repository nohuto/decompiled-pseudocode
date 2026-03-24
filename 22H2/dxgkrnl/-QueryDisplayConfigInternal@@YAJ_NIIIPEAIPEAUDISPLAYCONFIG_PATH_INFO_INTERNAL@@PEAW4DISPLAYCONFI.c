/*
 * XREFs of ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C0144F50
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C0145CF0 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C0145148 (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z.c)
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C01453B4 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOG.c)
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C01460CC (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
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
  enum DISPLAYCONFIG_TOPOLOGY_ID *v8; // r13
  ULONG TimeIncrement; // eax
  __int64 v10; // rcx
  enum DISPLAYCONFIG_TOPOLOGY_ID *v11; // r15
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v12; // r12
  __int64 v13; // rdx
  unsigned int *v14; // rsi
  __int64 v15; // r8
  unsigned __int64 v16; // r14
  __int64 v17; // rcx
  int v18; // r10d
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // ecx
  int RequestedPathsModality; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // r14d
  struct DXGGLOBAL *Global; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+40h] [rbp-20h]
  char v37; // [rsp+48h] [rbp-18h] BYREF
  __int16 v38; // [rsp+49h] [rbp-17h]
  char v39; // [rsp+4Bh] [rbp-15h]
  unsigned int v40; // [rsp+4Ch] [rbp-14h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v41; // [rsp+50h] [rbp-10h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v42; // [rsp+58h] [rbp-8h]
  int v43; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v44; // [rsp+A8h] [rbp+48h]
  unsigned int v45; // [rsp+B8h] [rbp+58h]

  v45 = a4;
  v44 = a2;
  v43 = -1;
  v7 = a3;
  v8 = 0LL;
  v38 = 0;
  v39 = 0;
  v36 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v11 = a7;
  v12 = a6;
  v13 = v7 & 7;
  v14 = a5;
  v15 = 0LL;
  v16 = v36 * TimeIncrement;
  if ( (int)v7 < 0 )
  {
    if ( (_DWORD)v13 != 2 )
    {
      v33 = WdLogNewEntry5_WdWarning(v10, v13, 0LL);
      *(_QWORD *)(v33 + 24) = v7;
      WdLogEvent5_WdWarning(v33);
      RequestedPathsModality = -1073741811;
      goto LABEL_17;
    }
    v15 = 0x80000LL;
  }
  v17 = (unsigned int)v15;
  v41 = a6;
  LODWORD(v17) = v15 | 0x200000;
  v42 = a6;
  v37 = 1;
  if ( (v7 & 0x40000000) == 0 )
    v17 = (unsigned int)v15;
  v18 = v17 | 0x800000;
  if ( (v7 & 0x20000000) == 0 )
    v18 = v17;
  v40 = *a5;
  switch ( (_DWORD)v13 )
  {
    case 1:
      v21 = v18 | 0x10;
LABEL_13:
      RequestedPathsModality = GetRequestedPathsModality(
                                 v21,
                                 0,
                                 (struct _QDC_CONTEXT *)&v37,
                                 (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v43);
      break;
    case 2:
      v19 = v18 | 0x1000000;
      if ( (v7 & 0x20) == 0 )
        v19 = v18;
      v20 = v19 | 0x2000000;
      if ( (v7 & 0x10000000) == 0 )
        v20 = v19;
      v21 = v20 | 0x40;
      goto LABEL_13;
    case 4:
      RequestedPathsModality = GetRequestedPathsModality(
                                 v18 | 0x400000F,
                                 1,
                                 (struct _QDC_CONTEXT *)&v37,
                                 (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v43);
      v8 = (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v43;
      break;
    default:
      RequestedPathsModality = -1073741811;
      v34 = WdLogNewEntry5_WdWarning(v17, v13, v15);
      *(_QWORD *)(v34 + 24) = v7;
      WdLogEvent5_WdWarning(v34);
      break;
  }
  if ( RequestedPathsModality >= 0 )
  {
    *v14 = (v42 - v41) / 200;
    if ( v11 )
      *(_DWORD *)v11 = v43;
  }
LABEL_17:
  v25 = LogDiagQDC(*v14, v12, v7, v45, RequestedPathsModality, v8, v16);
  if ( RequestedPathsModality >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v24, v23);
    v27 = QDC_CACHE::AddToCache(*((QDC_CACHE **)Global + 172), v44, v25, v7, *v14, v12, v11);
    v31 = v27;
    if ( v27 )
    {
      v35 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v35 + 24) = v31;
      WdLogEvent5_WdWarning(v35);
    }
  }
  return (unsigned int)RequestedPathsModality;
}
