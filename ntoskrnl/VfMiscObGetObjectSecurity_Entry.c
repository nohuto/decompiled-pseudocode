/*
 * XREFs of VfMiscObGetObjectSecurity_Entry @ 0x140ADD510
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D0078 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscObGetObjectSecurity_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 24), 8uLL);
}
