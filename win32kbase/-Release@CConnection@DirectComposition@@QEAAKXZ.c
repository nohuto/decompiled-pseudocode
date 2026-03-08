/*
 * XREFs of ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005E51C
 * Callers:
 *     NtDCompositionGetTargetStatistics @ 0x1C0002420 (NtDCompositionGetTargetStatistics.c)
 *     NtDCompositionGetStatistics @ 0x1C00026E0 (NtDCompositionGetStatistics.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1C0007F80 (NtDCompositionWaitForCompositorClock.c)
 *     NtDCompositionGetFrameId @ 0x1C0008660 (NtDCompositionGetFrameId.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C005B650 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C005CAC0 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     DCompositionIsShellProcess @ 0x1C005D888 (DCompositionIsShellProcess.c)
 *     ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C005E4D0 (-Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C006BA74 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C006BD88 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0090F08 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     NtDCompositionSetBlurredWallpaperSurface @ 0x1C0091270 (NtDCompositionSetBlurredWallpaperSurface.c)
 *     DCompositionDwmInitialize @ 0x1C0091CD0 (DCompositionDwmInitialize.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C009986C (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C009AE28 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C009AF18 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00CA030 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     DCompositionForceRender @ 0x1C00D6720 (DCompositionForceRender.c)
 *     DCompositionBoostCompositionClockForInput @ 0x1C0247B3C (DCompositionBoostCompositionClockForInput.c)
 *     DCompositionDDAChange @ 0x1C0247CA0 (DCompositionDDAChange.c)
 *     NtDCompositionBoostCompositorClock @ 0x1C0247E90 (NtDCompositionBoostCompositorClock.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C0247F70 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1C02480B0 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionEnableMMCSS @ 0x1C0248710 (NtDCompositionEnableMMCSS.c)
 *     NtDesktopCaptureBits @ 0x1C0248A00 (NtDesktopCaptureBits.c)
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0099D20 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Release(DirectComposition::CConnection *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
    DirectComposition::CConnection::`scalar deleting destructor'(this, a2);
  return v2;
}
