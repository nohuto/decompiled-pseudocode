/*
 * XREFs of VerifierPortExAllocatePoolWithTagPriority @ 0x140ADA490
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1402E1F00 (ExAllocatePoolWithTagPriority.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

PVOID __fastcall VerifierPortExAllocatePoolWithTagPriority(
        POOL_TYPE a1,
        SIZE_T a2,
        ULONG a3,
        EX_POOL_PRIORITY a4,
        __int64 a5)
{
  if ( (VfRuleClasses & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
    return (PVOID)pXdvExAllocatePoolWithTagPriority(a1 | 0x80u, 0, a2, a3, a4, 0LL, 0, a5, (__int64)VfHandlePoolAlloc);
  else
    return ExAllocatePoolWithTagPriority(a1, a2, a3, a4);
}
