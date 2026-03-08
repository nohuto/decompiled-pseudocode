/*
 * XREFs of DxgkReleaseSessionModeChangeLock @ 0x1C01AFADC
 * Callers:
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0009440 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0162BA0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0167848 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkUpdateGdiInfo @ 0x1C01695F0 (DxgkUpdateGdiInfo.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C01732D0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178EFC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C017D64C (DxgkUseAdapterViewInCurrentSession.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018B2A0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C01A7070 (DpiGdoDispatchInternalIoctl.c)
 *     DxgkGetDisplayModeList @ 0x1C01A95D0 (DxgkGetDisplayModeList.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01AE290 (DxgkGetAdapterDeviceDesc.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C01BAE68 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01C0640 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     DxgkDisplayOnOff @ 0x1C01C33B0 (DxgkDisplayOnOff.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C3E44 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkGetDpiOverrideForSource @ 0x1C01C4DB0 (DxgkGetDpiOverrideForSource.c)
 *     DxgkGetVirtualRefreshRateInfo @ 0x1C01D3110 (DxgkGetVirtualRefreshRateInfo.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C01DBB90 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1C01E3D30 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C02D9700 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E58D0 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C02F5694 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1C02FDC78 (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C02FE570 (DxgkUpdateDpiInfoForNewOverride.c)
 *     ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1C030E7EC (-HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C03340B0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C0335F08 (DxgkRedrawCursorForPostCompositon.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x1C0016DE4 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 */

void DxgkReleaseSessionModeChangeLock()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 CurrentProcessSessionId; // rdi
  __int64 v6; // rax
  DXGFASTMUTEX *v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // rcx
  DXGFASTMUTEX *v11; // [rsp+50h] [rbp-18h] BYREF
  char v12; // [rsp+58h] [rbp-10h]

  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v2 )
    goto LABEL_20;
  v12 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v1, v0, v3, v4);
  v11 = (DXGFASTMUTEX *)(v2 + 88);
  if ( v2 == -88 )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v11 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 599LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire(v11);
  v12 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v2 + 80) )
  {
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v11);
    v8 = 0LL;
  }
  else
  {
    _mm_lfence();
    v6 = *(_QWORD *)(v2 + 48);
    v7 = v11;
    v8 = *(_QWORD *)(v6 + 8 * CurrentProcessSessionId);
    v12 = 0;
    if ( *((struct _KTHREAD **)v11 + 3) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v11, 0LL, 0LL);
    if ( *((int *)v7 + 8) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v7 + 8))-- == 1 )
    {
      *((_QWORD *)v7 + 3) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v7 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  if ( v8 )
  {
    v10 = v8 + 18544;
    if ( *(struct _KTHREAD **)(v8 + 18552) == KeGetCurrentThread() )
    {
      *(_QWORD *)(v8 + 18552) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 18560));
      ExReleasePushLockSharedEx(v10, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  else
  {
LABEL_20:
    WdLogSingleEntry1(1LL, 363LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSessionData != NULL", 363LL, 0LL, 0LL, 0LL, 0LL);
  }
}
