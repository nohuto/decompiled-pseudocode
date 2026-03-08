/*
 * XREFs of ?GetAnalogVideoInputParams@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C006C490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetAnalogVideoInputParams(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct _WmiMonitorAnalogVideoInputParams *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _WmiMonitorAnalogVideoInputParams *))(**((_QWORD **)this + 2) + 144LL))(
           *((_QWORD *)this + 2),
           a2);
}
