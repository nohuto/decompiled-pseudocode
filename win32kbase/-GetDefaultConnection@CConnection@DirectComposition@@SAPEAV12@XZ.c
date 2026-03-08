/*
 * XREFs of ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C006AA58
 * Callers:
 *     NtDCompositionGetTargetStatistics @ 0x1C0002420 (NtDCompositionGetTargetStatistics.c)
 *     NtDCompositionGetStatistics @ 0x1C00026E0 (NtDCompositionGetStatistics.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1C0007F80 (NtDCompositionWaitForCompositorClock.c)
 *     NtDCompositionGetFrameId @ 0x1C0008660 (NtDCompositionGetFrameId.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C005CAC0 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     DCompositionIsShellProcess @ 0x1C005D888 (DCompositionIsShellProcess.c)
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C006A9A0 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C006BA74 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C006BD88 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     NtDCompositionSetBlurredWallpaperSurface @ 0x1C0091270 (NtDCompositionSetBlurredWallpaperSurface.c)
 *     DCompositionDwmInitialize @ 0x1C0091CD0 (DCompositionDwmInitialize.c)
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
 *     <none>
 */

struct DirectComposition::CConnection *__fastcall DirectComposition::CConnection::GetDefaultConnection(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v3; // rdi
  struct _ERESOURCE *v4; // rbx
  struct _ERESOURCE *v5; // rdi

  v1 = 0LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  if ( !CurrentProcessWin32Process )
    goto LABEL_7;
  if ( !*CurrentProcessWin32Process )
    goto LABEL_7;
  v3 = CurrentProcessWin32Process[32];
  if ( !v3 )
    goto LABEL_7;
  v4 = *(struct _ERESOURCE **)(v3 + 32);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v4, 1u);
  v1 = *(volatile signed __int32 **)(v3 + 24);
  if ( v1 )
    _InterlockedIncrement(v1);
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 32));
  KeLeaveCriticalRegion();
  if ( !v1 )
  {
LABEL_7:
    v5 = DirectComposition::CConnection::s_pSessionConnectionLock;
    if ( DirectComposition::CConnection::s_pSessionConnectionLock )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v5, 1u);
      v1 = (volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection;
      if ( DirectComposition::CConnection::s_pSessionConnection )
        _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
      ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
      KeLeaveCriticalRegion();
    }
  }
  return (struct DirectComposition::CConnection *)v1;
}
