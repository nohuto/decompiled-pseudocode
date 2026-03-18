/*
 * XREFs of DxgkGetSessionTokenManager @ 0x1C00108B0
 * Callers:
 *     NtTokenManagerOpenSectionAndEvents @ 0x1C000E220 (NtTokenManagerOpenSectionAndEvents.c)
 *     NtTokenManagerThread @ 0x1C000E410 (NtTokenManagerThread.c)
 *     NtUnBindCompositionSurface @ 0x1C000E650 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C000ED80 (NtBindCompositionSurface.c)
 *     NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C00762B0 (NtTokenManagerConfirmOutstandingAnalogToken.c)
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C00768D0 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C0076B40 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C007A94C (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C007ADA0 (NtNotifyPresentToCompositionSurface.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C007B8A0 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C007C240 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z @ 0x1C007C460 (-PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C007DF4C (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x1C007E3DC (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 *     ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x1C007E930 (-SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z.c)
 *     ?SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z @ 0x1C0089D64 (-SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0365210 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C01C0434 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DxgkGetSessionTokenManager(_QWORD *a1)
{
  unsigned int v2; // edi
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  void (__fastcall ***v5)(_QWORD); // rbx

  v2 = -1073741823;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)SessionData + 2343);
    if ( v5 )
    {
      (**v5)(*((_QWORD *)SessionData + 2343));
      v2 = 0;
      *a1 = v5;
    }
  }
  return v2;
}
