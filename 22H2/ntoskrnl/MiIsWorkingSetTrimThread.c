/*
 * XREFs of MiIsWorkingSetTrimThread @ 0x14031E080
 * Callers:
 *     MiSystemFault @ 0x140291A80 (MiSystemFault.c)
 *     MiFlushAllFilesystemPages @ 0x140535508 (MiFlushAllFilesystemPages.c)
 *     MmAddRangeToCrashDump @ 0x140538518 (MmAddRangeToCrashDump.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsWorkingSetTrimThread()
{
  void (__fastcall __noreturn *Blink)(); // rcx

  Blink = (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink;
  return Blink == KeBalanceSetManager || (char *)Blink == (char *)MiPartitionWorkingSetManager;
}
