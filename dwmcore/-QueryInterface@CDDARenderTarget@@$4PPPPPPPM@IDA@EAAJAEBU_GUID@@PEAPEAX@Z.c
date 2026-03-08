/*
 * XREFs of ?QueryInterface@CDDARenderTarget@@$4PPPPPPPM@IDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180119850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDARenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 2096), a2, a3);
}
