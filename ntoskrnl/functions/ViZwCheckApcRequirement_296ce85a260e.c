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
