/*
 * XREFs of ViZwCheckApcRequirement @ 0x140AD1ED8
 * Callers:
 *     VfZwDeviceIoControlFile_Entry @ 0x140AD16B0 (VfZwDeviceIoControlFile_Entry.c)
 *     VfZwQueryDirectoryFileEx_Entry @ 0x140AD1B00 (VfZwQueryDirectoryFileEx_Entry.c)
 *     VfZwQueryDirectoryFile_Entry @ 0x140AD1B70 (VfZwQueryDirectoryFile_Entry.c)
 *     VfZwWriteFile_Entry @ 0x140AD1D50 (VfZwWriteFile_Entry.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x14034C170 (KeAreAllApcsDisabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

BOOLEAN __fastcall ViZwCheckApcRequirement(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN result; // al

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
    return VerifierBugCheckIfAppropriate(
             0xC4u,
             0xE6uLL,
             BugCheckParameter2,
             CurrentIrql,
             KeGetCurrentThread()->SpecialApcDisable);
  result = KeAreAllApcsDisabled();
  if ( result )
    return VerifierBugCheckIfAppropriate(
             0xC4u,
             0xE6uLL,
             BugCheckParameter2,
             CurrentIrql,
             KeGetCurrentThread()->SpecialApcDisable);
  return result;
}
