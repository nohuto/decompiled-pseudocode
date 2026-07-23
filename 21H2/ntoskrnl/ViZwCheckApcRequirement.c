/*
 * XREFs of ViZwCheckApcRequirement @ 0x1409ED7F4
 * Callers:
 *     VfZwDeviceIoControlFile @ 0x1409EA540 (VfZwDeviceIoControlFile.c)
 *     VfZwFsControlFile @ 0x1409EAB50 (VfZwFsControlFile.c)
 *     VfZwQueryDirectoryFile @ 0x1409EBBD0 (VfZwQueryDirectoryFile.c)
 *     VfZwReadFile @ 0x1409EC950 (VfZwReadFile.c)
 *     VfZwWriteFile @ 0x1409ED6F0 (VfZwWriteFile.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x14027C1F0 (KeAreAllApcsDisabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
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
