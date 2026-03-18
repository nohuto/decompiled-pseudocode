/*
 * XREFs of LpcRequestWaitReplyPort @ 0x1408A5350
 * Callers:
 *     <none>
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x1409785FC (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPort(__int64 a1)
{
  return LpcpRequestWaitReplyPort(a1);
}
