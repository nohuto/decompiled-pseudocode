/*
 * XREFs of VfMiscKeInsertQueueDpc_Entry @ 0x140AA4160
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1406021F8 (VfMiscCheckKernelAddress.c)
 */

__int64 __fastcall VfMiscKeInsertQueueDpc_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 24), 0x40uLL);
}
