/*
 * XREFs of ?AddRef@CWARPDrawListEntry@@WEA@EAAKXZ @ 0x180119910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWARPDrawListEntry::AddRef(__int64 a1)
{
  return CComposition::AddRef((CComposition *)(a1 - 64));
}
