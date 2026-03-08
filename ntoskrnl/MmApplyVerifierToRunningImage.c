/*
 * XREFs of MmApplyVerifierToRunningImage @ 0x140AE4F80
 * Callers:
 *     VfThunkApplyDriverAddedThunks @ 0x140AD8160 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140AD858C (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140AD86BC (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x14035ECF0 (MiLookupDataTableEntry.c)
 *     MiIsImportOptimizationEnabled @ 0x140369044 (MiIsImportOptimizationEnabled.c)
 *     MmIsVerifierApplicableToImage @ 0x140619C10 (MmIsVerifierApplicableToImage.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14063E4F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MmAcquireLoadLock @ 0x1407D2360 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407D2400 (MmReleaseLoadLock.c)
 *     MmHasImageBeenImportOptimized @ 0x1407F72B8 (MmHasImageBeenImportOptimized.c)
 *     MmReplaceImportEntriesForVerifier @ 0x140A2A95C (MmReplaceImportEntriesForVerifier.c)
 */

__int64 __fastcall MmApplyVerifierToRunningImage(_QWORD *a1, int *a2, unsigned int a3)
{
  struct _KTHREAD *Lock; // rsi
  int IsVerifierApplicableToImage; // ebx
  ULONG_PTR v8; // rcx
  int v9; // eax

  Lock = 0LL;
  if ( (MiFlags & 0x30) == 0x10 )
  {
    Lock = MmAcquireLoadLock();
    a1 = MiLookupDataTableEntry(a1[6], 1);
  }
  IsVerifierApplicableToImage = MmIsVerifierApplicableToImage((__int64)a1);
  if ( IsVerifierApplicableToImage >= 0 )
  {
    if ( MiIsImportOptimizationEnabled() && (unsigned int)MmHasImageBeenImportOptimized() )
      v9 = MiReapplyImportOptimizationForDriverVerifier(v8, a2, a3);
    else
      v9 = MmReplaceImportEntriesForVerifier((__int64)a1, a2, a3);
    IsVerifierApplicableToImage = v9;
  }
  if ( Lock )
    MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)IsVerifierApplicableToImage;
}
