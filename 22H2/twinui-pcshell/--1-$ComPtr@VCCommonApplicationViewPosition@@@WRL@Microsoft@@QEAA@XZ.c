/*
 * XREFs of ??1?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAA@XZ @ 0x1801F4234
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_CCommonApplicationViewPosition_Geometry::CRect_&__::_1_::dtor$0 @ 0x180449416 (_wil--MakeAndInitializeOrThrow_CCommonApplicationViewPosition_Geometry--CRect_-__--_1_--dtor$0.c)
 *     _KioskPositioner::SetUwpViewFullScreen_::_1_::dtor$0 @ 0x18044CA7C (_KioskPositioner--SetUwpViewFullScreen_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::~ComPtr<CCommonApplicationViewPosition>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease(a1);
}
