/*
 * XREFs of NtReplyWaitReceivePort @ 0x140716730
 * Callers:
 *     <none>
 * Callees:
 *     NtReplyWaitReceivePortEx @ 0x140716750 (NtReplyWaitReceivePortEx.c)
 */

__int64 __fastcall NtReplyWaitReceivePort(void *a1)
{
  return NtReplyWaitReceivePortEx(a1, 0LL);
}
