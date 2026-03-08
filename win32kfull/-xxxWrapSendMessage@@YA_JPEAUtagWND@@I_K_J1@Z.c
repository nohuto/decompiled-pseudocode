/*
 * XREFs of ?xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C006A5E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxWrapSendMessage(struct tagWND *a1, unsigned int a2)
{
  return xxxSendTransformableMessageTimeout(a1, a2, 0, 0, 0LL, 0, 1);
}
