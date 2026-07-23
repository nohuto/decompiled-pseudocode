/*
 * XREFs of VerifierExAllocatePoolWithQuota @ 0x1409D4D10
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithQuota @ 0x1405B3520 (ExAllocatePoolWithQuota.c)
 *     VfCheckPoolType @ 0x1409C7D74 (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D64 (VerifierBugCheckIfAppropriate.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D45E0 (VeAllocatePoolWithTagPriority.c)
 */

PVOID __fastcall VerifierExAllocatePoolWithQuota(__int32 PoolType, ULONG_PTR BugCheckParameter3)
{
  PVOID result; // rax
  unsigned __int32 v5; // r10d
  POOL_TYPE v6; // r10d
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 0x400000) == 0 || (VfRuleClasses & 0x800000000LL) != 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, 0);
    ++dword_140C2A8FC;
    if ( (MmVerifierData & 8) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
        VerifierBugCheckIfAppropriate(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL);
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL);
    }
    v5 = PoolType & 0xFFFFFFF7;
    if ( (PoolType & 8) == 0 )
      v5 = PoolType;
    v6 = v5 | 0x80;
    if ( XdvEnabled )
      result = (PVOID)pXdvExAllocatePoolWithTagPriority(
                        v6,
                        BugCheckParameter3,
                        1885434455,
                        32,
                        retaddr,
                        (__int64)VeAllocatePoolWithTagPriority);
    else
      result = VeAllocatePoolWithTagPriority(v6, BugCheckParameter3, 0x70617257u, HighPoolPriority, retaddr);
    if ( !result && (PoolType & 8) == 0 )
      RtlRaiseStatus(-1073741670);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(PoolType, retaddr, 0);
    return ExAllocatePoolWithQuota((POOL_TYPE)PoolType, BugCheckParameter3);
  }
  return result;
}
