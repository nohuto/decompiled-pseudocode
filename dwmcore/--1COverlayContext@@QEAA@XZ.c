/*
 * XREFs of ??1COverlayContext@@QEAA@XZ @ 0x1800C898C
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1800C76E4 (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??1CDDisplayRenderTarget@@UEAA@XZ @ 0x1801BEB48 (--1CDDisplayRenderTarget@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x1800C7E18 (--1CDirectFlipInfo@@QEAA@XZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800C9844 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C98F0 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall COverlayContext::~COverlayContext(COverlayContext **this)
{
  CResource *v2; // rcx
  COverlayContext *v3; // rcx
  COverlayContext *v4; // rcx
  COverlayContext *v5; // rcx

  COverlayContext::Reset((COverlayContext *)this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 1406));
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(this + 1397));
  CDirectFlipInfo::~CDirectFlipInfo((CDirectFlipInfo *)(this + 1380));
  v2 = this[1379];
  if ( v2 )
    CResource::InternalRelease(v2);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 913);
  v3 = this[913];
  this[913] = 0LL;
  if ( v3 == (COverlayContext *)(this + 916) )
    v3 = 0LL;
  operator delete(v3);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 462);
  v4 = this[462];
  this[462] = 0LL;
  if ( v4 == (COverlayContext *)(this + 465) )
    v4 = 0LL;
  operator delete(v4);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 11);
  v5 = this[11];
  this[11] = 0LL;
  if ( v5 == (COverlayContext *)(this + 14) )
    v5 = 0LL;
  operator delete(v5);
}
