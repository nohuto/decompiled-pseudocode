/*
 * XREFs of ?QueryInterface@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011FDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondarySysmemBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CColorKeyBitmap *)(a1 - *(int *)(a1 - 4) - 144), a2, a3);
}
