/*
 * XREFs of ViZwCheckApcRequirement @ 0x140A95858
 * Callers:
 *     VfZwDeviceIoControlFile_Entry @ 0x140A95030 (VfZwDeviceIoControlFile_Entry.c)
 *     VfZwQueryDirectoryFileEx_Entry @ 0x140A95480 (VfZwQueryDirectoryFileEx_Entry.c)
 *     VfZwQueryDirectoryFile_Entry @ 0x140A954F0 (VfZwQueryDirectoryFile_Entry.c)
 *     VfZwWriteFile_Entry @ 0x140A956D0 (VfZwWriteFile_Entry.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
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
