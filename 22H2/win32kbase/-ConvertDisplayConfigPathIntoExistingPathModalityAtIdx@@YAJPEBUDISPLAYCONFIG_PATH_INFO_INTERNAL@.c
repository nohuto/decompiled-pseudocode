/*
 * XREFs of ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C0143060
 * Callers:
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C01435BC (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0145D0C (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01462C0 (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 * Callees:
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x1C014353C (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAU.c)
 *     ?ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0143678 (-ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@P.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C014581C (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_.c)
 */

__int64 __fastcall ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        bool a5,
        struct D3DKMT_GETPATHSMODALITY *a6,
        bool *a7)
{
  wchar_t *v7; // rsi
  __int64 v9; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rcx
  char *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int TargetVirtualization; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rax
  unsigned __int8 v22; // r10
  __int64 v23; // rdx
  unsigned __int8 v24; // r9
  int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rdx
  bool v28; // al
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // esi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // ebx
  __int64 v40; // rax
  unsigned __int8 v41; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 v42[15]; // [rsp+41h] [rbp-27h] BYREF

  v7 = gpGraphicsDeviceList;
  v9 = a3;
  v42[0] = 0;
  v41 = 0;
  while ( 1 )
  {
    if ( !v7 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
      v11[3] = *((int *)a1 + 5);
      v12 = *((unsigned int *)a1 + 4);
      v11[5] = v9;
LABEL_8:
      v11[4] = v12;
LABEL_9:
      WdLogEvent5_WdError(v11);
      return 3221225485LL;
    }
    if ( (*((_DWORD *)v7 + 40) & 0x800000) != 0
      && *((_DWORD *)v7 + 62) == *((_DWORD *)a1 + 4)
      && *((_DWORD *)v7 + 63) == *((_DWORD *)a1 + 5) )
    {
      break;
    }
    v7 = (wchar_t *)*((_QWORD *)v7 + 16);
  }
  v14 = (char *)a6 + 272 * (unsigned int)a2;
  *((_QWORD *)v14 + 6) = *(_QWORD *)a1;
  *((_QWORD *)v14 + 7) = *((_QWORD *)a1 + 1);
  v15 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x8004700000000000uLL) != 0x8004700000000000uLL || (v15 & 0x7FD30E6FFF7CF070LL) != 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(0x8004700000000000uLL, v15);
    v11[3] = *(_QWORD *)a1;
    goto LABEL_9;
  }
  v16 = *((_QWORD *)a1 + 1);
  if ( (v16 & 0xFFFFFE7FFF7DF470uLL) != 0 || (v15 & v16) != v16 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v11[3] = *(_QWORD *)a1;
    v12 = *((_QWORD *)a1 + 1);
    goto LABEL_8;
  }
  TargetVirtualization = GetTargetVirtualization(
                           *(struct _LUID *)((char *)a1 + 16),
                           *((_DWORD *)a1 + 7),
                           v42,
                           &v41,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v14 + 34,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v14 + 35,
                           (enum _D3DKMT_DISPLAY_TARGET_USAGE *)(v14 + 260));
  v20 = TargetVirtualization;
  if ( TargetVirtualization < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v21 + 24) = v20;
    WdLogEvent5_WdError(v21);
    return (unsigned int)v20;
  }
  v22 = v41;
  v23 = *((_QWORD *)v14 + 6) | 0x800000000000LL;
  v24 = v42[0];
  v25 = 2;
  *((_QWORD *)v14 + 6) = v23;
  *((_QWORD *)v14 + 8) = *((_QWORD *)v7 + 31);
  *((_DWORD *)v14 + 18) = *((_DWORD *)a1 + 6);
  *((_DWORD *)v14 + 19) = *((_DWORD *)a1 + 7);
  *((_DWORD *)v14 + 58) = *((_DWORD *)a1 + 39);
  v26 = 0x8000000000000LL;
  v27 = v23 | 0x8000000000000LL;
  v14[177] = (v22 == 0 ? 2 : 0) | (v24 == 0);
  *((_QWORD *)v14 + 6) = v27;
  if ( a5 )
  {
    *((_DWORD *)v14 + 70) |= 0x80u;
    v28 = !v22 && v24;
    v14[312] = v28;
  }
  if ( (*(_QWORD *)a1 & 0x8000000000000LL) != 0 && v14[177] != *((_BYTE *)a1 + 101) )
    goto LABEL_25;
  *((_QWORD *)v14 + 34) = 0LL;
  if ( (*(_BYTE *)a1 & 0x87) != 0 )
  {
    *((_DWORD *)v14 + 20) = (unsigned __int16)*((_DWORD *)a1 + 18);
    *((_DWORD *)v14 + 21) = *((_DWORD *)a1 + 16);
    *((_DWORD *)v14 + 22) = *((_DWORD *)a1 + 17);
    *((_DWORD *)v14 + 23) = *((_DWORD *)a1 + 14);
    *((_DWORD *)v14 + 24) = *((_DWORD *)a1 + 15);
    *((_DWORD *)v14 + 25) = *((_DWORD *)a1 + 12);
    *((_DWORD *)v14 + 26) = *((_DWORD *)a1 + 13);
    *((_DWORD *)v14 + 27) = *((_DWORD *)a1 + 10);
    *((_DWORD *)v14 + 28) = *((_DWORD *)a1 + 11);
    *((_QWORD *)v14 + 15) = *((_QWORD *)a1 + 4);
    *((_DWORD *)v14 + 32) ^= (*((_DWORD *)v14 + 32) ^ *((_DWORD *)a1 + 19)) & 7;
    *((_DWORD *)v14 + 32) = *((_DWORD *)v14 + 32) & 7 | (*((_DWORD *)a1 + 18) >> 13) & 0x1F8;
  }
  v26 = v27;
  if ( (v27 & 2) != 0 && !*((_DWORD *)v14 + 26) )
  {
LABEL_25:
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v26, v27);
    v11[3] = v9;
    goto LABEL_9;
  }
  v29 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x20000LL) != 0 )
  {
    *((_QWORD *)v14 + 25) = *(_QWORD *)((char *)a1 + 124);
    if ( !a4 || v24 && v22 )
      v30 = 0LL;
    else
      v30 = 0x20000000000000LL;
    v26 = v30 | v27;
    *((_QWORD *)v14 + 6) = v30 | v27;
    v29 = *(_QWORD *)a1;
  }
  if ( (v29 & 0x800) != 0 )
  {
    *((_QWORD *)v14 + 24) = *(_QWORD *)((char *)a1 + 116);
    v29 = *(_QWORD *)a1;
  }
  if ( (v29 & 0x100) != 0 )
  {
    *((_DWORD *)v14 + 36) = *((_DWORD *)a1 + 22);
    *((_DWORD *)v14 + 37) = *((_DWORD *)a1 + 23);
    *((_DWORD *)v14 + 38) = *((_DWORD *)a1 + 22);
    *((_DWORD *)v14 + 39) = *((_DWORD *)a1 + 23);
    v31 = *((_DWORD *)a1 + 24);
    *((_DWORD *)v14 + 42) = 0;
    *((_DWORD *)v14 + 43) = 0;
    *((_DWORD *)v14 + 41) = v31;
    v26 |= 0x100uLL;
    LOBYTE(v31) = *((_BYTE *)a1 + 100);
    *((_QWORD *)v14 + 6) = v26;
    v14[176] = v31;
    v29 = *(_QWORD *)a1;
  }
  if ( (v29 & 0x8000000000LL) != 0 )
  {
    v32 = *((_DWORD *)a1 + 24);
    v26 |= 0x8000000000uLL;
    *((_QWORD *)v14 + 6) = v26;
    *((_DWORD *)v14 + 41) = v32;
    v29 = *(_QWORD *)a1;
  }
  if ( (v29 & 0x10000000000LL) != 0 )
  {
    v14[176] = *((_BYTE *)a1 + 100);
    *((_QWORD *)v14 + 6) = v26 | 0x10000000000LL;
    v29 = *(_QWORD *)a1;
  }
  if ( (v29 & 0x800000) != 0 )
  {
    *(_OWORD *)(v14 + 216) = *(_OWORD *)((char *)a1 + 140);
    v29 = *(_QWORD *)a1;
  }
  if ( (v29 & 0x200) != 0 )
  {
    if ( *((_DWORD *)a1 + 26) == 1 )
    {
      v25 = 1;
    }
    else if ( *((_DWORD *)a1 + 26) != 2 )
    {
      if ( *((_DWORD *)a1 + 26) == 3 )
      {
        v25 = 3;
      }
      else if ( *((_DWORD *)a1 + 26) == 4 )
      {
        v25 = 4;
      }
      else
      {
        v25 = 0;
      }
    }
    *((_DWORD *)v14 + 45) = v25;
  }
  v35 = ConvertDisplayConfigScalingToPathModalityForPath(a1, (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v14 + 48), a7);
  if ( v35 >= 0 )
  {
    *((_DWORD *)v14 + 60) = 0;
    if ( (*(_BYTE *)a1 & 8) != 0
      && (v39 = ConvertDisplayConfigWireFormatToPathModalityForPath(
                  a1,
                  (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v14 + 48)),
          v39 < 0) )
    {
      v40 = WdLogNewEntry5_WdError(v38, v37);
      *(_QWORD *)(v40 + 24) = v9;
      WdLogEvent5_WdError(v40);
      return (unsigned int)v39;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v36 = WdLogNewEntry5_WdError(v34, v33);
    *(_QWORD *)(v36 + 24) = v9;
    WdLogEvent5_WdError(v36);
    return (unsigned int)v35;
  }
}
