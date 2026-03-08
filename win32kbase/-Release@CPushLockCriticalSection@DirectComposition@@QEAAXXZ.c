/*
 * XREFs of ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0091D74
 * Callers:
 *     ?QueryTargetStats@CConnection@DirectComposition@@QEAA_N_KAEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1C00025E4 (-QueryTargetStats@CConnection@DirectComposition@@QEAA_N_KAEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCO.c)
 *     ?QueryStats@CConnection@DirectComposition@@QEAA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPOSITION_TARGET_ID@@PEAI@Z @ 0x1C00029E4 (-QueryStats@CConnection@DirectComposition@@QEAA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPO.c)
 *     ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1C0008188 (-GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z.c)
 *     ?GetPrimaryTargetId@CConnection@DirectComposition@@AEAA_NPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1C000827C (-GetPrimaryTargetId@CConnection@DirectComposition@@AEAA_NPEAUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ?GetFrameId@CConnection@DirectComposition@@QEAA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x1C000872C (-GetFrameId@CConnection@DirectComposition@@QEAA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0091094 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z @ 0x1C0091358 (-SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C0091B60 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x1C0091C00 (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0091D10 (-OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C00991C0 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     NtDCompositionBoostCompositorClock @ 0x1C0247E90 (NtDCompositionBoostCompositorClock.c)
 *     NtDCompositionEnableMMCSS @ 0x1C0248710 (NtDCompositionEnableMMCSS.c)
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C0248E88 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C024950C (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CPushLockCriticalSection::Release(DirectComposition::CPushLockCriticalSection *this)
{
  if ( *((_BYTE *)this + 8) )
    ExReleasePushLockExclusiveEx(this, 0LL);
  else
    ExReleasePushLockSharedEx(this, 0LL);
}
