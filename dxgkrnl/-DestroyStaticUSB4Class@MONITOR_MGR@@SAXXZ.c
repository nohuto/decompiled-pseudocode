/*
 * XREFs of ?DestroyStaticUSB4Class@MONITOR_MGR@@SAXXZ @ 0x1C03C2B30
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C006AF64 (MonitorCleanupGlobal.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??1USB4_HOSTROUTER_MGR@@QEAA@XZ @ 0x1C03C5518 (--1USB4_HOSTROUTER_MGR@@QEAA@XZ.c)
 */

void MONITOR_MGR::DestroyStaticUSB4Class(void)
{
  PVOID v0; // rbx

  v0 = MONITOR_MGR::_pUsb4Manager;
  if ( MONITOR_MGR::_pUsb4Manager )
  {
    USB4_HOSTROUTER_MGR::~USB4_HOSTROUTER_MGR((USB4_HOSTROUTER_MGR *)MONITOR_MGR::_pUsb4Manager);
    operator delete(v0);
    MONITOR_MGR::_pUsb4Manager = 0LL;
  }
}
