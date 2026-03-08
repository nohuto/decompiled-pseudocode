/*
 * XREFs of ?GetEnumeratorInterface@EdidMonitorDescriptor@DxgMonitor@@UEBAPEBUIMonitorDescriptorEnumerator@2@XZ @ 0x1C021A880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct DxgMonitor::IMonitorDescriptorEnumerator *__fastcall DxgMonitor::EdidMonitorDescriptor::GetEnumeratorInterface(
        DxgMonitor::EdidMonitorDescriptor *this)
{
  return (const struct DxgMonitor::IMonitorDescriptorEnumerator *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
}
