/*
 * XREFs of DrvFunctionalizeDisplayConfig @ 0x1C0147784
 * Callers:
 *     NtUserFunctionalizeDisplayConfig @ 0x1C012E660 (NtUserFunctionalizeDisplayConfig.c)
 * Callees:
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C001A1D4 (--0AUTO_TGO@@IEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007EE00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00CFC70 (DrvSetDisplayConfigValidateParams.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0142DC8 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0142FAC (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C01435BC (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0145634 (-FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0145D0C (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 */

__int64 __fastcall DrvFunctionalizeDisplayConfig(
        unsigned int *a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // r14
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v8; // rsi
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  int PathModalityForDisplayConfig; // ebx
  int v17; // r13d
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r12d
  unsigned int v21; // ebx
  struct D3DKMT_GETPATHSMODALITY *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  struct D3DKMT_GETPATHSMODALITY *v25[6]; // [rsp+50h] [rbp-29h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v26[2]; // [rsp+80h] [rbp+7h] BYREF
  bool v28; // [rsp+E0h] [rbp+67h] BYREF

  v6 = a3;
  v8 = a2;
  if ( (a3 & 0xFFFFFFF8) != 0 )
  {
    v10 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v10 + 24) = v6;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  EngAcquireSemaphore(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v25);
  v14 = *a1;
  v25[0] = (struct D3DKMT_GETPATHSMODALITY *)&off_1C020A590;
  *(_OWORD *)v26 = 0LL;
  if ( (v6 & 1) != 0 )
  {
    if ( (unsigned int)v14 < 2 )
    {
LABEL_5:
      v15 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v15 + 24) = v14;
LABEL_21:
      WdLogEvent5_WdError(v15);
      PathModalityForDisplayConfig = -1073741811;
      goto LABEL_35;
    }
    v8 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v8 + 200);
    LODWORD(v14) = v14 - 1;
  }
  else
  {
    if ( !(_DWORD)v14 )
      goto LABEL_5;
    if ( (v6 & 2) != 0 )
    {
      v15 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v15 + 24) = v6;
      goto LABEL_21;
    }
  }
  PathModalityForDisplayConfig = DrvSetDisplayConfigValidateParams((unsigned int)v14, v8, a4 != 0 ? 98400 : 32864, 0, 1);
  if ( PathModalityForDisplayConfig >= 0 )
  {
    if ( a4 )
    {
      PathModalityForDisplayConfig = ((__int64 (__fastcall *)(__int64, __int64, struct D3DKMT_GETPATHSMODALITY **))qword_1C0250B88)(
                                       a4,
                                       0x20000LL,
                                       &v26[1]);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      a6 = 0;
      v17 = v6 & 4;
      PathModalityForDisplayConfig = SetDisplayConfigHandleBrokerProvidedPaths(
                                       (__int64)v26[1],
                                       v17 != 0,
                                       v14,
                                       v8,
                                       v26,
                                       &v28,
                                       (enum _DXGK_DIAG_SDC_STAGE *)&a6);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
    }
    else
    {
      PathModalityForDisplayConfig = AllocatePathModalityForDisplayConfig((unsigned int)v14, v8, v26);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      PathModalityForDisplayConfig = ConvertDisplayConfigToPathModality((unsigned int)v14, v8, v26[0], 0LL);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      v17 = v6 & 4;
    }
    v20 = a4 != 0 ? 0x1000000 : 0;
    if ( (v6 & 1) != 0 )
    {
      v21 = *((_DWORD *)v8 - 46);
      if ( v21 >= (unsigned int)v14 )
      {
        v15 = WdLogNewEntry5_WdError(v19, v18);
        *(_QWORD *)(v15 + 24) = *((unsigned int *)v8 - 46);
        goto LABEL_21;
      }
      v22 = v26[0];
      if ( a4 )
      {
        if ( *((unsigned __int16 *)v26[0] + 10) < (unsigned int)v14 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v19, v26[0]);
          WdLogEvent5_WdAssertion(v23);
          v22 = v26[0];
        }
        v21 += *((unsigned __int16 *)v22 + 10) - (_DWORD)v14;
      }
      if ( (v6 & 2) != 0 )
      {
        *((_QWORD *)v22 + 34 * v21 + 6) |= 0x4000000000uLL;
        v22 = v26[0];
      }
      v24 = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD, char *, char *))qword_1C0250B78)(
              v20,
              v22,
              v21,
              (char *)v8 - 176,
              (char *)v8 - 180);
    }
    else
    {
      PathModalityForDisplayConfig = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *))qword_1C0250928)(
                                       v20 | 0x8000,
                                       v26[0]);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      if ( a4 && !v17 )
        FunctionalizeDisplayConfigRemoveUnownedPaths(v26[1], v26[0]);
      v24 = ((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY *, unsigned int *, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, __int64))qword_1C0250B58)(
              v26[0],
              a1,
              v8,
              a5);
    }
    PathModalityForDisplayConfig = v24;
  }
LABEL_35:
  DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(v25);
  return (unsigned int)PathModalityForDisplayConfig;
}
