/*
 * XREFs of VerifierExAllocatePool @ 0x1409D58F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool @ 0x1402512F0 (ExAllocatePool.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x1409C8D64 (VfCheckPoolType.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D55D0 (VeAllocatePoolWithTagPriority.c)
 *     ViTargetIncrementCounter @ 0x1409D850C (ViTargetIncrementCounter.c)
 */

PVOID __fastcall VerifierExAllocatePool(__int32 PoolType, ULONG_PTR BugCheckParameter3)
{
  POOL_TYPE v5; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 0x400000) == 0 || (VfRuleClasses & 0x800000000LL) != 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, 0);
    ++dword_140C2A8BC;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(retaddr, 164LL);
    v5 = PoolType | 0x80;
    if ( XdvEnabled )
      return (PVOID)pXdvExAllocatePool[0](
                      v5,
                      BugCheckParameter3,
                      1885434455,
                      32,
                      retaddr,
                      (__int64)VeAllocatePoolWithTagPriority);
    else
      return VeAllocatePoolWithTagPriority(v5, BugCheckParameter3, 0x70617257u, HighPoolPriority, retaddr);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(PoolType, retaddr, 0);
    return ExAllocatePool((POOL_TYPE)PoolType, BugCheckParameter3);
  }
}
