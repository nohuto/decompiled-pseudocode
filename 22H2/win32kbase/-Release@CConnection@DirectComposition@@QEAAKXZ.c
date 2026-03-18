/*
 * XREFs of ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C002602C
 * Callers:
 *     NtDCompositionGetTargetStatistics @ 0x1C0003190 (NtDCompositionGetTargetStatistics.c)
 *     NtDCompositionGetStatistics @ 0x1C0003450 (NtDCompositionGetStatistics.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1C0008BC0 (NtDCompositionWaitForCompositorClock.c)
 *     NtDCompositionGetFrameId @ 0x1C0009310 (NtDCompositionGetFrameId.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C0022540 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0023020 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     DCompositionIsShellProcess @ 0x1C00252E4 (DCompositionIsShellProcess.c)
 *     ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C0025FE0 (-Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C00335E4 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C00338F8 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C0065BA0 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00864C8 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     NtDCompositionSetBlurredWallpaperSurface @ 0x1C0086830 (NtDCompositionSetBlurredWallpaperSurface.c)
 *     DCompositionDwmInitialize @ 0x1C0087290 (DCompositionDwmInitialize.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C00A7788 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00BA000 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00C38D8 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     DCompositionForceRender @ 0x1C00CA5F4 (DCompositionForceRender.c)
 *     DCompositionBoostCompositionClockForInput @ 0x1C0208FE0 (DCompositionBoostCompositionClockForInput.c)
 *     DCompositionDDAChange @ 0x1C0209140 (DCompositionDDAChange.c)
 *     NtDCompositionBoostCompositorClock @ 0x1C0209330 (NtDCompositionBoostCompositorClock.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C0209410 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1C0209550 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionEnableMMCSS @ 0x1C0209A70 (NtDCompositionEnableMMCSS.c)
 *     NtDesktopCaptureBits @ 0x1C0209D60 (NtDesktopCaptureBits.c)
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0083E50 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Release(DirectComposition::CConnection *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
    DirectComposition::CConnection::`scalar deleting destructor'(this, a2);
  return v2;
}
