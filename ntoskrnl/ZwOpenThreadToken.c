/*
 * XREFs of ZwOpenThreadToken @ 0x140412790
 * Callers:
 *     DifZwOpenThreadTokenWrapper @ 0x1405F04F0 (DifZwOpenThreadTokenWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenThreadToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
