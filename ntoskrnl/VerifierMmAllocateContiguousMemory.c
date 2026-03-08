/*
 * XREFs of VerifierMmAllocateContiguousMemory @ 0x140ADF440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViTargetTrackContiguousMemory @ 0x140AC8D80 (ViTargetTrackContiguousMemory.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     VfFaultsInjectResourceFailure @ 0x140AD2FAC (VfFaultsInjectResourceFailure.c)
 *     VfFillAllocatedMemory @ 0x140AD700C (VfFillAllocatedMemory.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateContiguousMemory(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  int v4; // edi
  _SLIST_ENTRY *v5; // rax
  _SLIST_ENTRY *v6; // rbx
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0)
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)ViFnAutoFailInject("MmAllocateContiguousMemory") )
  {
    return 0LL;
  }
  v4 = (MmVerifierData & 0x2000000) != 0 ? 4 : 64;
  if ( (MmVerifierData & 0x4000000) != 0 && BugCheckParameter2 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  v5 = (_SLIST_ENTRY *)((__int64 (__fastcall *)(ULONG_PTR, _QWORD, ULONG_PTR, _QWORD, int, unsigned int))pXdvMmAllocateContiguousNodeMemory)(
                         BugCheckParameter3,
                         0LL,
                         BugCheckParameter2,
                         0LL,
                         v4,
                         0x80000000);
  v6 = v5;
  if ( v5 )
  {
    VfFillAllocatedMemory(v5, BugCheckParameter3);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v6, BugCheckParameter3);
  }
  return v6;
}
