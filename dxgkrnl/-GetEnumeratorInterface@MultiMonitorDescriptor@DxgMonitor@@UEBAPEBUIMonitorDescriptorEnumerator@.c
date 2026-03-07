const struct DxgMonitor::IMonitorDescriptorEnumerator *__fastcall DxgMonitor::MultiMonitorDescriptor::GetEnumeratorInterface(
        DxgMonitor::MultiMonitorDescriptor *this)
{
  return (const struct DxgMonitor::IMonitorDescriptorEnumerator *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
}
