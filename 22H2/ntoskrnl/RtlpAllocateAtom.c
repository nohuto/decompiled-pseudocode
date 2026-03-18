/*
 * XREFs of RtlpAllocateAtom @ 0x14075AD10
 * Callers:
 *     RtlpLookupOrCreateLowBox @ 0x140297878 (RtlpLookupOrCreateLowBox.c)
 *     RtlpAllocateAtomTableEntry @ 0x1402F8528 (RtlpAllocateAtomTableEntry.c)
 *     RtlCreateAtomTableEx @ 0x140339C30 (RtlCreateAtomTableEx.c)
 * Callees:
 *     PsChargeSharedPoolQuota @ 0x14075C654 (PsChargeSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 *__fastcall RtlpAllocateAtom(unsigned __int64 a1, ULONG a2)
{
  unsigned __int64 v2; // rdi
  __int64 *Pool2; // rbx
  __int64 v5; // rax

  v2 = a1 + 16;
  if ( a1 + 16 < a1 )
    return 0LL;
  Pool2 = (__int64 *)ExAllocatePool2(256LL, v2, a2);
  if ( Pool2 )
  {
    v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, v2, 0LL);
    *Pool2 = v5;
    if ( v5 )
    {
      Pool2[1] = v2;
      Pool2 += 2;
    }
    else
    {
      ExFreePoolWithTag(Pool2, a2);
      return 0LL;
    }
  }
  return Pool2;
}
