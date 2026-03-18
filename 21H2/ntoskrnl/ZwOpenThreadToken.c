/*
 * XREFs of ZwOpenThreadToken @ 0x14041BBE0
 * Callers:
 *     DifZwOpenThreadTokenWrapper @ 0x140622B00 (DifZwOpenThreadTokenWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenThreadToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
