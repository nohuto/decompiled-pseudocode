/*
 * XREFs of LpcRequestWaitReplyPort @ 0x1408A04D0
 * Callers:
 *     <none>
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x14097555C (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPort(__int64 a1)
{
  return LpcpRequestWaitReplyPort(a1);
}
