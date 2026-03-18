/*
 * XREFs of ZwReplaceKey @ 0x14041E720
 * Callers:
 *     DifZwReplaceKeyWrapper @ 0x140626420 (DifZwReplaceKeyWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReplaceKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
