/*
 * XREFs of VerifierPortExAllocatePoolWithQuotaTag @ 0x1409E5C30
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 */

PVOID __fastcall VerifierPortExAllocatePoolWithQuotaTag(
        unsigned int PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        __int64 a4)
{
  __int64 v8; // rcx

  if ( (MmVerifierData & 8) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
      VerifierBugCheckIfAppropriate(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL);
  }
  v8 = PoolType & 0xFFFFFFF7;
  if ( (PoolType & 8) == 0 )
    v8 = PoolType;
  if ( (MmVerifierData & 0x400000) != 0 && (MmVerifierData & 1) == 0 )
    return ExAllocatePoolWithQuotaTag((POOL_TYPE)v8, NumberOfBytes, Tag);
  LODWORD(v8) = v8 | 0x80;
  return (PVOID)pXdvExAllocatePoolWithTagPriority(
                  v8,
                  NumberOfBytes,
                  Tag,
                  32,
                  a4,
                  (__int64)VeAllocatePoolWithTagPriority);
}
