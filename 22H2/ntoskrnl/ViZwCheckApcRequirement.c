/*
 * XREFs of ViZwCheckApcRequirement @ 0x1409EC804
 * Callers:
 *     VfZwDeviceIoControlFile @ 0x1409E9550 (VfZwDeviceIoControlFile.c)
 *     VfZwFsControlFile @ 0x1409E9B60 (VfZwFsControlFile.c)
 *     VfZwQueryDirectoryFile @ 0x1409EABE0 (VfZwQueryDirectoryFile.c)
 *     VfZwReadFile @ 0x1409EB960 (VfZwReadFile.c)
 *     VfZwWriteFile @ 0x1409EC700 (VfZwWriteFile.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x14025A4E0 (KeAreAllApcsDisabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D64 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViZwCheckApcRequirement(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 0x100) != 0 && (CurrentIrql || KeAreAllApcsDisabled()) )
    VerifierBugCheckIfAppropriate(
      0xC4u,
      0xE6uLL,
      BugCheckParameter2,
      CurrentIrql,
      KeGetCurrentThread()->SpecialApcDisable);
}
