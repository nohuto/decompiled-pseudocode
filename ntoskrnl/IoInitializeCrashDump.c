/*
 * XREFs of IoInitializeCrashDump @ 0x14083643C
 * Callers:
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140B6E3C0 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140392E74 (IopRemoveDumpCapsuleSupport.c)
 *     IopInitDumpCapsuleSupport @ 0x1403AE334 (IopInitDumpCapsuleSupport.c)
 *     IopInitializeCrashDump @ 0x140834B28 (IopInitializeCrashDump.c)
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
