/*
 * XREFs of ?DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z @ 0x18001C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18003A504 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x1800C4268 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EB228 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?reset@?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5598 (-reset@-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CRenderDataBounds::DrawVisual(CRenderDataBounds *this, struct CVisual *a2)
{
  struct CVisualTree *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset(&v5);
    CVisual::GetVisualTree(a2, &v5, 0);
    if ( (int)CVisualTree::Clean(v5, 0LL) < 0 )
    {
      *((_BYTE *)this + 96) = 1;
      *(_OWORD *)((char *)this + 8) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    else
    {
      CRenderDataBounds::AddBounds(this, (char *)a2 + 148);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v5);
  }
  return 0LL;
}
