/*
 * XREFs of ?SerializeToBuffer@MonitorDescriptorState@DxgMonitor@@QEBAXPEAU_DMM_MONITORDESCRIPTORSET_SERIALIZATION@@I@Z @ 0x1C03C7754
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C03C520C (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgMonitor::MonitorDescriptorState::SerializeToBuffer(
        DxgMonitor::MonitorDescriptorState *this,
        struct _DMM_MONITORDESCRIPTORSET_SERIALIZATION *a2,
        unsigned int a3)
{
  __int64 v3; // rcx
  __int64 v6; // rax

  v3 = *((_QWORD *)this + 16);
  if ( v3 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    if ( v6 )
      (*(void (__fastcall **)(__int64, struct _DMM_MONITORDESCRIPTORSET_SERIALIZATION *, _QWORD))(*(_QWORD *)v6 + 16LL))(
        v6,
        a2,
        a3);
  }
}
