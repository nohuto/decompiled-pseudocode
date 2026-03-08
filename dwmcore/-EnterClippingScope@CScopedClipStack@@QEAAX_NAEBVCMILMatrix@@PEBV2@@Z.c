/*
 * XREFs of ?EnterClippingScope@CScopedClipStack@@QEAAX_NAEBVCMILMatrix@@PEBV2@@Z @ 0x180021DC0
 * Callers:
 *     ?DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z @ 0x1800219A0 (-DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D31F4 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUClippingScopeState@CScopedClipStack@@_K0@Z @ 0x18008DA5C (-reserve_region@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippingSc.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

void __fastcall CScopedClipStack::EnterClippingScope(
        CScopedClipStack *this,
        char a2,
        const struct CMILMatrix *a3,
        const struct CMILMatrix *a4)
{
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  CMILMatrix *v12; // rdx

  v8 = (void *)detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::reserve_region(
                 this,
                 0xD37A6F4DE9BD37A7uLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3));
  memset_0(v8, 0, 0xB8uLL);
  v9 = *((_QWORD *)this + 1);
  *(_BYTE *)(v9 - 8) = a2;
  v10 = v9 - 152;
  v11 = v9 - 84;
  if ( a4 )
  {
    *(_OWORD *)v10 = *(_OWORD *)a3;
    *(_OWORD *)(v10 + 16) = *((_OWORD *)a3 + 1);
    *(_OWORD *)(v10 + 32) = *((_OWORD *)a3 + 2);
    *(_OWORD *)(v10 + 48) = *((_OWORD *)a3 + 3);
    *(_DWORD *)(v10 + 64) = *((_DWORD *)a3 + 16);
    *(_OWORD *)v11 = *(_OWORD *)a4;
    *(_OWORD *)(v11 + 16) = *((_OWORD *)a4 + 1);
    *(_OWORD *)(v11 + 32) = *((_OWORD *)a4 + 2);
    *(_OWORD *)(v11 + 48) = *((_OWORD *)a4 + 3);
    *(_DWORD *)(v11 + 64) = *((_DWORD *)a4 + 16);
  }
  else
  {
    CMILMatrix::SetToIdentity((CMILMatrix *)v10);
    CMILMatrix::SetToIdentity(v12);
  }
}
