/*
 * XREFs of xxxSendMessageFF @ 0x1C0152220
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendMessageEx @ 0x1C004FED0 (xxxSendMessageEx.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendMessageFF(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, ULONG64 a5)
{
  if ( a5 )
    return xxxSendMessageEx(0xFFFFFFFFFFFFFFFFuLL, a2, a3, a4, a5);
  else
    return xxxSendTransformableMessageTimeout((unsigned __int64 *)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4, 0, 0, 0LL, 0, 1);
}
