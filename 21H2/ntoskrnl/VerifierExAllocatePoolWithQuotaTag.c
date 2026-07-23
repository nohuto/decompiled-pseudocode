/*
 * XREFs of VerifierExAllocatePoolWithQuotaTag @ 0x1409D5E70
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x1409C8D64 (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D55D0 (VeAllocatePoolWithTagPriority.c)
 */

PVOID __fastcall VerifierExAllocatePoolWithQuotaTag(__int32 PoolType, ULONG_PTR BugCheckParameter3, ULONG Tag)
{
  PVOID result; // rax
  unsigned __int32 v7; // r10d
  POOL_TYPE v8; // r10d
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 0x400000) == 0 || (VfRuleClasses & 0x800000000LL) != 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, Tag);
    if ( (MmVerifierData & 8) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
        VerifierBugCheckIfAppropriate(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL);
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL);
    }
    v7 = PoolType & 0xFFFFFFF7;
    if ( (PoolType & 8) == 0 )
      v7 = PoolType;
    v8 = v7 | 0x80;
    if ( XdvEnabled )
      result = (PVOID)pXdvExAllocatePoolWithQuotaTag[0](
                        v8,
                        BugCheckParameter3,
                        Tag,
                        32,
                        retaddr,
                        (__int64)VeAllocatePoolWithTagPriority);
    else
      result = VeAllocatePoolWithTagPriority(v8, BugCheckParameter3, Tag, HighPoolPriority, retaddr);
    if ( !result && (PoolType & 8) == 0 )
      RtlRaiseStatus(-1073741670);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(PoolType, retaddr, 0);
    return ExAllocatePoolWithQuotaTag((POOL_TYPE)PoolType, BugCheckParameter3, Tag);
  }
  return result;
}
