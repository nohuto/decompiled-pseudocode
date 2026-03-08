/*
 * XREFs of VfMiscKeSetEvent_Entry @ 0x140ADD0A0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D0078 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscKeSetEvent_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 0x18uLL);
}
