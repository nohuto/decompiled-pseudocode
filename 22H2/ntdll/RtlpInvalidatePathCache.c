/*
 * XREFs of RtlpInvalidatePathCache @ 0x180080710
 * Callers:
 *     RtlSetSearchPathMode @ 0x180080370 (RtlSetSearchPathMode.c)
 *     LdrSetDllDirectory @ 0x180080610 (LdrSetDllDirectory.c)
 *     LdrAddDllDirectory @ 0x18008BCE0 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x18008C3F0 (LdrRemoveDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x1800DF204 (RtlpSignalSystemDirsModification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInvalidatePathCache(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
  {
    if ( (*(_QWORD *)(result + 80))-- != 1LL )
      return 0LL;
  }
  return result;
}
