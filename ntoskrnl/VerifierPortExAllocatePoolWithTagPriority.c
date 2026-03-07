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
