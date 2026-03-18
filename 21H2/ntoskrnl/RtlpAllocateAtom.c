/*
 * XREFs of RtlpAllocateAtom @ 0x1407D454C
 * Callers:
 *     RtlCreateAtomTableEx @ 0x14022EB30 (RtlCreateAtomTableEx.c)
 *     RtlpLookupOrCreateLowBox @ 0x1402F1298 (RtlpLookupOrCreateLowBox.c)
 *     RtlpAllocateAtomTableEntry @ 0x1403547BC (RtlpAllocateAtomTableEntry.c)
 * Callees:
 *     PsChargeSharedPoolQuota @ 0x140726494 (PsChargeSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall RtlpAllocateAtom(unsigned __int64 a1, ULONG a2)
{
  SIZE_T v2; // rdi
  _QWORD *PoolWithTag; // rbx
  __int64 v5; // rax

  v2 = a1 + 16;
  if ( a1 + 16 < a1 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2, a2);
  if ( PoolWithTag )
  {
    v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, v2, 0LL);
    *PoolWithTag = v5;
    if ( v5 )
    {
      PoolWithTag[1] = v2;
      PoolWithTag += 2;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, a2);
      return 0LL;
    }
  }
  return PoolWithTag;
}
