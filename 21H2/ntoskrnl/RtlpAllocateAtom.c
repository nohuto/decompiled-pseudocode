/*
 * XREFs of RtlpAllocateAtom @ 0x14062D000
 * Callers:
 *     RtlpLookupOrCreateLowBox @ 0x14025AACC (RtlpLookupOrCreateLowBox.c)
 *     RtlCreateAtomTableEx @ 0x140264090 (RtlCreateAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x140264168 (RtlpAllocateAtomTableEntry.c)
 * Callees:
 *     PsChargeSharedPoolQuota @ 0x140660338 (PsChargeSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
