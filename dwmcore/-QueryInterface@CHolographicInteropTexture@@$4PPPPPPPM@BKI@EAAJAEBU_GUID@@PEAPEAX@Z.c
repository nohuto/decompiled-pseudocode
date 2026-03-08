/*
 * XREFs of ?QueryInterface@CHolographicInteropTexture@@$4PPPPPPPM@BKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicInteropTexture::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 424), a2, a3);
}
