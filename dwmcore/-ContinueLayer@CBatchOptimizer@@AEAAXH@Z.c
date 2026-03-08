/*
 * XREFs of ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18000DAAC
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084A90 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18008E300 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180090540 (-AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 * Callees:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x18000DB70 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x1800E70B4 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 */

void __fastcall CBatchOptimizer::ContinueLayer(CBatchOptimizer *this, int a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v5; // rsi
  char *v6; // r14
  __int64 v7; // rbx
  _DWORD *v8; // r15
  __int64 v9; // rax
  int v10; // edx

  v2 = a2;
  v3 = 0LL;
  v5 = 520LL * *((int *)this + a2 + 12);
  if ( *(_DWORD *)((char *)this + v5 + 100) )
    *(_DWORD *)((char *)this + v5 + 104) = 1;
  v6 = (char *)this + v5;
  if ( a2 )
  {
    CBatchOptimizer::FlushBottomLayer(this);
    v8 = (_DWORD *)((char *)this + 48);
    v9 = *((int *)this + 12);
    *(_OWORD *)((char *)this + 520 * v9 + 80) = *(_OWORD *)((char *)this + v5 + 80);
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(
      (char *)this + 520 * v9 + 112,
      *((_QWORD *)v6 + 14));
    v10 = *((_DWORD *)this + 12);
    do
    {
      ++v3;
      *v8 = v8[1];
      ++v8;
    }
    while ( v3 != v2 );
    *((_DWORD *)this + v2 + 12) = v10;
  }
  else
  {
    v7 = *((_QWORD *)v6 + 14);
    CBatchOptimizer::FlushBottomLayer(this);
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v6 + 112, v7);
  }
}
