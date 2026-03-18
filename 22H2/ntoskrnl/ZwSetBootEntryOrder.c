/*
 * XREFs of ZwSetBootEntryOrder @ 0x14041D920
 * Callers:
 *     DifZwSetBootEntryOrderWrapper @ 0x1405F67A0 (DifZwSetBootEntryOrderWrapper.c)
 *     BiSetBootEntryOrder @ 0x140A5ED5C (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
