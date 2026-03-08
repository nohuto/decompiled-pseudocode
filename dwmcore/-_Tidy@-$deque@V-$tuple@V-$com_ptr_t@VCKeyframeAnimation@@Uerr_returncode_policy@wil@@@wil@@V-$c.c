/*
 * XREFs of ?_Tidy@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18020EBB0
 * Callers:
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18008AE70 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ @ 0x18009A290 (-RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ.c)
 *     ??1?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18020D058 (--1-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$com_p.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAAXXZ @ 0x1800F79B8 (-_Tidy@-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::_Tidy(
        _QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v5; // rbx
  void *v6; // rcx
  void *v7; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v3 = *(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[3] - 1LL + v2)));
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(v3 + 32));
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(v3 + 24));
    std::vector<MilRectF>::_Tidy(v3);
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  v5 = a1[2];
  while ( v5 )
  {
    --v5;
    v6 = *(void **)(a1[1] + 8 * v5);
    if ( v6 )
      std::_Deallocate<16,0>(v6, 0x28uLL);
  }
  v7 = (void *)a1[1];
  if ( v7 )
    std::_Deallocate<16,0>(v7, 8LL * a1[2]);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
