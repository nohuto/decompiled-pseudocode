/*
 * XREFs of ?VirtualDesktopDestroyed@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1803E87B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktop::VirtualDesktopDestroyed(
        RTL_SRWLOCK *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  return VirtualDesktop::UpdateDesktopIndex(this - 2);
}
