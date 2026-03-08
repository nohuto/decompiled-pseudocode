/*
 * XREFs of VfMiscKeInsertQueueDpc_Entry @ 0x140ADCEE0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D0078 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscKeInsertQueueDpc_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 24), 0x40uLL);
}
