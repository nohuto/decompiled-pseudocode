/*
 * XREFs of ZwReplaceKey @ 0x14041D6C0
 * Callers:
 *     DifZwReplaceKeyWrapper @ 0x1405F61D0 (DifZwReplaceKeyWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReplaceKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
