/*
 * XREFs of ?QueryInterface@CDummyUnknown@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180171EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CDummyUnknown::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDummyUnknown::QueryInterface((CDummyUnknown *)(a1 - 16), a2, a3);
}
