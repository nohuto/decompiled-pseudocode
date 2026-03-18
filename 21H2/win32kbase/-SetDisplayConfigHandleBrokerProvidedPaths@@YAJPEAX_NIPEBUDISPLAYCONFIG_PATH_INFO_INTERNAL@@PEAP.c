/*
 * XREFs of ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0172A20
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0174420 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0065C40 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C0083798 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0083844 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14134::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14134 @ 0x1C00DB128 (_SetDisplayConfigHandleBrokerProvidedPaths_--_2_--_AUTO_USING_PM_VirtualTopologyButNotVirtualMod.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C016FCAC (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
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
  __int64 v9; // rsi
  struct D3DKMT_GETPATHSMODALITY *v10; // rbx
  int PathsModality; // edi
  struct D3DKMT_GETPATHSMODALITY *v12; // rax
  unsigned int v13; // ebp
  struct D3DKMT_GETPATHSMODALITY *i; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  char *v18; // rsi
  _OWORD *v19; // rcx
  __int128 v20; // xmm1
  __int64 v21; // rcx
  struct D3DKMT_GETPATHSMODALITY *v22; // rax
  unsigned int v23; // ecx
  char *v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // ebp
  unsigned int v27; // esi
  unsigned int v28; // eax
  unsigned int *v29; // r14
  __int64 v30; // rdx
  unsigned int v31; // r8d
  bool j; // cf
  __int64 v33; // rcx
  unsigned int v34; // edx
  __int64 v35; // r9
  unsigned int v36; // edx
  unsigned int v37; // r10d
  int v38; // ecx
  unsigned int v39; // edx
  __int64 v40; // r9
  __int64 v41; // r9
  __int64 v42; // r11
  struct D3DKMT_GETPATHSMODALITY *v44; // [rsp+40h] [rbp-58h] BYREF
  __int64 v45; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v46; // [rsp+50h] [rbp-48h]

  v44 = 0LL;
  v9 = a1;
  v10 = 0LL;
  if ( a2 )
  {
    v22 = AllocPathsModality(a3);
    v10 = v22;
    if ( !v22 )
    {
      *(_DWORD *)a7 = 45;
      WdLogSingleEntry0(2LL);
      goto LABEL_18;
    }
    *((_WORD *)v22 + 10) = 0;
  }
  else
  {
    PathsModality = GetPathsModality(a1, &v44, 0x1000040u, 0);
    if ( PathsModality < 0 )
    {
      *(_DWORD *)a7 = 44;
      goto LABEL_69;
    }
    v12 = AllocPathsModality((unsigned __int16)a3 + *((_WORD *)v44 + 10));
    v10 = v12;
    if ( !v12 )
    {
      *(_DWORD *)a7 = 45;
      WdLogSingleEntry0(2LL);
LABEL_18:
      PathsModality = -1073741801;
      goto LABEL_69;
    }
    *((_WORD *)v12 + 10) = 0;
    v13 = 0;
    for ( i = v44; v13 < *((unsigned __int16 *)v44 + 10); ++v13 )
    {
      v15 = (__int64)i + 296 * v13 + 56;
      if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_1C0296940)(
                               v9,
                               *(_QWORD *)(v15 + 16),
                               *(unsigned int *)(v15 + 28)) )
      {
        v16 = *((unsigned __int16 *)v10 + 10);
        v17 = 2LL;
        v18 = (char *)v10 + 296 * v16;
        *((_WORD *)v10 + 10) = v16 + 1;
        v19 = v18 + 56;
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
          --v17;
        }
        while ( v17 );
        *v19 = *(_OWORD *)v15;
        v19[1] = *(_OWORD *)(v15 + 16);
        *((_QWORD *)v19 + 4) = *(_QWORD *)(v15 + 32);
        v21 = *((_QWORD *)v18 + 7);
        if ( (v21 & 0x4000000000000LL) == 0 || (*((_DWORD *)v18 + 60) & 0xFFFF0000) == 0xFE500000 )
        {
          WdLogSingleEntry0(1LL);
          v21 = *((_QWORD *)v18 + 7);
        }
        *((_QWORD *)v18 + 38) = 0LL;
        *((_QWORD *)v18 + 8) = v21 & 0x18001820B8FLL;
        *((_QWORD *)v18 + 7) = v21 | 0x80000000000000LL;
        v9 = a1;
      }
      i = v44;
    }
  }
  v23 = *((unsigned __int16 *)v10 + 10);
  v45 = (__int64)v10 + 56;
  v46 = v23;
  if ( v23 )
  {
    v24 = (char *)v10 + 312;
    v25 = v23;
    do
    {
      *(_DWORD *)v24 |= 0x80u;
      v24[32] = 0;
      v24 += 296;
      --v25;
    }
    while ( v25 );
    LOWORD(v23) = *((_WORD *)v10 + 10);
  }
  v26 = (unsigned __int16)v23;
  v27 = 0;
  LOWORD(v28) = v23;
  if ( a3 )
  {
    v29 = (unsigned int *)((char *)a4 + 28);
    do
    {
      if ( !a2 )
      {
        if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_1C0296940)(
                                 a1,
                                 *((_QWORD *)a4 + 27 * v27 + 2),
                                 *v29) )
        {
          WdLogSingleEntry0(2LL);
          v38 = 43;
          PathsModality = -1073741790;
LABEL_45:
          *(_DWORD *)a7 = v38;
          goto LABEL_68;
        }
        LOWORD(v28) = *((_WORD *)v10 + 10);
      }
      PathsModality = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
                        (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)a4 + 216 * v27),
                        (unsigned __int16)v28,
                        v27,
                        0,
                        1,
                        v10,
                        a6);
      if ( PathsModality < 0 )
      {
        v38 = 46;
        goto LABEL_45;
      }
      v30 = *((unsigned __int16 *)v10 + 10);
      if ( (*((_QWORD *)v10 + 37 * v30 + 7) & 0x4000000000000LL) == 0 )
      {
        WdLogSingleEntry0(1LL);
        LOWORD(v30) = *((_WORD *)v10 + 10);
      }
      v29 += 54;
      *((_QWORD *)v10 + 37 * (unsigned __int16)v30 + 7) &= ~0x4000000000000uLL;
      ++v27;
      LOWORD(v28) = *((_WORD *)v10 + 10) + 1;
      *((_WORD *)v10 + 10) = v28;
    }
    while ( v27 < a3 );
  }
  v31 = v26;
  for ( j = v26 < (unsigned __int16)v28; ; j = v31 < v28 )
  {
    if ( !j )
    {
      if ( (_WORD)v28 )
      {
        PathsModality = 0;
        *a5 = v10;
        v10 = 0LL;
      }
      else
      {
        *(_DWORD *)a7 = 47;
        WdLogSingleEntry0(2LL);
        PathsModality = -1073741811;
      }
      goto LABEL_68;
    }
    v33 = 296LL * v31;
    if ( *(_DWORD *)((char *)v10 + v33 + 80) != -2 )
      break;
    for ( *(_DWORD *)((char *)v10 + v33 + 80) = 0; ; ++*(_DWORD *)((char *)v10 + v33 + 80) )
    {
      v39 = 0;
      if ( !*((_WORD *)v10 + 10) )
        break;
      while ( 1 )
      {
        if ( v39 != v31 )
        {
          v40 = 296LL * v39;
          if ( *(_DWORD *)((char *)v10 + v40 + 72) == *(_DWORD *)((char *)v10 + v33 + 72)
            && *(_DWORD *)((char *)v10 + v40 + 76) == *(_DWORD *)((char *)v10 + v33 + 76)
            && *(_DWORD *)((char *)v10 + v40 + 80) == *(_DWORD *)((char *)v10 + v33 + 80) )
          {
            break;
          }
        }
        if ( ++v39 >= *((unsigned __int16 *)v10 + 10) )
          goto LABEL_41;
      }
    }
LABEL_41:
    if ( (*(_QWORD *)((_BYTE *)v10 + v33 + 56) & 0x4000000000000LL) == 0 )
    {
      v36 = v31 + 1;
      v37 = v31 | 0xFE500000;
      while ( v36 < *((unsigned __int16 *)v10 + 10) )
      {
        v41 = 296LL * v36;
        v42 = *(_QWORD *)((char *)v10 + v41 + 56);
        if ( (v42 & 0x4000000000000LL) == 0
          && *(_DWORD *)((char *)v10 + v41 + 240) == *(_DWORD *)((char *)v10 + v33 + 240) )
        {
          *(_DWORD *)((char *)v10 + v41 + 240) = v37;
          *(_QWORD *)((char *)v10 + v41 + 56) = v42 | 0x4000000000000LL;
          if ( !*((_BYTE *)v10 + v33 + 185) || *((_BYTE *)v10 + v33 + 344) )
            *(_DWORD *)((char *)v10 + v41 + 80) = *(_DWORD *)((char *)v10 + v33 + 80);
        }
        ++v36;
      }
      *(_DWORD *)((char *)v10 + v33 + 240) = v37;
      *(_QWORD *)((char *)v10 + v33 + 56) |= 0x4000000000000uLL;
    }
    v28 = *((unsigned __int16 *)v10 + 10);
    ++v31;
  }
  v34 = 0;
  if ( !v26 )
    goto LABEL_41;
  while ( 1 )
  {
    v35 = 296LL * v34;
    if ( *(_DWORD *)((char *)v10 + v35 + 72) == *(_DWORD *)((char *)v10 + v33 + 72)
      && *(_DWORD *)((char *)v10 + v35 + 76) == *(_DWORD *)((char *)v10 + v33 + 76)
      && *(_DWORD *)((char *)v10 + v35 + 80) == *(_DWORD *)((char *)v10 + v33 + 80) )
    {
      break;
    }
    if ( ++v34 >= v26 )
      goto LABEL_41;
  }
  WdLogSingleEntry0(2LL);
  PathsModality = -1073741790;
  *(_DWORD *)a7 = 48;
LABEL_68:
  SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14134::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14134(&v45);
LABEL_69:
  FreePathsModality(v44);
  FreePathsModality(v10);
  return (unsigned int)PathsModality;
}
