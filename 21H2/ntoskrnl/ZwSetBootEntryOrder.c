/*
 * XREFs of ZwSetBootEntryOrder @ 0x14041E980
 * Callers:
 *     DifZwSetBootEntryOrderWrapper @ 0x140626A40 (DifZwSetBootEntryOrderWrapper.c)
 *     BiSetBootEntryOrder @ 0x140A20A2C (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
