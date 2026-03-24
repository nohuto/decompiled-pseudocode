/*
 * XREFs of ZwRequestWaitReplyPort @ 0x1403FA7E0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1402C1C08 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRequestWaitReplyPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
