/*
 * XREFs of ?CollectAdditionalDirtyRects@CPreComputeContext@@AEAAJPEAVCVisual@@PEAVSubTreeContext@1@@Z @ 0x1800DBD0C
 * Callers:
 *     ?CollectAdditionalDirtyRectsForSubTrees@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x1800DBC94 (-CollectAdditionalDirtyRectsForSubTrees@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180090B5C (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800DBDB4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPreComputeContext::CollectAdditionalDirtyRects(
        CPreComputeContext *this,
        struct CVisual *a2,
        struct CPreComputeContext::SubTreeContext *a3)
{
  const struct CMILMatrix *TopByReference; // rax
  __int64 v6; // r9
  __int64 (__fastcall *v7)(struct CVisual *, _QWORD, _QWORD, const struct CMILMatrix *, __int64); // r11
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0LL;
  if ( *((_DWORD *)a3 + 98) )
    CBaseClipStack::Top((unsigned int *)a3 + 98, &v9);
  TopByReference = CMatrixStack::GetTopByReference((struct CPreComputeContext::SubTreeContext *)((char *)a3 + 360));
  return v7(a2, *((_QWORD *)a3 + 54), *((_QWORD *)a3 + 53), TopByReference, v6);
}
