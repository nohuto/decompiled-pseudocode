/*
 * XREFs of VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1409E6FF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetTrackContiguousMemory @ 0x1409D86B0 (ViTargetTrackContiguousMemory.c)
 *     VfFaultsInjectResourceFailure @ 0x1409DD82C (VfFaultsInjectResourceFailure.c)
 *     VfAllocPoolNotification @ 0x1409E0FB4 (VfAllocPoolNotification.c)
 *     VfFillAllocatedMemory @ 0x1409E0FF4 (VfFillAllocatedMemory.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateContiguousMemorySpecifyCacheNode(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v11; // ebp
  _SLIST_ENTRY *v12; // rbx
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  if ( a5 == 1 )
  {
    v11 = (MmVerifierData & 0x2000000) != 0 ? 4 : 64;
  }
  else
  {
    v11 = 516;
    if ( a5 == 2 )
      v11 = 1028;
  }
  if ( (MmVerifierData & 0x4000000) != 0 && a3 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, a3, BugCheckParameter3, 0LL);
  v12 = (_SLIST_ENTRY *)((__int64 (__fastcall *)(ULONG_PTR, __int64, ULONG_PTR, __int64, int, int))pXdvMmAllocateContiguousNodeMemory)(
                          BugCheckParameter3,
                          a2,
                          a3,
                          a4,
                          v11,
                          a6);
  VfAllocPoolNotification();
  if ( v12 )
  {
    VfFillAllocatedMemory(v12, BugCheckParameter3);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v12, BugCheckParameter3);
  }
  return v12;
}
