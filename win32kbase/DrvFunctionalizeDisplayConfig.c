__int64 __fastcall DrvFunctionalizeDisplayConfig(
        unsigned int *a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int PathModalityForDisplayConfig; // ebx
  __int64 DxgkWin32kInterface; // rax
  int v17; // r12d
  __int64 v18; // rcx
  unsigned int v19; // r13d
  unsigned int v20; // ebx
  struct D3DKMT_GETPATHSMODALITY *v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  struct D3DKMT_GETPATHSMODALITY *v27[6]; // [rsp+50h] [rbp-29h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v28[2]; // [rsp+80h] [rbp+7h] BYREF
  bool v30; // [rsp+E0h] [rbp+67h] BYREF

  v6 = a3;
  if ( (a3 & 0xFFFFFFF8) != 0 )
  {
    WdLogSingleEntry1(2LL, a3);
    return 3221225485LL;
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v30);
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v27);
  v11 = *a1;
  v27[0] = (struct D3DKMT_GETPATHSMODALITY *)&off_1C0281C58;
  *(_OWORD *)v28 = 0LL;
  if ( (v6 & 1) != 0 )
  {
    if ( (unsigned int)v11 < 2 )
    {
LABEL_5:
      v12 = v11;
LABEL_21:
      WdLogSingleEntry1(2LL, v12);
      PathModalityForDisplayConfig = -1073741811;
      goto LABEL_35;
    }
    a2 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)a2 + 216);
    LODWORD(v11) = v11 - 1;
  }
  else
  {
    if ( !(_DWORD)v11 )
      goto LABEL_5;
    if ( (v6 & 2) != 0 )
    {
      v12 = v6;
      goto LABEL_21;
    }
  }
  PathModalityForDisplayConfig = DrvSetDisplayConfigValidateParams(
                                   (unsigned int)v11,
                                   a2,
                                   a4 != 0 ? 98400 : 32864,
                                   0LL,
                                   1);
  if ( PathModalityForDisplayConfig >= 0 )
  {
    if ( a4 )
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v14, v13);
      PathModalityForDisplayConfig = (*(__int64 (__fastcall **)(__int64, __int64, struct D3DKMT_GETPATHSMODALITY **))(DxgkWin32kInterface + 728))(
                                       a4,
                                       0x20000LL,
                                       &v28[1]);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      a6 = 0;
      v17 = v6 & 4;
      PathModalityForDisplayConfig = SetDisplayConfigHandleBrokerProvidedPaths(
                                       (__int64)v28[1],
                                       v17 != 0,
                                       v11,
                                       a2,
                                       v28,
                                       &v30,
                                       (enum _DXGK_DIAG_SDC_STAGE *)&a6);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
    }
    else
    {
      PathModalityForDisplayConfig = AllocatePathModalityForDisplayConfig(v11, a2, v28);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      PathModalityForDisplayConfig = ConvertDisplayConfigToPathModality(v11, a2, v28[0], 0LL);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      v17 = v6 & 4;
    }
    v19 = a4 != 0 ? 0x1000000 : 0;
    if ( (v6 & 1) != 0 )
    {
      v20 = *((_DWORD *)a2 - 50);
      if ( v20 >= (unsigned int)v11 )
      {
        v12 = v20;
        goto LABEL_21;
      }
      v21 = v28[0];
      if ( a4 )
      {
        if ( *((unsigned __int16 *)v28[0] + 10) < (unsigned int)v11 )
        {
          WdLogSingleEntry0(1LL);
          v21 = v28[0];
        }
        v20 += *((unsigned __int16 *)v21 + 10) - (_DWORD)v11;
      }
      if ( (v6 & 2) != 0 )
      {
        v18 = 296LL * v20;
        *(_QWORD *)((char *)v21 + v18 + 56) |= 0x4000000000uLL;
      }
      v22 = DxDdGetDxgkWin32kInterface(v18, v21);
      v23 = (*(__int64 (__fastcall **)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD, __int64, __int64))(v22 + 712))(
              v19,
              v28[0],
              v20,
              (__int64)a2 - 192,
              (__int64)a2 - 196);
    }
    else
    {
      v24 = DxDdGetDxgkWin32kInterface(v18, v13);
      PathModalityForDisplayConfig = (*(__int64 (__fastcall **)(_QWORD, struct D3DKMT_GETPATHSMODALITY *))(v24 + 152))(
                                       v19 | 0x8000,
                                       v28[0]);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      if ( a4 && !v17 )
        FunctionalizeDisplayConfigRemoveUnownedPaths((_OWORD *)v28[1], (__int64)v28[0]);
      v26 = DxDdGetDxgkWin32kInterface(v25, v13);
      v23 = (*(__int64 (__fastcall **)(struct D3DKMT_GETPATHSMODALITY *, unsigned int *, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, __int64))(v26 + 680))(
              v28[0],
              a1,
              a2,
              a5);
    }
    PathModalityForDisplayConfig = v23;
  }
LABEL_35:
  DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(v27, v13);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v30);
  return (unsigned int)PathModalityForDisplayConfig;
}
