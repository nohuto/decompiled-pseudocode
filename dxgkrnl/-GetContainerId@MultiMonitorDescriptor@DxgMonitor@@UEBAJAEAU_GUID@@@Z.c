/*
 * XREFs of ?GetContainerId@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z @ 0x1C006C580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetContainerId(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct _GUID *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _GUID *))(**((_QWORD **)this + 2) + 216LL))(
           *((_QWORD *)this + 2),
           a2);
}
