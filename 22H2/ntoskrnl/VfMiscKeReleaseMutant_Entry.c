/*
 * XREFs of VfMiscKeReleaseMutant_Entry @ 0x140AE0FB0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D2528 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscKeReleaseMutant_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 0x38uLL);
}
