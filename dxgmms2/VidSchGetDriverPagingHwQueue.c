/*
 * XREFs of VidSchGetDriverPagingHwQueue @ 0x1C003FF8C
 * Callers:
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C00E7D9C (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDriverPagingHwQueue(__int64 a1, unsigned int a2)
{
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 280) + 8LL * a2) + 112LL);
}
