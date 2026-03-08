/*
 * XREFs of ZwSetBootEntryOrder @ 0x140415590
 * Callers:
 *     DifZwSetBootEntryOrderWrapper @ 0x1405F42F0 (DifZwSetBootEntryOrderWrapper.c)
 *     BiSetBootEntryOrder @ 0x140A5C048 (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
