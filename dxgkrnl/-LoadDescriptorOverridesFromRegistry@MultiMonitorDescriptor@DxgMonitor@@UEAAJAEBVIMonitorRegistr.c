__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::LoadDescriptorOverridesFromRegistry(
        DxgMonitor::MultiMonitorDescriptor *this,
        const struct DxgMonitor::IMonitorRegistry *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct DxgMonitor::IMonitorRegistry *))(**((_QWORD **)this + 1) + 32LL))(
           *((_QWORD *)this + 1),
           a2);
}
