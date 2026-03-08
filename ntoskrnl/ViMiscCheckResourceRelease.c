/*
 * XREFs of ViMiscCheckResourceRelease @ 0x140ADE4BC
 * Callers:
 *     VfMiscExReleaseResourceLite_Entry @ 0x140ABD830 (VfMiscExReleaseResourceLite_Entry.c)
 *     VfMiscExReleaseResourceForThreadLite_Entry @ 0x140ADCC50 (VfMiscExReleaseResourceForThreadLite_Entry.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

struct _KTHREAD *__fastcall ViMiscCheckResourceRelease(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r8
  struct _KTHREAD *result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
  {
    result = KeGetCurrentThread();
    if ( (result->MiscFlags & 0x400) == 0 )
    {
      result = KeGetCurrentThread();
      if ( !result->WaitBlock[3].SpareLong && CurrentIrql != 2 )
        return (struct _KTHREAD *)VerifierBugCheckIfAppropriate(
                                    0xC4u,
                                    0x38uLL,
                                    CurrentIrql,
                                    KeGetCurrentThread()->CombinedApcDisable,
                                    a1);
    }
  }
  return result;
}
