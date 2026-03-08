/*
 * XREFs of ?QueryInterface@CGdiSpriteBitmap@@$4PPPPPPPM@BOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180119B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 480), a2, a3);
}
