/*
 * XREFs of ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C0359260
 * Callers:
 *     NtDxgkDestroyTrackedWorkload @ 0x1C035AA70 (NtDxgkDestroyTrackedWorkload.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C035AE90 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C035B1D0 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkloadStatistics @ 0x1C035B4F0 (NtDxgkResetTrackedWorkloadStatistics.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C035B6E0 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C0058F98 (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(DXGTRACKEDWORKLOAD **this)
{
  DXGTRACKEDWORKLOAD *v2; // rcx
  DXGTRACKEDWORKLOAD *v3; // rcx

  v2 = *this;
  if ( v2 )
    DXGTRACKEDWORKLOAD::Release(v2);
  v3 = this[1];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v3 + 2), v3);
  }
}
