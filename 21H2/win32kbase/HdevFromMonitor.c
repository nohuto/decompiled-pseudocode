/*
 * XREFs of HdevFromMonitor @ 0x1C0067F70
 * Callers:
 *     DestroyMonitorDCs @ 0x1C005D530 (DestroyMonitorDCs.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0063D18 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x1C0067928 (-CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HdevFromMonitor(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // r9
  unsigned int v3; // r8d

  v1 = 0;
  v2 = *((_QWORD *)gpDispInfo + 2);
  v3 = *(_DWORD *)(v2 + 20);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  while ( *(_QWORD *)(56LL * v1 + v2 + 40) != *(_QWORD *)(a1 + 80) )
  {
    if ( ++v1 >= v3 )
      return 0xFFFFFFFFLL;
  }
  return v1;
}
