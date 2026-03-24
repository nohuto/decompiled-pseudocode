/*
 * XREFs of MmUnloadSystemImage @ 0x140771E10
 * Callers:
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x14073CD08 (IopLoadDriver.c)
 *     IopDeleteDriver @ 0x140771D30 (IopDeleteDriver.c)
 *     MiSessionUnloadAllImages @ 0x1407784DC (MiSessionUnloadAllImages.c)
 *     MiLoadImportDll @ 0x1407AC820 (MiLoadImportDll.c)
 *     PnpReplacePartitionUnit @ 0x1408AC2C0 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x1408ADE98 (PnprLoadPluginDriver.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1402526A0 (HalSystemVectorDispatchEntry.c)
 *     PsDetachSiloFromCurrentThread @ 0x14034C200 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14034C220 (PsAttachSiloToCurrentThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     MmReleaseLoadLock @ 0x1406FE9E0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406FEA40 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(__int64 BugCheckParameter2, __int64 a2)
{
  struct _LIST_ENTRY *v3; // rdi
  char v4; // si
  struct _KTHREAD *Lock; // rbx
  struct _LIST_ENTRY *v7; // rax

  v3 = 0LL;
  v4 = 0;
  if ( *((_BYTE *)PsGetCurrentServerSiloGlobals(BugCheckParameter2, a2) + 1176) )
  {
    v7 = (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry();
    v3 = PsAttachSiloToCurrentThread(v7);
    v4 = 1;
  }
  Lock = MmAcquireLoadLock();
  MiUnloadSystemImage(BugCheckParameter2, -1);
  MmReleaseLoadLock((__int64)Lock);
  if ( v4 )
    PsDetachSiloFromCurrentThread(v3);
  return 0LL;
}
