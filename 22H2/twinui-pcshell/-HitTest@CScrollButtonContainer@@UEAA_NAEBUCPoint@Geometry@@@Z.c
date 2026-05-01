/*
 * XREFs of ?HitTest@CScrollButtonContainer@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x180416720
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x180413C08 (-_HitTestChildren@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@.c)
 */

bool __fastcall CScrollButtonContainer::HitTest(CScrollButtonContainer *this, const struct Geometry::CPoint *a2)
{
  bool v2; // bl
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = *CMultitaskingViewElementBase::_HitTestChildren(this, &v4, (__int64 *)a2) != 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  return v2;
}
