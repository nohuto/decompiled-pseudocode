/*
 * XREFs of DxgkCreateHwQueue @ 0x1C0222C00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkCreateHwQueueInternal @ 0x1C0318D00 (DxgkCreateHwQueueInternal.c)
 */

__int64 __fastcall DxgkCreateHwQueue(struct _D3DKMT_CREATEHWQUEUE *a1)
{
  return DxgkCreateHwQueueInternal(a1);
}
