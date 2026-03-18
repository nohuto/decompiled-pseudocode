/*
 * XREFs of DxgkCreateHwQueue @ 0x1C02311A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkCreateHwQueueInternal @ 0x1C031DCDC (DxgkCreateHwQueueInternal.c)
 */

__int64 __fastcall DxgkCreateHwQueue(struct _D3DKMT_CREATEHWQUEUE *a1)
{
  return DxgkCreateHwQueueInternal(a1);
}
