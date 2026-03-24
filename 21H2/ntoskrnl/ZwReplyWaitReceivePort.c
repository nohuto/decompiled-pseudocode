/*
 * XREFs of ZwReplyWaitReceivePort @ 0x1403FA500
 * Callers:
 *     SepRmCommandServerThread @ 0x1407AD230 (SepRmCommandServerThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReplyWaitReceivePort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
