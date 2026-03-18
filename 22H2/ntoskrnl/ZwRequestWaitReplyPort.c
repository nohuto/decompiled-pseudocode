/*
 * XREFs of ZwRequestWaitReplyPort @ 0x14041AAE0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14031C948 (SepRmDispatchDataToLsa.c)
 *     DifZwRequestWaitReplyPortWrapper @ 0x1405F6300 (DifZwRequestWaitReplyPortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRequestWaitReplyPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
