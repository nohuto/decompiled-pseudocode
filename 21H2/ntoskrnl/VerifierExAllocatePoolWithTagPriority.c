/*
 * XREFs of VerifierExAllocatePoolWithTagPriority @ 0x1409D60B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140346E30 (ExAllocatePoolWithTagPriority.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x1409C8D64 (VfCheckPoolType.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D55D0 (VeAllocatePoolWithTagPriority.c)
 */

PVOID __fastcall VerifierExAllocatePoolWithTagPriority(
        __int32 PoolType,
        ULONG_PTR BugCheckParameter3,
        ULONG Tag,
        __int32 Priority)
{
  POOL_TYPE v9; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 0x400000) == 0 || (VfRuleClasses & 0x800000000LL) != 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, Tag);
    v9 = PoolType | 0x80;
    if ( XdvEnabled )
      return (PVOID)pXdvExAllocatePoolWithTagPriority(
                      v9,
                      BugCheckParameter3,
                      Tag,
                      Priority,
                      retaddr,
                      (__int64)VeAllocatePoolWithTagPriority);
    else
      return VeAllocatePoolWithTagPriority(v9, BugCheckParameter3, Tag, (EX_POOL_PRIORITY)Priority, retaddr);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(PoolType, retaddr, 0);
    return ExAllocatePoolWithTagPriority((POOL_TYPE)PoolType, BugCheckParameter3, Tag, (EX_POOL_PRIORITY)Priority);
  }
}
