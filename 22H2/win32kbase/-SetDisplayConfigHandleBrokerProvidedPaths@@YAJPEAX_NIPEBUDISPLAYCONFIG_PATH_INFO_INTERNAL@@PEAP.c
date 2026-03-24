/*
 * XREFs of ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0145D0C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C001A4C0 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0147784 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001A1A0 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C009E934 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C009E9F4 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14136::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14136 @ 0x1C00CAEEC (_SetDisplayConfigHandleBrokerProvidedPaths_--_2_--_AUTO_USING_PM_VirtualTopologyButNotVirtualMod.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C0143060 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 */

__int64 __fastcall SetDisplayConfigHandleBrokerProvidedPaths(
        __int64 a1,
        char a2,
        unsigned int a3,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        struct D3DKMT_GETPATHSMODALITY **a5,
        bool *a6,
        enum _DXGK_DIAG_SDC_STAGE *a7)
{
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v7; // r13
  int PathsModality; // ebx
  struct D3DKMT_GETPATHSMODALITY *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // esi
  __int64 v15; // rdi
  __int64 v16; // rcx
  char *v17; // rbx
  __int64 v18; // rcx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  __int64 v21; // rcx
  __int64 v22; // rax
  struct D3DKMT_GETPATHSMODALITY *v23; // rax
  __int64 v24; // rax
  struct D3DKMT_GETPATHSMODALITY *v25; // r8
  __int64 v26; // rcx
  char *v27; // rax
  unsigned int v28; // r14d
  unsigned int v29; // edi
  unsigned int *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // r9d
  __int64 v35; // r10
  unsigned int v36; // r10d
  unsigned int v37; // r11d
  __int64 v38; // rax
  int v39; // ecx
  __int64 v40; // r10
  __int64 v41; // rax
  __int64 v42; // rax
  struct D3DKMT_GETPATHSMODALITY *v44; // [rsp+40h] [rbp-20h]
  struct D3DKMT_GETPATHSMODALITY *v45; // [rsp+48h] [rbp-18h] BYREF
  __int64 v46; // [rsp+50h] [rbp-10h] BYREF
  int v47; // [rsp+58h] [rbp-8h]

  v7 = a4;
  v45 = 0LL;
  v44 = 0LL;
  if ( !a2 )
  {
    PathsModality = GetPathsModality(a1, &v45, 0x1000040u, 0);
    if ( PathsModality < 0 )
    {
      *(_DWORD *)a7 = 44;
      goto LABEL_66;
    }
    v11 = AllocPathsModality((unsigned __int16)a3 + *((_WORD *)v45 + 10));
    v44 = v11;
    if ( v11 )
    {
      *((_WORD *)v11 + 10) = 0;
      v14 = 0;
      v12 = (__int64)v45;
      if ( *((_WORD *)v45 + 10) )
      {
        do
        {
          v15 = 272LL * v14 + v12 + 48;
          if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_1C0250B90)(
                                   a1,
                                   *(_QWORD *)(v15 + 16),
                                   *(unsigned int *)(v15 + 28)) )
          {
            v16 = *((unsigned __int16 *)v44 + 10);
            v17 = (char *)v44 + 272 * v16;
            *((_WORD *)v44 + 10) = v16 + 1;
            v18 = 2LL;
            v19 = v17 + 48;
            do
            {
              *v19 = *(_OWORD *)v15;
              v19[1] = *(_OWORD *)(v15 + 16);
              v19[2] = *(_OWORD *)(v15 + 32);
              v19[3] = *(_OWORD *)(v15 + 48);
              v19[4] = *(_OWORD *)(v15 + 64);
              v19[5] = *(_OWORD *)(v15 + 80);
              v19[6] = *(_OWORD *)(v15 + 96);
              v19 += 8;
              v20 = *(_OWORD *)(v15 + 112);
              v15 += 128LL;
              *(v19 - 1) = v20;
              --v18;
            }
            while ( v18 );
            *v19 = *(_OWORD *)v15;
            v21 = *((_QWORD *)v17 + 6);
            if ( (v21 & 0x4000000000000LL) == 0 || (*((_DWORD *)v17 + 58) & 0xFFFF0000) == 0xFE500000 )
            {
              v22 = WdLogNewEntry5_WdAssertion(v21, 128LL);
              WdLogEvent5_WdAssertion(v22);
              v21 = *((_QWORD *)v17 + 6);
            }
            *((_QWORD *)v17 + 34) = 0LL;
            *((_QWORD *)v17 + 7) = v21 & 0x18000820B8FLL;
            *((_QWORD *)v17 + 6) = v21 | 0x80000000000000LL;
          }
          v12 = (__int64)v45;
          ++v14;
        }
        while ( v14 < *((unsigned __int16 *)v45 + 10) );
        v7 = a4;
      }
      goto LABEL_18;
    }
LABEL_16:
    *(_DWORD *)a7 = 45;
    v24 = WdLogNewEntry5_WdError(v13, v12);
    WdLogEvent5_WdError(v24);
    PathsModality = -1073741801;
    goto LABEL_66;
  }
  v23 = AllocPathsModality(a3);
  v44 = v23;
  if ( !v23 )
    goto LABEL_16;
  *((_WORD *)v23 + 10) = 0;
