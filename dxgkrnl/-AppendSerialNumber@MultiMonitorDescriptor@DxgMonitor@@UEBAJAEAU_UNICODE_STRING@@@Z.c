/*
 * XREFs of ?AppendSerialNumber@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1C006C240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::AppendSerialNumber(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _UNICODE_STRING *))(**((_QWORD **)this + 1) + 80LL))(
           *((_QWORD *)this + 1),
           a2);
}
