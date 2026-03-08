/*
 * XREFs of ?QueryInterface@CGDIBitmapRealization@@$4PPPPPPPM@BMI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011E450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGDIBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 456), a2, a3);
}
