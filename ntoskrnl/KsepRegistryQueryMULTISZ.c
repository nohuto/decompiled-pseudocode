/*
 * XREFs of KsepRegistryQueryMULTISZ @ 0x140974BFC
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x140B35308 (KsepMatchInitBiosInfo.c)
 * Callees:
 *     KsepRegistryQuerySZ @ 0x14080001C (KsepRegistryQuerySZ.c)
 */

__int64 __fastcall KsepRegistryQueryMULTISZ(void *a1, const WCHAR *a2, void *a3, unsigned __int64 a4, _QWORD *a5)
{
  return KsepRegistryQuerySZ(a1, a2, 7, a3, a4, a5);
}
