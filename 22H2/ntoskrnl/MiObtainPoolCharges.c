/*
 * XREFs of MiObtainPoolCharges @ 0x140357184
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x14028C258 (MiInitializePoolCommitPacket.c)
 *     MiGetPoolPages @ 0x14033DA1C (MiGetPoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x14076202C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x1403571F0 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiObtainPoolCharges(unsigned __int64 a1, int a2)
{
  volatile signed __int64 *v4; // rax

  if ( !qword_140C52B28 )
    return 1LL;
  if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, a1, 0LL, 2LL) >= 0 )
  {
    v4 = &qword_140C4EFA0;
    if ( a2 )
      v4 = &qword_140C4EFA8;
    _InterlockedExchangeAdd64(v4, a1);
    return 1LL;
  }
  return 0LL;
}
