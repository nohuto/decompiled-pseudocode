/*
 * XREFs of ?IsEotf2084Supported@MultiMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x1C006C880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::IsEotf2084Supported(DxgMonitor::MultiMonitorDescriptor *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 176LL))(*((_QWORD *)this + 2));
}
