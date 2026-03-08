/*
 * XREFs of DxgkDestroyHwQueue @ 0x1C0319480
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDestroyHwQueueInternal @ 0x1C0319498 (DxgkDestroyHwQueueInternal.c)
 */

__int64 __fastcall DxgkDestroyHwQueue(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return DxgkDestroyHwQueueInternal(a1, a2);
}
