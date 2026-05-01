/*
 * XREFs of ?EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x18007F500
 * Callers:
 *     <none>
 * Callees:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180028880 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicPositioner::EvaluateHolographicContext(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        int *a4)
{
  struct Windows::Foundation::Collections::IPropertySet *v8; // [rsp+40h] [rbp+18h] BYREF

  *a4 = 0;
  v8 = 0LL;
  if ( a3
    && ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         &v8) >= 0
    && HolographicPositioner::_IsViewContextHolographic((HolographicPositioner *)((char *)this - 120), a2, v8) )
  {
    *a4 = 1;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return 0LL;
}
