/*
 * XREFs of LpcRequestWaitReplyPortEx @ 0x140975210
 * Callers:
 *     <none>
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x14097555C (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPortEx(__int64 a1)
{
  return LpcpRequestWaitReplyPort(a1);
}
