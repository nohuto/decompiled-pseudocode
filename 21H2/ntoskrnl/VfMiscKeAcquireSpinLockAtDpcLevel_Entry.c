/*
 * XREFs of VfMiscKeAcquireSpinLockAtDpcLevel_Entry @ 0x140602240
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1406021F8 (VfMiscCheckKernelAddress.c)
 */

__int64 __fastcall VfMiscKeAcquireSpinLockAtDpcLevel_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 8uLL);
}
