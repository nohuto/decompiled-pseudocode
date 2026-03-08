/*
 * XREFs of ZwRequestWaitReplyPort @ 0x140412750
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1402E88D8 (SepRmDispatchDataToLsa.c)
 *     DifZwRequestWaitReplyPortWrapper @ 0x1405F3E50 (DifZwRequestWaitReplyPortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRequestWaitReplyPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
