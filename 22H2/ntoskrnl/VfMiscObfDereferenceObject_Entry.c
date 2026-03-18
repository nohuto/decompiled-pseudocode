/*
 * XREFs of VfMiscObfDereferenceObject_Entry @ 0x140AE0FF0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D2528 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscObfDereferenceObject_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 8uLL);
}
