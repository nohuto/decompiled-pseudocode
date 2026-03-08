/*
 * XREFs of ZwAlpcCreatePortSection @ 0x140413290
 * Callers:
 *     DifZwAlpcCreatePortSectionWrapper @ 0x1405EAC60 (DifZwAlpcCreatePortSectionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreatePortSection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
