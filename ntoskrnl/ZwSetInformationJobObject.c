/*
 * XREFs of ZwSetInformationJobObject @ 0x1404157D0
 * Callers:
 *     DifZwSetInformationJobObjectWrapper @ 0x1405F4B40 (DifZwSetInformationJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationJobObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
