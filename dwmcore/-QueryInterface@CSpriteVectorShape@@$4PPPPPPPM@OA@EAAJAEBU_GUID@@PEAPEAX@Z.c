/*
 * XREFs of ?QueryInterface@CSpriteVectorShape@@$4PPPPPPPM@OA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180118B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVectorShape::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 224), a2, a3);
}
