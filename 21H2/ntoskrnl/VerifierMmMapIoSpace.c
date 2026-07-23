/*
 * XREFs of VerifierMmMapIoSpace @ 0x1409E79A0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     MmCheckMapIoSpace @ 0x1409C6EA8 (MmCheckMapIoSpace.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1409D82B0 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x1409DD82C (VfFaultsInjectResourceFailure.c)
 *     VfAllocPoolNotification @ 0x1409E0FB4 (VfAllocPoolNotification.c)
 */

__int64 __fastcall VerifierMmMapIoSpace(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, unsigned int a3)
{
  unsigned __int8 CurrentIrql; // cl
  unsigned int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x73uLL, CurrentIrql, (unsigned int)BugCheckParameter3, a2);
  if ( (MmVerifierData & 1) != 0 )
    MmCheckMapIoSpace(BugCheckParameter3, a2);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) == 1 )
    return 0LL;
  if ( (MmVerifierData & 0x2000000) != 0 )
  {
    v8 = 4;
    if ( a3 != 1 )
    {
      v8 = 516;
      if ( a3 == 2 )
        v8 = 1028;
    }
    v9 = MmMapIoSpaceEx(BugCheckParameter3, a2, v8);
  }
  else
  {
    v9 = ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, _QWORD))pXdvMmMapIoSpace)(BugCheckParameter3, a2, a3);
  }
  v10 = v9;
  VfAllocPoolNotification();
  if ( v10 )
  {
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 208LL, 0xD8u, a2);
  }
  return v10;
}
