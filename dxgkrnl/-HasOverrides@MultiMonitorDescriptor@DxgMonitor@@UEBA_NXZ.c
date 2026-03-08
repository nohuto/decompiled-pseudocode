/*
 * XREFs of ?HasOverrides@MultiMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x1C006C850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::HasOverrides(DxgMonitor::MultiMonitorDescriptor *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1));
}
