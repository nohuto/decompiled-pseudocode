/*
 * XREFs of ?QueryInterface@CFileSysBindData@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015AFB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CFileSysBindData::QueryInterface(CFileSysBindData *this, const struct _GUID *a2, void **a3)
{
  return QISearch(this, (LPCQITAB)&`CFileSysBindData::QueryInterface'::`2'::qit, a2, a3);
}
