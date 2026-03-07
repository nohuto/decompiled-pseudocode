_SLIST_ENTRY *__fastcall VerifierMmAllocateContiguousNodeMemory(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  _SLIST_ENTRY *v11; // rax
  _SLIST_ENTRY *v12; // rbx
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  VfCheckPageProtection(a5, retaddr);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  if ( (MmVerifierData & 0x4000000) != 0 && a3 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, a3, BugCheckParameter3, 0LL);
  v11 = (_SLIST_ENTRY *)((__int64 (__fastcall *)(ULONG_PTR, __int64, ULONG_PTR, __int64, unsigned int, int))pXdvMmAllocateContiguousNodeMemory)(
                          BugCheckParameter3,
                          a2,
                          a3,
                          a4,
                          a5,
                          a6);
  v12 = v11;
  if ( v11 )
  {
    VfFillAllocatedMemory(v11, BugCheckParameter3);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v12, BugCheckParameter3);
  }
  return v12;
}
