/*
 * XREFs of ?GetDolbyVisionCaps@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C006C610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetDolbyVisionCaps(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct DISPLAY_DVLL_CAPS *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DISPLAY_DVLL_CAPS *))(**((_QWORD **)this + 1) + 168LL))(
           *((_QWORD *)this + 1),
           a2);
}
