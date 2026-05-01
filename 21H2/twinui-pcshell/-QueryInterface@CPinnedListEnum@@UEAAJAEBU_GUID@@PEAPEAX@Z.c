/*
 * XREFs of ?QueryInterface@CPinnedListEnum@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015AFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CPinnedListEnum::QueryInterface(CPinnedListEnum *this, const struct _GUID *a2, void **a3)
{
  return QISearch(this, &pqit, a2, a3);
}
