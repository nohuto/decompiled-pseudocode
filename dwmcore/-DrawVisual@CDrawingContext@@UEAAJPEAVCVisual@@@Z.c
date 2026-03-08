/*
 * XREFs of ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180020F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x180020FD0 (-Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z.c)
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180021010 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800DB304 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800E7548 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?reset@?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5598 (-reset@-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawVisual(CDrawingContext *this, struct CVisual *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const struct CMILMatrix *TopByReference; // rax
  __int128 *v7; // r8
  int v9[20]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct CVisualTree *v11; // [rsp+88h] [rbp+10h] BYREF

  if ( !a2 )
    return 0LL;
  v11 = 0LL;
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset(&v11);
  v4 = CSubVisualTree::Create(a2, &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31B,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)v4,
      v9[0]);
  }
  else
  {
    v9[16] = 0;
    CVisual::GetRootTransform(a2, (struct CMILMatrix *)v9, 0, 0);
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 384));
    CMILMatrix::Multiply((CMILMatrix *)v9, TopByReference);
    v7 = (__int128 *)((char *)v11 + 72);
    if ( !*((_QWORD *)v11 + 8) )
      v7 = &TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v5 = CDrawingContext::DrawSubVisualTree((char *)this - 16, v11, v7, v9);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
  return v5;
}
