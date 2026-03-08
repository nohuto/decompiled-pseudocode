/*
 * XREFs of DxgkSubmitCommandToHwQueue @ 0x1C03198D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C0222C18 (DxgkSubmitCommandToHwQueueInternal.c)
 */

__int64 __fastcall DxgkSubmitCommandToHwQueue(struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a1, __int64 a2, __int64 a3)
{
  return DxgkSubmitCommandToHwQueueInternal(a1, 1, a3);
}
