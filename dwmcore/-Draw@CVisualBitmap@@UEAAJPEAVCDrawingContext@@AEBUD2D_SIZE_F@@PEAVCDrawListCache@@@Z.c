/*
 * XREFs of ?Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18021BA90
 * Callers:
 *     ?Draw@CVisualBitmap@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801181F0 (-Draw@CVisualBitmap@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180021010 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18003A504 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078E40 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5598 (-reset@-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CanUseCVI@CVisualBitmap@@AEAA_NPEAVCDrawingContext@@@Z @ 0x18021BA14 (-CanUseCVI@CVisualBitmap@@AEAA_NPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CVisualBitmap::Draw(
        CVisualBitmap *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v4; // ebx
  int v9; // eax
  __int64 v10; // rcx
  CVisual *v11; // rbx
  int VisualTree; // eax
  __int64 v13; // rcx
  __int128 *v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  struct CVisualTree *v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  if ( *((_QWORD *)this - 8) )
  {
    if ( CVisualBitmap::CanUseCVI((CVisualBitmap *)((char *)this - 136), a2) )
    {
      v9 = CContent::Draw((CVisualBitmap *)((char *)this - 40), a2, a3, a4);
      v4 = v9;
      if ( v9 >= 0 )
        return v4;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x86u, 0LL);
    }
    v18 = 0LL;
    v11 = (CVisual *)*((_QWORD *)this - 8);
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((__int64 *)&v18);
    VisualTree = CVisual::GetVisualTree(v11, &v18);
    v4 = VisualTree;
    if ( VisualTree < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, VisualTree, 0x8Eu, 0LL);
    }
    else
    {
      v14 = (__int128 *)((char *)v18 + 72);
      if ( !*((_QWORD *)v18 + 8) )
        v14 = &TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v15 = CDrawingContext::DrawSubVisualTree((__int64)a2, (__int64)v18, (__int64)v14, 0LL);
      v4 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x92u, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
  }
  return v4;
}
