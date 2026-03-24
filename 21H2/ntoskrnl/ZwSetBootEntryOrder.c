/*
 * XREFs of ZwSetBootEntryOrder @ 0x1403FD4C0
 * Callers:
 *     BiSetBootEntryOrder @ 0x140972AC4 (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
