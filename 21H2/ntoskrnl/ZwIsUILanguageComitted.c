/*
 * XREFs of ZwIsUILanguageComitted @ 0x14041D880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwIsUILanguageComitted(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
