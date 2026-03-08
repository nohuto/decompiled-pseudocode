/*
 * XREFs of ?GetHdrLuminance@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z @ 0x1C006C670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetHdrLuminance(
        DxgMonitor::MultiMonitorDescriptor *this,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *, unsigned int *))(**((_QWORD **)this + 2)
                                                                                           + 160LL))(
           *((_QWORD *)this + 2),
           a2,
           a3,
           a4);
}
