/*
 * XREFs of ZwQueryDefaultUILanguage @ 0x140412B90
 * Callers:
 *     DifZwQueryDefaultUILanguageWrapper @ 0x1405F15F0 (DifZwQueryDefaultUILanguageWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDefaultUILanguage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
