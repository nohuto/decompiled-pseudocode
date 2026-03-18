/*
 * XREFs of ?UnloadDescriptorOverrides@MultiMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x1C006D510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgMonitor::MultiMonitorDescriptor::UnloadDescriptorOverrides(DxgMonitor::MultiMonitorDescriptor *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 40LL))(*((_QWORD *)this + 1));
}
