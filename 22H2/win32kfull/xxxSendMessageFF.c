/*
 * XREFs of xxxSendMessageFF @ 0x1C0161950
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageEx @ 0x1C005D440 (xxxSendMessageEx.c)
 */

unsigned __int64 __fastcall xxxSendMessageFF(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        ULONG64 a5)
{
  if ( a5 )
    return xxxSendMessageEx(0xFFFFFFFFFFFFFFFFuLL, a2, a3, a4, a5);
  else
    return xxxSendTransformableMessageTimeout(0xFFFFFFFFFFFFFFFFuLL, a2, a3, a4, 0, 0, 0LL, 0, 1);
}
