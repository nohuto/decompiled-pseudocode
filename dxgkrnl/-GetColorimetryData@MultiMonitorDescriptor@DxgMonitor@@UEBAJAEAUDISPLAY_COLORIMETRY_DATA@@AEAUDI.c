/*
 * XREFs of ?GetColorimetryData@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C006C550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetColorimetryData(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct DISPLAY_COLORIMETRY_DATA *a2,
        struct DISPLAY_COLOR_DEPTHS *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DISPLAY_COLORIMETRY_DATA *, struct DISPLAY_COLOR_DEPTHS *))(**((_QWORD **)this + 2) + 128LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}
