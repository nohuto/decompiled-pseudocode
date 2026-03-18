/*
 * XREFs of ZwAlpcCreatePortSection @ 0x14041C6E0
 * Callers:
 *     DifZwAlpcCreatePortSectionWrapper @ 0x14061D070 (DifZwAlpcCreatePortSectionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreatePortSection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
