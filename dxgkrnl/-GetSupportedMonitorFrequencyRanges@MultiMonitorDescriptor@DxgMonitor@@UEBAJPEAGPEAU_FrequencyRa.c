/*
 * XREFs of ?GetSupportedMonitorFrequencyRanges@MultiMonitorDescriptor@DxgMonitor@@UEBAJPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C006C7F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetSupportedMonitorFrequencyRanges(
        DxgMonitor::MultiMonitorDescriptor *this,
        unsigned __int16 *a2,
        struct _FrequencyRangeDescriptor *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *, struct _FrequencyRangeDescriptor *))(**((_QWORD **)this + 2) + 200LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}
