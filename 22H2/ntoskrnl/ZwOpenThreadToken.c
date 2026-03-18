/*
 * XREFs of ZwOpenThreadToken @ 0x14041AB20
 * Callers:
 *     DifZwOpenThreadTokenWrapper @ 0x1405F29A0 (DifZwOpenThreadTokenWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenThreadToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
