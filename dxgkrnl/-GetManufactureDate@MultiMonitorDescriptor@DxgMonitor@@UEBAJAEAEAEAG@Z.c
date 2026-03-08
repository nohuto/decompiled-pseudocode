/*
 * XREFs of ?GetManufactureDate@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z @ 0x1C006C6A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetManufactureDate(
        DxgMonitor::MultiMonitorDescriptor *this,
        unsigned __int8 *a2,
        unsigned __int16 *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *, unsigned __int16 *))(**((_QWORD **)this + 1) + 88LL))(
           *((_QWORD *)this + 1),
           a2,
           a3);
}
