/*
 * XREFs of MiIsWorkingSetTrimThread @ 0x1403531E0
 * Callers:
 *     MiSystemFault @ 0x140261080 (MiSystemFault.c)
 *     MiFlushAllFilesystemPages @ 0x140629304 (MiFlushAllFilesystemPages.c)
 *     MmAddRangeToCrashDump @ 0x1406301B0 (MmAddRangeToCrashDump.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsWorkingSetTrimThread()
{
  void (__fastcall __noreturn *Blink)(); // rcx

  Blink = (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink;
  return Blink == KeBalanceSetManager || (char *)Blink == (char *)MiPartitionWorkingSetManager;
}
