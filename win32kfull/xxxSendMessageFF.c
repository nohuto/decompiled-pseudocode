/*
 * XREFs of xxxSendMessageFF @ 0x1C00D1230
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageEx @ 0x1C00D1270 (xxxSendMessageEx.c)
 */

__int64 __fastcall xxxSendMessageFF(__int64 a1, unsigned int a2, unsigned __int64 a3, __int128 *a4, __int64 a5)
{
  if ( a5 )
    return xxxSendMessageEx((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, a2, a5);
  else
    return xxxSendTransformableMessageTimeout((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4, 0, 0, 0LL, 0, 1);
}
