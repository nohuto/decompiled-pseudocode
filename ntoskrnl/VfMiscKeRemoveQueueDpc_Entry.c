/*
 * XREFs of VfMiscKeRemoveQueueDpc_Entry @ 0x140ADD080
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D0078 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscKeRemoveQueueDpc_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 0x40uLL);
}
