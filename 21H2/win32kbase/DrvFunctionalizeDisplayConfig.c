/*
 * XREFs of DrvFunctionalizeDisplayConfig @ 0x1C0174420
 * Callers:
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0158C20 (NtUserFunctionalizeDisplayConfig.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C0065C78 (--0AUTO_TGO@@IEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00DEB70 (DrvSetDisplayConfigValidateParams.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C016FAB0 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C016FC20 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C017026C (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C017236C (-FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0172A20 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 */

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
  int PathModalityForDisplayConfig; // ebx
  int v14; // r13d
  unsigned int v15; // r12d
  unsigned int v16; // ebx
  struct D3DKMT_GETPATHSMODALITY *v17; // rdx
  int v18; // eax
  int v19; // r8d
  __int64 v20; // rcx
  struct D3DKMT_GETPATHSMODALITY *v21[6]; // [rsp+50h] [rbp-29h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v22[2]; // [rsp+80h] [rbp+7h] BYREF
  bool v24; // [rsp+E0h] [rbp+67h] BYREF

  v6 = a3;
  if ( (a3 & 0xFFFFFFF8) != 0 )
  {
    WdLogSingleEntry1(2LL, a3);
    return 3221225485LL;
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v24);
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v21);
  v11 = *a1;
  v21[0] = (struct D3DKMT_GETPATHSMODALITY *)&off_1C024B4A8;
  *(_OWORD *)v22 = 0LL;
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
      PathModalityForDisplayConfig = ((__int64 (__fastcall *)(__int64, __int64, struct D3DKMT_GETPATHSMODALITY **))qword_1C0296938)(
                                       a4,
                                       0x20000LL,
                                       &v22[1]);
      if ( PathModalityForDisplayConfig >= 0 )
      {
        a6 = 0;
        v14 = v6 & 4;
        PathModalityForDisplayConfig = SetDisplayConfigHandleBrokerProvidedPaths(
                                         (__int64)v22[1],
                                         v14 != 0,
                                         v11,
                                         a2,
                                         v22,
                                         &v24,
                                         (enum _DXGK_DIAG_SDC_STAGE *)&a6);
        if ( PathModalityForDisplayConfig >= 0 )
        {
LABEL_18:
          v15 = a4 != 0 ? 0x1000000 : 0;
          if ( (v6 & 1) != 0 )
          {
            v16 = *((_DWORD *)a2 - 50);
            if ( v16 >= (unsigned int)v11 )
            {
              v12 = v16;
              goto LABEL_21;
            }
            v17 = v22[0];
            if ( a4 )
            {
              if ( *((unsigned __int16 *)v22[0] + 10) < (unsigned int)v11 )
              {
                WdLogSingleEntry0(1LL);
                v17 = v22[0];
              }
              v16 += *((unsigned __int16 *)v17 + 10) - (_DWORD)v11;
            }
            if ( (v6 & 2) != 0 )
            {
              *((_QWORD *)v17 + 37 * v16 + 7) |= 0x4000000000uLL;
              v17 = v22[0];
            }
            v18 = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD, char *, char *))qword_1C0296928)(
                    v15,
                    v17,
                    v16,
                    (char *)a2 - 192,
                    (char *)a2 - 196);
          }
          else
          {
            PathModalityForDisplayConfig = qword_1C02966F8(v15 | 0x8000, v22[0]);
            if ( PathModalityForDisplayConfig < 0 )
              goto LABEL_35;
            if ( a4 && !v14 )
              FunctionalizeDisplayConfigRemoveUnownedPaths(v22[1], v22[0]);
            v18 = ((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY *, unsigned int *, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, __int64))qword_1C0296908)(
                    v22[0],
                    a1,
                    a2,
                    a5);
          }
          PathModalityForDisplayConfig = v18;
        }
      }
    }
    else
    {
      PathModalityForDisplayConfig = AllocatePathModalityForDisplayConfig(v11, a2, v22);
      if ( PathModalityForDisplayConfig >= 0 )
      {
        PathModalityForDisplayConfig = ConvertDisplayConfigToPathModality(v11, a2, v22[0], 0LL);
        if ( PathModalityForDisplayConfig >= 0 )
        {
          v14 = v6 & 4;
          goto LABEL_18;
        }
      }
    }
  }
LABEL_35:
  DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(v21);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v19);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v20);
  }
  return (unsigned int)PathModalityForDisplayConfig;
}
