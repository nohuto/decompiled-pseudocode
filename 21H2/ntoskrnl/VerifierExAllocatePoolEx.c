/*
 * XREFs of VerifierExAllocatePoolEx @ 0x1409D5C50
 * Callers:
 *     <none>
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x1409C8D64 (VfCheckPoolType.c)
 */

PVOID __fastcall VerifierExAllocatePoolEx(
        __int32 PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, Tag);
    return (PVOID)pXdvExAllocatePoolWithTagPriority(
                    PoolType | 0x80u,
                    NumberOfBytes,
                    Tag,
                    32,
                    retaddr,
                    (__int64)VeAllocatePoolWithTagPriority);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(PoolType, retaddr, 0);
    return CmpAllocateTransientPoolWithTag((POOL_TYPE)PoolType, NumberOfBytes, Tag, Lookaside);
  }
}
