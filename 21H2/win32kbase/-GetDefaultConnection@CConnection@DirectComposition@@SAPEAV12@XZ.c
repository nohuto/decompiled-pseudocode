/*
 * XREFs of ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00164EC
 * Callers:
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C000AA1C (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C000CE0C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     NtDCompositionGetFrameStatistics @ 0x1C00162B0 (NtDCompositionGetFrameStatistics.c)
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C00165E0 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 *     DCompositionIsShellProcess @ 0x1C0071E50 (DCompositionIsShellProcess.c)
 *     DCompositionDwmInitialize @ 0x1C0080360 (DCompositionDwmInitialize.c)
 *     NtDCompositionGetTargetStatistics @ 0x1C0080B80 (NtDCompositionGetTargetStatistics.c)
 *     NtDCompositionGetStatistics @ 0x1C0080E30 (NtDCompositionGetStatistics.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C00951A0 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C00951F4 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     DCompositionForceRender @ 0x1C00D27C0 (DCompositionForceRender.c)
 *     DCompositionDDAChange @ 0x1C0210E80 (DCompositionDDAChange.c)
 *     NtDCompositionBoostCompositorClock @ 0x1C02111C0 (NtDCompositionBoostCompositorClock.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C02112B0 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1C0211480 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionEnableMMCSS @ 0x1C0211AD0 (NtDCompositionEnableMMCSS.c)
 *     NtDCompositionGetFrameId @ 0x1C0211BC0 (NtDCompositionGetFrameId.c)
 *     NtDCompositionSetBlurredWallpaperSurface @ 0x1C0211F70 (NtDCompositionSetBlurredWallpaperSurface.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1C0212230 (NtDCompositionWaitForCompositorClock.c)
 *     NtDesktopCaptureBits @ 0x1C02123B0 (NtDesktopCaptureBits.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CConnection *__fastcall DirectComposition::CConnection::GetDefaultConnection(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile signed __int32 *v4; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdi
  struct _ERESOURCE *v7; // rbx
  struct _ERESOURCE *v8; // rdi

  v4 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3, a4);
  if ( !CurrentProcessWin32Process )
    goto LABEL_6;
  v6 = *(_QWORD *)(CurrentProcessWin32Process + 256);
  if ( !v6 )
    goto LABEL_6;
  v7 = *(struct _ERESOURCE **)(v6 + 32);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v7, 1u);
  v4 = *(volatile signed __int32 **)(v6 + 24);
  if ( v4 )
    _InterlockedIncrement(v4);
  ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
  KeLeaveCriticalRegion();
  if ( !v4 )
  {
LABEL_6:
    v8 = DirectComposition::CConnection::s_pSessionConnectionLock;
    if ( DirectComposition::CConnection::s_pSessionConnectionLock )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v8, 1u);
      v4 = (volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection;
      if ( DirectComposition::CConnection::s_pSessionConnection )
        _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
      ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
      KeLeaveCriticalRegion();
    }
  }
  return (struct DirectComposition::CConnection *)v4;
}
