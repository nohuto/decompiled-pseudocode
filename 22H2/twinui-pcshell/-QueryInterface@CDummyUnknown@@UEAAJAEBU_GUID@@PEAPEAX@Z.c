/*
 * XREFs of ?QueryInterface@CDummyUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801503F0
 * Callers:
 *     ?QueryInterface@CDummyUnknown@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180171EA0 (-QueryInterface@CDummyUnknown@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDummyUnknown@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180171EB0 (-QueryInterface@CDummyUnknown@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CDummyUnknown::QueryInterface(CDummyUnknown *this, const struct _GUID *a2, void **a3)
{
  return QISearch(this, (LPCQITAB)&`CDummyUnknown::QueryInterface'::`2'::qit, a2, a3);
}
