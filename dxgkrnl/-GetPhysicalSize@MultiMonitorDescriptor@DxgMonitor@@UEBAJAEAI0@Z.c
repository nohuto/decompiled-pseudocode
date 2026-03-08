/*
 * XREFs of ?GetPhysicalSize@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAI0@Z @ 0x1C006C760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetPhysicalSize(
        DxgMonitor::MultiMonitorDescriptor *this,
        unsigned int *a2,
        unsigned int *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this + 2) + 208LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}
