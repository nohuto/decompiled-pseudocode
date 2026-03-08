/*
 * XREFs of ViMiscExCheckAPCsDisabled @ 0x140ADE574
 * Callers:
 *     VfMiscExAcquireFastMutexUnsafe_Entry @ 0x140ADCA70 (VfMiscExAcquireFastMutexUnsafe_Entry.c)
 *     VfMiscExReleaseFastMutexUnsafe_Entry @ 0x140ADCC10 (VfMiscExReleaseFastMutexUnsafe_Entry.c)
 *     VfMiscExReleaseFastMutex_Entry @ 0x140ADCC30 (VfMiscExReleaseFastMutex_Entry.c)
 *     VfMiscExfAcquirePushLockExclusive_Entry @ 0x140ADCC70 (VfMiscExfAcquirePushLockExclusive_Entry.c)
 *     VfMiscExfReleasePushLockShared_Entry @ 0x140ADCC90 (VfMiscExfReleasePushLockShared_Entry.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int8 __fastcall ViMiscExCheckAPCsDisabled(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1
    && (KeGetCurrentThread()->MiscFlags & 0x400) == 0
    && !KeGetCurrentThread()->WaitBlock[3].SpareLong )
  {
    VerifierBugCheckIfAppropriate(
      0xC4u,
      (unsigned int)BugCheckParameter1,
      CurrentIrql,
      KeGetCurrentThread()->CombinedApcDisable,
      a2);
  }
  return CurrentIrql;
}
