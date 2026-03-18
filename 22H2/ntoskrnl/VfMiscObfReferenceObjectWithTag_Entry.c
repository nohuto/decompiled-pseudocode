/*
 * XREFs of VfMiscObfReferenceObjectWithTag_Entry @ 0x140AE1630
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D2528 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscObfReferenceObjectWithTag_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 8uLL);
}
