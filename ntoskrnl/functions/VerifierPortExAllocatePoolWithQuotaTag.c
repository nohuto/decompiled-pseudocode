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
  if ( (VfRuleClasses & 0x400000) != 0 && (MmVerifierData & 1) == 0 )
    return ExAllocatePoolWithQuotaTag((POOL_TYPE)v8, NumberOfBytes, Tag);
  LODWORD(v8) = v8 | 0x80;
  return (PVOID)pXdvExAllocatePoolWithTagPriority(v8, 0, NumberOfBytes, Tag, 32, 0LL, 0, a4, (__int64)VfHandlePoolAlloc);
}
