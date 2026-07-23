/*
 * XREFs of PspDoesJobHierarchyPermitUILimitsCallback @ 0x140622430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspDoesJobHierarchyPermitUILimitsCallback(__int64 a1, __int64 a2)
{
  if ( a1 != a2 && ((*(_DWORD *)(a1 + 1320) & 0x10) != 0 || *(_DWORD *)(a1 + 480) == -2) )
    return 3221227288LL;
  else
    return 0LL;
}
