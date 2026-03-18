/*
 * XREFs of ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0081294
 * Callers:
 *     ?OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ @ 0x1C00803A0 (-OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?GetFrameId@CConnection@DirectComposition@@QEAA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x1C0080AF4 (-GetFrameId@CConnection@DirectComposition@@QEAA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z.c)
 *     ?QueryTargetStats@CConnection@DirectComposition@@QEAA_N_KAEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1C0080D28 (-QueryTargetStats@CConnection@DirectComposition@@QEAA_N_KAEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCO.c)
 *     ?QueryStats@CConnection@DirectComposition@@QEAA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPOSITION_TARGET_ID@@PEAI@Z @ 0x1C0081180 (-QueryStats@CConnection@DirectComposition@@QEAA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPO.c)
 *     ?GetPrimaryTargetId@CConnection@DirectComposition@@AEAA_NPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1C021338C (-GetPrimaryTargetId@CConnection@DirectComposition@@AEAA_NPEAUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ?SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z @ 0x1C02135BC (-SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z.c)
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
