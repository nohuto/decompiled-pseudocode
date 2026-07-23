/*
 * XREFs of VerifierExAllocatePoolWithTag @ 0x1409D5FE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     VfCheckPoolType @ 0x1409C8D64 (VfCheckPoolType.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D55D0 (VeAllocatePoolWithTagPriority.c)
 */

PVOID __fastcall VerifierExAllocatePoolWithTag(__int32 PoolType, ULONG_PTR BugCheckParameter3, ULONG Tag)
{
  POOL_TYPE v7; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 0x400000) == 0 || (VfRuleClasses & 0x800000000LL) != 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, Tag);
    v7 = PoolType | 0x80;
    if ( XdvEnabled )
      return (PVOID)pXdvExAllocatePoolWithTag[0](
                      v7,
                      BugCheckParameter3,
                      Tag,
                      32,
                      retaddr,
                      (__int64)VeAllocatePoolWithTagPriority);
    else
      return VeAllocatePoolWithTagPriority(v7, BugCheckParameter3, Tag, HighPoolPriority, retaddr);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(PoolType, retaddr, 0);
    return ExAllocatePoolWithTag((POOL_TYPE)PoolType, BugCheckParameter3, Tag);
  }
}
