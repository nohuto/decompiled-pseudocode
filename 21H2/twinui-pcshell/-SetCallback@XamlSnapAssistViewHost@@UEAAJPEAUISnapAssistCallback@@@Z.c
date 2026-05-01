/*
 * XREFs of ?SetCallback@XamlSnapAssistViewHost@@UEAAJPEAUISnapAssistCallback@@@Z @ 0x180384D00
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x1801E9CA8 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 */

__int64 __fastcall XamlSnapAssistViewHost::SetCallback(XamlSnapAssistViewHost *this, struct ISnapAssistCallback *a2)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 23, (__int64)a2);
  return 0LL;
}
