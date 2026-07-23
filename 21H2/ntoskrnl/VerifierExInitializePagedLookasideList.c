/*
 * XREFs of VerifierExInitializePagedLookasideList @ 0x1409E2410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C7B0C (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x1409D7F30 (VfTargetDriversIsEnabled.c)
 *     ViLookasideTrackList @ 0x1409E27BC (ViLookasideTrackList.c)
 */

__int64 __fastcall VerifierExInitializePagedLookasideList(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        int a4,
        ULONG_PTR BugCheckParameter3,
        int a6,
        __int16 a7)
{
  unsigned int v11; // ebx
  int IsEnabled; // ebp
  __int16 v13; // cx
  unsigned __int64 retaddr; // [rsp+68h] [rbp+0h]

  v11 = 0;
  IsEnabled = VfTargetDriversIsEnabled(retaddr);
  if ( IsEnabled )
  {
    if ( BugCheckParameter3 < 8 && (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xCDuLL, BugCheckParameter2, BugCheckParameter3, 8LL);
    VfUtilSynchronizationObjectSanityChecks((PVOID)BugCheckParameter2, 0x80uLL);
    v13 = 0;
  }
  else
  {
    v13 = a7;
  }
  pXdvExInitializePagedLookasideList(
    BugCheckParameter2,
    a2,
    a3,
    a4,
    BugCheckParameter3,
    a6,
    v13,
    IsEnabled,
    (__int64)ExInitializePagedLookasideListInternal);
  if ( IsEnabled || KernelVerifier )
    v11 = 1;
  return ViLookasideTrackList(BugCheckParameter2, v11);
}
