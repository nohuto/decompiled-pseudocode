/*
 * XREFs of LpcRequestWaitReplyPortEx @ 0x1409782B0
 * Callers:
 *     <none>
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x1409785FC (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPortEx(__int64 a1)
{
  return LpcpRequestWaitReplyPort(a1);
}
