/*
 * XREFs of ?GetBasicDisplayParams@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x1C006C4F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetBasicDisplayParams(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct _WmiMonitorBasicDisplayParams *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _WmiMonitorBasicDisplayParams *))(**((_QWORD **)this + 2) + 136LL))(
           *((_QWORD *)this + 2),
           a2);
}
