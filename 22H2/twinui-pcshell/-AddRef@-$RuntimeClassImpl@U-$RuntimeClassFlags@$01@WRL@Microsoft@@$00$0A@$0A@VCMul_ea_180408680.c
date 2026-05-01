/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIScrollButtonContainerHost@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180408680
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIVirtualDesktopBarElement@@@Details@WRL@Microsoft@@WNA@EAAKXZ @ 0x18016F100 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMul_ea_18016F100.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewElementBase,IScrollButtonContainerHost>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewElementBase,IVirtualDesktopBarElement>::InternalAddRef(a1);
}
