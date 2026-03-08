/*
 * XREFs of ?QueryInterface@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@BKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180118AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 416), a2, a3);
}
