/*
 * XREFs of ZwAlpcCreatePortSection @ 0x14041B620
 * Callers:
 *     DifZwAlpcCreatePortSectionWrapper @ 0x1405ED110 (DifZwAlpcCreatePortSectionWrapper.c)
 *     CmFcpCreateAlpcSectionView @ 0x140680D58 (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreatePortSection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
