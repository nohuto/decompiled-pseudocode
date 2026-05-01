/*
 * XREFs of ?VirtualDesktopDestroyed@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18008E240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SwitchItemFilteredCollection::VirtualDesktopDestroyed(
        SwitchItemFilteredCollection *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  --*((_DWORD *)this + 23);
  return 0LL;
}
