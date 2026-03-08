/*
 * XREFs of MiIsWorkingSetTrimThread @ 0x1402E7920
 * Callers:
 *     MiSystemFault @ 0x1402220A0 (MiSystemFault.c)
 *     MiFlushAllFilesystemPages @ 0x140626E68 (MiFlushAllFilesystemPages.c)
 *     MmAddRangeToCrashDump @ 0x14062DD30 (MmAddRangeToCrashDump.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsWorkingSetTrimThread()
{
  void (__fastcall __noreturn *Blink)(); // rcx

  Blink = (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink;
  return Blink == KeBalanceSetManager || (char *)Blink == (char *)MiPartitionWorkingSetManager;
}
