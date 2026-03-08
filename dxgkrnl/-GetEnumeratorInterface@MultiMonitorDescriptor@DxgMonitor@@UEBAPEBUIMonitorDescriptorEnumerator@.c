/*
 * XREFs of ?GetEnumeratorInterface@MultiMonitorDescriptor@DxgMonitor@@UEBAPEBUIMonitorDescriptorEnumerator@2@XZ @ 0x1C006C640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

const struct DxgMonitor::IMonitorDescriptorEnumerator *__fastcall DxgMonitor::MultiMonitorDescriptor::GetEnumeratorInterface(
        DxgMonitor::MultiMonitorDescriptor *this)
{
  return (const struct DxgMonitor::IMonitorDescriptorEnumerator *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
}
