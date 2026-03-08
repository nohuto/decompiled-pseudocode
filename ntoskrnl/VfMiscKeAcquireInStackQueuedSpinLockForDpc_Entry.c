/*
 * XREFs of VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry @ 0x140ADCE00
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D0078 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry(__int64 a1)
{
  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 8uLL);
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 0x18uLL);
}
