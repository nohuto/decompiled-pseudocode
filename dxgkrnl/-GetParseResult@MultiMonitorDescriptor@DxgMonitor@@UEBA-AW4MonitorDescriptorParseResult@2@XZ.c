/*
 * XREFs of ?GetParseResult@MultiMonitorDescriptor@DxgMonitor@@UEBA?AW4MonitorDescriptorParseResult@2@XZ @ 0x1C006C730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetParseResult(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16));
}
