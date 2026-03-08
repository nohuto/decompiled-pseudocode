/*
 * XREFs of VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140ADF5C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViTargetTrackContiguousMemory @ 0x140AC8D80 (ViTargetTrackContiguousMemory.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     VfFaultsInjectResourceFailure @ 0x140AD2FAC (VfFaultsInjectResourceFailure.c)
 *     VfFillAllocatedMemory @ 0x140AD700C (VfFillAllocatedMemory.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateContiguousMemorySpecifyCache(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        int a5)
{
  int v9; // ebp
  _SLIST_ENTRY *v10; // rax
  _SLIST_ENTRY *v11; // rbx
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0)
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)ViFnAutoFailInject("MmAllocateContiguousMemorySpecifyCache") )
  {
    return 0LL;
  }
  if ( a5 == 1 )
  {
    v9 = (MmVerifierData & 0x2000000) != 0 ? 4 : 64;
  }
  else
  {
    v9 = 516;
    if ( a5 == 2 )
      v9 = 1028;
  }
  if ( (MmVerifierData & 0x4000000) != 0 && a3 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, a3, BugCheckParameter3, 0LL);
  v10 = (_SLIST_ENTRY *)((__int64 (__fastcall *)(ULONG_PTR, __int64, ULONG_PTR, __int64, int, unsigned int))pXdvMmAllocateContiguousNodeMemory)(
                          BugCheckParameter3,
                          a2,
                          a3,
                          a4,
                          v9,
                          0x80000000);
  v11 = v10;
  if ( v10 )
  {
    VfFillAllocatedMemory(v10, BugCheckParameter3);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v11, BugCheckParameter3);
  }
  return v11;
}
