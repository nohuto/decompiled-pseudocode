/*
 * XREFs of RtlpAllocateAtom @ 0x1407DBAB0
 * Callers:
 *     RtlpLookupOrCreateLowBox @ 0x14035400C (RtlpLookupOrCreateLowBox.c)
 *     RtlpAllocateAtomTableEntry @ 0x140355098 (RtlpAllocateAtomTableEntry.c)
 *     RtlCreateAtomTableEx @ 0x140355EB0 (RtlCreateAtomTableEx.c)
 * Callees:
 *     PsChargeSharedPoolQuota @ 0x140696154 (PsChargeSharedPoolQuota.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall RtlpAllocateAtom(unsigned __int64 a1, ULONG a2)
{
  ULONG_PTR v2; // rdi
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
