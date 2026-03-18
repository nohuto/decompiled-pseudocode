/*
 * XREFs of PsReferencePartition @ 0x14045ECC6
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     PspAllocatePartition @ 0x14085BD34 (PspAllocatePartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsReferencePartition(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
