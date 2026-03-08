/*
 * XREFs of ?QueryInterface@CGDISectionBitmapRealization@@$4PPPPPPPM@BMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011DCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGDISectionBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 448), a2, a3);
}
