/*
 * XREFs of ?QueryInterface@CYCbCrSurface@@$4PPPPPPPM@HA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801179B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CYCbCrSurface::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 112), a2, a3);
}
