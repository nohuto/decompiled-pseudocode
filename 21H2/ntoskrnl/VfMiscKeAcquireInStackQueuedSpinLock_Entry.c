/*
 * XREFs of VfMiscKeAcquireInStackQueuedSpinLock_Entry @ 0x140AA4030
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1406021F8 (VfMiscCheckKernelAddress.c)
 *     ViMiscCheckKeRaiseIrql @ 0x140AA568C (ViMiscCheckKeRaiseIrql.c)
 */

__int64 __fastcall VfMiscKeAcquireInStackQueuedSpinLock_Entry(__int64 a1)
{
  __int64 v2; // rcx

  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 8uLL);
  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 0x18uLL);
  LOBYTE(v2) = 2;
  return ViMiscCheckKeRaiseIrql(v2);
}
