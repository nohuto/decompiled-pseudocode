/*
 * XREFs of MiObtainPoolCharges @ 0x14035A380
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x1402867E0 (MiInitializePoolCommitPacket.c)
 *     MiGetPoolPages @ 0x1402E3304 (MiGetPoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x14086C70C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x1402E4314 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiObtainPoolCharges(unsigned __int64 a1, int a2)
{
  volatile signed __int64 *v4; // rax

  if ( !qword_140C6FA98 )
    return 1LL;
  if ( (int)MiAcquireNonPagedResources((unsigned __int64)&MiSystemPartition, a1, 0LL, 2u) >= 0 )
  {
    v4 = &qword_140C69A98;
    if ( a2 )
      v4 = &qword_140C69AA0;
    _InterlockedExchangeAdd64(v4, a1);
    return 1LL;
  }
  return 0LL;
}
