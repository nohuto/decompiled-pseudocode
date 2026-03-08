/*
 * XREFs of ZwReplyWaitReceivePortEx @ 0x140412870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReplyWaitReceivePortEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
