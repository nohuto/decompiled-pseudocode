/*
 * XREFs of VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry @ 0x140AA3FB0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1406021F8 (VfMiscCheckKernelAddress.c)
 */

__int64 __fastcall VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry(__int64 a1)
{
  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 8uLL);
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 0x18uLL);
}
