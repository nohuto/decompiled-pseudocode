/*
 * XREFs of MiDeleteVaTail @ 0x140323460
 * Callers:
 *     MiDeletePagablePteRange @ 0x1403244A0 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiDecayPfnFullyInitialized @ 0x1402D6FA4 (MiDecayPfnFullyInitialized.c)
 *     MiTerminateWsleCluster @ 0x1403234E0 (MiTerminateWsleCluster.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiFlushGraphicsPtes @ 0x140623FF8 (MiFlushGraphicsPtes.c)
 */

__int64 __fastcall MiDeleteVaTail(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  ULONG_PTR v4; // rcx

  v1 = (_QWORD *)a1[21];
  MiTerminateWsleCluster(v1 + 17);
  MiFlushTbList(a1[2]);
  v3 = v1[2];
  if ( v3 )
  {
    MiFlushGraphicsPtes(v3, ((v1[3] - v3) >> 3) + 1);
    v1[2] = 0LL;
  }
  if ( *v1 )
  {
    MiDeletePteRun(a1[3], (__int64)v1);
    *v1 = 0LL;
  }
  v4 = v1[13];
  if ( v4 )
  {
    MiDecayPfnFullyInitialized(v4);
    v1[13] = 0LL;
  }
  return 0LL;
}
