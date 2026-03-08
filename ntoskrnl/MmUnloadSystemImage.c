/*
 * XREFs of MmUnloadSystemImage @ 0x1407F5FA0
 * Callers:
 *     MiSessionUnloadAllImages @ 0x14067E8F8 (MiSessionUnloadAllImages.c)
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     MiLoadImportDll @ 0x14081B9F8 (MiLoadImportDll.c)
 *     IopDeleteDriver @ 0x14085AE30 (IopDeleteDriver.c)
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x1409635F8 (PnprLoadPluginDriver.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A323A8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiMapAndApplyPatchInSession @ 0x140A37338 (MiMapAndApplyPatchInSession.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402993C0 (PsDetachSiloFromCurrentThread.c)
 *     MmAcquireLoadLock @ 0x1407D2360 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407D2400 (MmReleaseLoadLock.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(ULONG_PTR BugCheckParameter2)
{
  struct _LIST_ENTRY *v2; // rdi
  char v3; // si
  struct _KTHREAD *Lock; // rbx
  struct _LIST_ENTRY *v6; // rax

  v2 = 0LL;
  v3 = 0;
  if ( LOBYTE(PsGetCurrentServerSiloGlobals()[85].Blink) )
  {
    v6 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
    v2 = PsAttachSiloToCurrentThread(v6);
    v3 = 1;
  }
  Lock = MmAcquireLoadLock();
  MiUnloadSystemImage(BugCheckParameter2);
  MmReleaseLoadLock((__int64)Lock);
  if ( v3 )
    PsDetachSiloFromCurrentThread(v2);
  return 0LL;
}
