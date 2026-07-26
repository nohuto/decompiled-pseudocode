/*
 * XREFs of ndisIsLwfBindable @ 0x1C0125E44
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C012589C (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 *     ndisBuildMonitoringLwfBindings @ 0x1C0125A90 (ndisBuildMonitoringLwfBindings.c)
 * Callees:
 *     ndisIntersectAtoms @ 0x1C0125CC0 (ndisIntersectAtoms.c)
 */

bool __fastcall ndisIsLwfBindable(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = a1 + 48;
  return ndisIntersectAtoms(a1 + 48, a2 + 16) && !ndisIntersectAtoms(v2, a2 + 32);
}
