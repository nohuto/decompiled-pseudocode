/*
 * XREFs of ZwAlpcCreateSectionView @ 0x1404132D0
 * Callers:
 *     DifZwAlpcCreateSectionViewWrapper @ 0x1405EB030 (DifZwAlpcCreateSectionViewWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreateSectionView(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
