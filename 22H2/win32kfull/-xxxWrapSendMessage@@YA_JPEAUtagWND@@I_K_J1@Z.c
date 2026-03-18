/*
 * XREFs of ?xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0123FB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxWrapSendMessage(struct tagWND *a1)
{
  return xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0, 0, 0LL, 0, 1);
}
