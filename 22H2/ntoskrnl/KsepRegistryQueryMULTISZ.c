/*
 * XREFs of KsepRegistryQueryMULTISZ @ 0x140977C9C
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x140B6519C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     KsepRegistryQuerySZ @ 0x14084646C (KsepRegistryQuerySZ.c)
 */

__int64 __fastcall KsepRegistryQueryMULTISZ(void *a1, const WCHAR *a2, void *a3, unsigned __int64 a4, _QWORD *a5)
{
  return KsepRegistryQuerySZ(a1, a2, 7, a3, a4, a5);
}