LABEL_18:
  v25 = v44;
  v26 = *((unsigned __int16 *)v44 + 10);
  v46 = (__int64)v44 + 48;
  v47 = v26;
  if ( (_DWORD)v26 )
  {
    v27 = (char *)v44 + 280;
    v12 = (unsigned int)v26;
    do
    {
      *(_DWORD *)v27 |= 0x80u;
      v27[32] = 0;
      v27 += 272;
      --v12;
    }
    while ( v12 );
    v25 = v44;
  }
  v28 = *((unsigned __int16 *)v25 + 10);
  v29 = 0;
  if ( a3 )
  {
    v30 = (unsigned int *)((char *)v7 + 28);
    do
    {
      if ( !a2 )
      {
        if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_1C0250B90)(
                                 a1,
                                 *((_QWORD *)v7 + 25 * v29 + 2),
                                 *v30) )
        {
          v38 = WdLogNewEntry5_WdError(v32, v31);
          WdLogEvent5_WdError(v38);
          v39 = 43;
          PathsModality = -1073741790;
LABEL_42:
          *(_DWORD *)a7 = v39;
          goto LABEL_65;
        }
        v25 = v44;
      }
      PathsModality = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
                        (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v7 + 200 * v29),
                        *((unsigned __int16 *)v25 + 10),
                        v29,
                        1,
                        1,
                        v25,
                        a6);
      if ( PathsModality < 0 )
      {
        v39 = 46;
        goto LABEL_42;
      }
      v12 = (__int64)v44;
      if ( (*((_QWORD *)v44 + 34 * *((unsigned __int16 *)v44 + 10) + 6) & 0x4000000000000LL) == 0 )
      {
        v33 = WdLogNewEntry5_WdAssertion(0x4000000000000LL, v44);
        WdLogEvent5_WdAssertion(v33);
        v12 = (__int64)v44;
      }
      v26 = 272LL * *(unsigned __int16 *)(v12 + 20);
      ++v29;
      v30 += 50;
      *(_QWORD *)(v26 + v12 + 48) &= ~0x4000000000000uLL;
      ++*((_WORD *)v44 + 10);
      v25 = v44;
    }
    while ( v29 < a3 );
  }
  v34 = v28;
  if ( v28 >= *((unsigned __int16 *)v25 + 10) )
  {
LABEL_61:
    if ( *((_WORD *)v25 + 10) )
    {
      PathsModality = 0;
      v44 = 0LL;
      *a5 = v25;
    }
    else
    {
      *(_DWORD *)a7 = 47;
      v41 = WdLogNewEntry5_WdError(v26, v12);
      WdLogEvent5_WdError(v41);
      PathsModality = -1073741811;
    }
    goto LABEL_65;
  }
  while ( 1 )
  {
    v26 = 272LL * v34;
    if ( *(_DWORD *)((char *)v25 + v26 + 72) == -2 )
    {
      *(_DWORD *)((char *)v25 + v26 + 72) = 0;
      while ( 1 )
      {
        v25 = v44;
        v12 = 0LL;
        if ( !*((_WORD *)v44 + 10) )
          goto LABEL_38;
        while ( 1 )
        {
          if ( (_DWORD)v12 != v34 )
          {
            v40 = 272LL * (unsigned int)v12;
            if ( *(_DWORD *)((char *)v44 + v40 + 64) == *(_DWORD *)((char *)v44 + v26 + 64)
              && *(_DWORD *)((char *)v44 + v40 + 68) == *(_DWORD *)((char *)v44 + v26 + 68)
              && *(_DWORD *)((char *)v44 + v40 + 72) == *(_DWORD *)((char *)v44 + v26 + 72) )
            {
              break;
            }
          }
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= *((unsigned __int16 *)v44 + 10) )
            goto LABEL_38;
        }
        ++*(_DWORD *)((char *)v44 + v26 + 72);
      }
    }
    v12 = 0LL;
    if ( v28 )
      break;
LABEL_38:
    if ( (*(_QWORD *)((_BYTE *)v25 + v26 + 48) & 0x4000000000000LL) == 0 )
    {
      v36 = v34 + 1;
      v37 = v34 | 0xFE500000;
      while ( v36 < *((unsigned __int16 *)v25 + 10) )
      {
        v12 = 272LL * v36;
        if ( (*(_QWORD *)((_BYTE *)v25 + v12 + 48) & 0x4000000000000LL) == 0
          && *(_DWORD *)((char *)v25 + v12 + 232) == *(_DWORD *)((char *)v25 + v26 + 232) )
        {
          *(_DWORD *)((char *)v25 + v12 + 232) = v37;
          *(_QWORD *)((char *)v44 + v12 + 48) |= 0x4000000000000uLL;
          v25 = v44;
          if ( !*((_BYTE *)v44 + v26 + 177) || *((_BYTE *)v44 + v26 + 312) )
          {
            *(_DWORD *)((char *)v44 + v12 + 72) = *(_DWORD *)((char *)v44 + v26 + 72);
            v25 = v44;
          }
        }
        ++v36;
      }
      *(_DWORD *)((char *)v25 + v26 + 232) = v37;
      *(_QWORD *)((char *)v44 + v26 + 48) |= 0x4000000000000uLL;
      v25 = v44;
    }
    if ( ++v34 >= *((unsigned __int16 *)v25 + 10) )
      goto LABEL_61;
  }
  while ( 1 )
  {
    v35 = 272LL * (unsigned int)v12;
    if ( *(_DWORD *)((char *)v25 + v35 + 64) == *(_DWORD *)((char *)v25 + v26 + 64)
      && *(_DWORD *)((char *)v25 + v35 + 68) == *(_DWORD *)((char *)v25 + v26 + 68)
      && *(_DWORD *)((char *)v25 + v35 + 72) == *(_DWORD *)((char *)v25 + v26 + 72) )
    {
      break;
    }
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= v28 )
      goto LABEL_38;
  }
  v42 = WdLogNewEntry5_WdError(v26, v12);
  WdLogEvent5_WdError(v42);
  PathsModality = -1073741790;
  *(_DWORD *)a7 = 48;
LABEL_65:
  SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14136::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14136(&v46);
LABEL_66:
  FreePathsModality(v45);
  FreePathsModality(v44);
  return (unsigned int)PathsModality;
}
