/*
 * XREFs of IoInitializeCrashDump @ 0x1408360EC
 * Callers:
 *     MiCreatePagingFile @ 0x140834C2C (MiCreatePagingFile.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140B726E0 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140394AF4 (IopRemoveDumpCapsuleSupport.c)
 *     IopInitDumpCapsuleSupport @ 0x1403B30F4 (IopInitDumpCapsuleSupport.c)
 *     IopInitializeCrashDump @ 0x1408347D8 (IopInitializeCrashDump.c)
 */

char __fastcall IoInitializeCrashDump(__int64 a1, __int128 *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v5; // di
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  if ( ForceDumpDisabled || !AllowCrashDump )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
  v7 = *a2;
  v5 = IopInitializeCrashDump(a1, &v7);
  if ( v5 )
  {
    IopRemoveDumpCapsuleSupport();
  }
  else if ( CapsuleDumpAllowed )
  {
    IopInitDumpCapsuleSupport();
  }
  ExReleaseResourceLite(&IopCrashDumpLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}
