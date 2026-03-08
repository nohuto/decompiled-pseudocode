/*
 * XREFs of ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C019183C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0025C00 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0193FD4 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00271E8 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C0027994 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0027A4C (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     _SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14034::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14034 @ 0x1C018C84C (_SetDisplayConfigHandleBrokerProvidedPaths_--_2_--_AUTO_USING_PM_VirtualTopologyButNotVirtualMod.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C018CA3C (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
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
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v7; // rdi
  char v9; // r13
  __int64 v10; // rsi
  struct D3DKMT_GETPATHSMODALITY *v11; // rbx
  __int64 v12; // rdx
  int PathsModality; // edi
  struct D3DKMT_GETPATHSMODALITY *v14; // rax
  unsigned int v15; // ebp
  struct D3DKMT_GETPATHSMODALITY *v16; // rdx
  __int64 v17; // rcx
  char *v18; // rdi
  __int64 DxgkWin32kInterface; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  char *v22; // rsi
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  __int64 v25; // rcx
  __int64 v26; // rcx
  char *v27; // rax
  unsigned int v28; // ebp
  unsigned int v29; // esi
  unsigned int v30; // eax
  char *v31; // r14
  __int64 v32; // rax
  struct D3DKMT_GETPATHSMODALITY *v33; // rax
  int v34; // ecx
  unsigned int v35; // edx
  __int64 v36; // rcx
  int v37; // r10d
  unsigned int v38; // r8d
  __int64 v39; // r9
  unsigned int v40; // r8d
  unsigned int v41; // r10d
  unsigned int v42; // r8d
  __int64 v43; // r9
  int v44; // eax
  __int64 v45; // r9
  __int64 v46; // r11
  __int64 v47; // rdx
  struct D3DKMT_GETPATHSMODALITY *v49; // [rsp+40h] [rbp-58h] BYREF
  __int64 v50; // [rsp+48h] [rbp-50h] BYREF
  int v51; // [rsp+50h] [rbp-48h]

  v7 = a4;
  v49 = 0LL;
  v9 = a2;
  v10 = a1;
  v11 = 0LL;
  if ( a2 )
  {
    v33 = AllocPathsModality(a3);
    v11 = v33;
    if ( !v33 )
    {
      *(_DWORD *)a7 = 45;
      WdLogSingleEntry0(2LL);
      goto LABEL_31;
    }
    *((_WORD *)v33 + 10) = 0;
  }
  else
  {
    PathsModality = GetPathsModality(a1, &v49, 0x1000040u, 0);
    if ( PathsModality < 0 )
    {
      *(_DWORD *)a7 = 44;
      goto LABEL_70;
    }
    v14 = AllocPathsModality(*((_WORD *)v49 + 10) + (unsigned __int16)a3);
    v11 = v14;
    if ( !v14 )
    {
      *(_DWORD *)a7 = 45;
      WdLogSingleEntry0(2LL);
LABEL_31:
      PathsModality = -1073741801;
      goto LABEL_70;
    }
    *((_WORD *)v14 + 10) = 0;
    v15 = 0;
    v16 = v49;
    if ( *((_WORD *)v49 + 10) )
    {
      do
      {
        v17 = 296LL * v15;
        v18 = (char *)v16 + v17 + 56;
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v17, v16);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(DxgkWin32kInterface + 736))(
                v10,
                *((_QWORD *)v18 + 2),
                *((unsigned int *)v18 + 7)) )
        {
          v20 = *((unsigned __int16 *)v11 + 10);
          v21 = 2LL;
          v22 = (char *)v11 + 296 * v20;
          *((_WORD *)v11 + 10) = v20 + 1;
          v23 = v22 + 56;
          do
          {
            *v23 = *(_OWORD *)v18;
            v23[1] = *((_OWORD *)v18 + 1);
            v23[2] = *((_OWORD *)v18 + 2);
            v23[3] = *((_OWORD *)v18 + 3);
            v23[4] = *((_OWORD *)v18 + 4);
            v23[5] = *((_OWORD *)v18 + 5);
            v23[6] = *((_OWORD *)v18 + 6);
            v23 += 8;
            v24 = *((_OWORD *)v18 + 7);
            v18 += 128;
            *(v23 - 1) = v24;
            --v21;
          }
          while ( v21 );
          *v23 = *(_OWORD *)v18;
          v23[1] = *((_OWORD *)v18 + 1);
          *((_QWORD *)v23 + 4) = *((_QWORD *)v18 + 4);
          if ( !_bittest64((const signed __int64 *)v22 + 7, 0x32u) || (*((_DWORD *)v22 + 60) & 0xFFFF0000) == 0xFE500000 )
            WdLogSingleEntry0(1LL);
          v25 = *((_QWORD *)v22 + 7);
          *((_QWORD *)v22 + 38) = 0LL;
          *((_QWORD *)v22 + 8) = v25 & 0x18001820B8FLL;
          *((_QWORD *)v22 + 7) = v25 | 0x80000000000000LL;
          v10 = a1;
        }
        v16 = v49;
        ++v15;
      }
      while ( v15 < *((unsigned __int16 *)v49 + 10) );
      v9 = 0;
    }
    v7 = a4;
  }
  v26 = *((unsigned __int16 *)v11 + 10);
  v50 = (__int64)v11 + 56;
  v51 = v26;
  if ( (_DWORD)v26 )
  {
    v27 = (char *)v11 + 312;
    v16 = (struct D3DKMT_GETPATHSMODALITY *)(unsigned int)v26;
    do
    {
      *(_DWORD *)v27 |= 0x80u;
      v27[32] = 0;
      v27 += 296;
      v16 = (struct D3DKMT_GETPATHSMODALITY *)((char *)v16 - 1);
    }
    while ( v16 );
  }
  v28 = *((unsigned __int16 *)v11 + 10);
  v29 = 0;
  LOWORD(v30) = *((_WORD *)v11 + 10);
  if ( a3 )
  {
    v31 = (char *)v7 + 16;
    while ( 1 )
    {
      if ( !v9 )
      {
        v32 = DxDdGetDxgkWin32kInterface(v26, v16);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(v32 + 736))(
                a1,
                *(_QWORD *)v31,
                *((unsigned int *)v31 + 3)) )
          break;
      }
      PathsModality = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
                        (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v7 + 216 * v29),
                        *((unsigned __int16 *)v11 + 10),
                        v29,
                        0,
                        1,
                        v11,
                        a6);
      if ( PathsModality < 0 )
      {
        v34 = 46;
        goto LABEL_36;
      }
      if ( (*((_QWORD *)v11 + 37 * *((unsigned __int16 *)v11 + 10) + 7) & 0x4000000000000LL) == 0 )
        WdLogSingleEntry0(1LL);
      v31 += 216;
      *((_QWORD *)v11 + 37 * *((unsigned __int16 *)v11 + 10) + 7) &= ~0x4000000000000uLL;
      v26 = 1LL;
      ++v29;
      LOWORD(v30) = *((_WORD *)v11 + 10) + 1;
      *((_WORD *)v11 + 10) = v30;
      if ( v29 >= a3 )
        goto LABEL_37;
      v7 = a4;
    }
    WdLogSingleEntry0(2LL);
    v34 = 43;
    PathsModality = -1073741790;
LABEL_36:
    *(_DWORD *)a7 = v34;
    goto LABEL_69;
  }
LABEL_37:
  v35 = v28;
  if ( v28 >= (unsigned __int16)v30 )
  {
LABEL_65:
    if ( (_WORD)v30 )
    {
      PathsModality = 0;
      *a5 = v11;
      v11 = 0LL;
    }
    else
    {
      *(_DWORD *)a7 = 47;
      WdLogSingleEntry0(2LL);
      PathsModality = -1073741811;
    }
    goto LABEL_69;
  }
  while ( 1 )
  {
    v36 = 296LL * v35;
    v37 = *(_DWORD *)((char *)v11 + v36 + 80);
    if ( v37 == -2 )
    {
      for ( *(_DWORD *)((char *)v11 + v36 + 80) = 0; ; *(_DWORD *)((char *)v11 + v36 + 80) = v44 + 1 )
      {
        v42 = 0;
        if ( !*((_WORD *)v11 + 10) )
          break;
        while ( 1 )
        {
          if ( v42 != v35 )
          {
            v43 = 296LL * v42;
            if ( *(_DWORD *)((char *)v11 + v43 + 72) == *(_DWORD *)((char *)v11 + v36 + 72)
              && *(_DWORD *)((char *)v11 + v43 + 76) == *(_DWORD *)((char *)v11 + v36 + 76) )
            {
              v44 = *(_DWORD *)((char *)v11 + v36 + 80);
              if ( *(_DWORD *)((char *)v11 + v43 + 80) == v44 )
                break;
            }
          }
          if ( ++v42 >= *((unsigned __int16 *)v11 + 10) )
            goto LABEL_44;
        }
      }
      goto LABEL_44;
    }
    v38 = 0;
    if ( v28 )
      break;
LABEL_44:
    if ( (*(_QWORD *)((_BYTE *)v11 + v36 + 56) & 0x4000000000000LL) != 0 )
    {
      ++v35;
    }
    else
    {
      v40 = v35 + 1;
      v41 = v35++ | 0xFE500000;
      while ( v40 < *((unsigned __int16 *)v11 + 10) )
      {
        v45 = 296LL * v40;
        v46 = *(_QWORD *)((char *)v11 + v45 + 56);
        if ( (v46 & 0x4000000000000LL) == 0
          && *(_DWORD *)((char *)v11 + v45 + 240) == *(_DWORD *)((char *)v11 + v36 + 240) )
        {
          *(_DWORD *)((char *)v11 + v45 + 240) = v41;
          *(_QWORD *)((char *)v11 + v45 + 56) = v46 | 0x4000000000000LL;
          if ( !*((_BYTE *)v11 + v36 + 185) || *((_BYTE *)v11 + v36 + 344) )
            *(_DWORD *)((char *)v11 + v45 + 80) = *(_DWORD *)((char *)v11 + v36 + 80);
        }
        ++v40;
      }
      *(_DWORD *)((char *)v11 + v36 + 240) = v41;
      *(_QWORD *)((char *)v11 + v36 + 56) |= 0x4000000000000uLL;
    }
    v30 = *((unsigned __int16 *)v11 + 10);
    if ( v35 >= v30 )
      goto LABEL_65;
  }
  while ( 1 )
  {
    v39 = 296LL * v38;
    if ( *(_DWORD *)((char *)v11 + v39 + 72) == *(_DWORD *)((char *)v11 + v36 + 72)
      && *(_DWORD *)((char *)v11 + v39 + 76) == *(_DWORD *)((char *)v11 + v36 + 76)
      && *(_DWORD *)((char *)v11 + v39 + 80) == v37 )
    {
      break;
    }
    if ( ++v38 >= v28 )
      goto LABEL_44;
  }
  WdLogSingleEntry0(2LL);
  PathsModality = -1073741790;
  *(_DWORD *)a7 = 48;
LABEL_69:
  SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14034::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14034(&v50);
LABEL_70:
  FreePathsModality(v49, v12);
  FreePathsModality(v11, v47);
  return (unsigned int)PathsModality;
}
