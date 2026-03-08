/*
 * XREFs of ?GetCrc@MultiMonitorDescriptor@DxgMonitor@@UEBAEXZ @ 0x1C006C5B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetCrc(DxgMonitor::MultiMonitorDescriptor *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 96LL))(*((_QWORD *)this + 1));
}
