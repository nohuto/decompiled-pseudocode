/*
 * XREFs of VfMiscObReferenceObjectByPointerWithTag_Entry @ 0x140ADD5C0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D0078 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscObReferenceObjectByPointerWithTag_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 32), 8uLL);
}
