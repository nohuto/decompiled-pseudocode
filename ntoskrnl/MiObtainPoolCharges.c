/*
 * XREFs of MiObtainPoolCharges @ 0x1402EDAA0
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x140330760 (MiInitializePoolCommitPacket.c)
 *     MiGetPoolPages @ 0x14036413C (MiGetPoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140869ADC (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x140348D54 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiObtainPoolCharges(unsigned __int64 a1, int a2)
{
  volatile signed __int64 *v4; // rax

  if ( !qword_140C6F658 )
    return 1LL;
  if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, a1, 0LL, 2LL) >= 0 )
  {
    v4 = &qword_140C69618;
    if ( a2 )
      v4 = &qword_140C69620;
    _InterlockedExchangeAdd64(v4, a1);
    return 1LL;
  }
  return 0LL;
}
