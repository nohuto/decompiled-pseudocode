/*
 * XREFs of ?LoadDescriptorOverridesFromRegistry@MultiMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x1C006C8B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::LoadDescriptorOverridesFromRegistry(
        DxgMonitor::MultiMonitorDescriptor *this,
        const struct DxgMonitor::IMonitorRegistry *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct DxgMonitor::IMonitorRegistry *))(**((_QWORD **)this + 1) + 32LL))(
           *((_QWORD *)this + 1),
           a2);
}
