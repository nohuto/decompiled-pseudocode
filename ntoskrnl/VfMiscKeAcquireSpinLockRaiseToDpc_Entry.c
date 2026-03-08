/*
 * XREFs of VfMiscKeAcquireSpinLockRaiseToDpc_Entry @ 0x140ABD850
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D0078 (VfMiscCheckKernelAddress.c)
 *     ViMiscCheckKeRaiseIrql @ 0x140ADE3AC (ViMiscCheckKeRaiseIrql.c)
 */

__int64 __fastcall VfMiscKeAcquireSpinLockRaiseToDpc_Entry(__int64 a1)
{
  __int64 v1; // rcx

  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 8uLL);
  LOBYTE(v1) = 2;
  return ViMiscCheckKeRaiseIrql(v1);
}
