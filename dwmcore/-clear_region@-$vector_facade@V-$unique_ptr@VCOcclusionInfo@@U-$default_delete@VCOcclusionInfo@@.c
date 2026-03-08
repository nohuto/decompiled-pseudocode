/*
 * XREFs of ?clear_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180043738
 * Callers:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180043620 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800634C0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064860 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A040 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x180086070 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18009B504 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x18009B6A4 (--1CTreeData@@UEAA@XZ.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800DE2D0 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?AgeOutOcclusionInfos@CTreeData@@IEAAXXZ @ 0x1800E8E18 (-AgeOutOcclusionInfos@CTreeData@@IEAAXXZ.c)
 *     ?clear@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18020EC64 (-clear@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@0@0V12@@Z @ 0x180043824 (--$move@V-$move_iterator@PEAV-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@s.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // r10
  __int64 v10; // rsi
  _QWORD *i; // rbx
  __int64 result; // rax
  _QWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-28h] BYREF

  v5 = a2;
  v6 = *a1;
  v7 = a3 + a2;
  v9 = (a1[1] - v6) >> 3;
  if ( v7 > v9 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_16;
  }
  v3 = (_QWORD *)(v6 + 8 * v9);
  if ( v7 != v9 )
  {
    if ( !v5 )
    {
LABEL_13:
      v13[0] = v6;
      v13[2] = v5;
      v13[1] = v9;
      result = ((__int64 (__fastcall *)(_BYTE *, unsigned __int64, _QWORD *, _QWORD *))std::move<std::move_iterator<std::unique_ptr<COcclusionInfo> *>,stdext::checked_array_iterator<std::unique_ptr<COcclusionInfo> *>>)(
                 v14,
                 v6 + 8 * v7,
                 v3,
                 v13);
      goto LABEL_3;
    }
    if ( !v6 )
LABEL_14:
      _invalid_parameter_noinfo_noreturn();
    if ( v5 >= 0 )
    {
      if ( v9 >= v5 )
        goto LABEL_13;
      goto LABEL_14;
    }
LABEL_16:
    if ( !v5 )
      goto LABEL_13;
    goto LABEL_14;
  }
LABEL_3:
  v10 = 8 * a3;
  for ( i = &v3[v10 / 0xFFFFFFFFFFFFFFF8uLL]; i != v3; ++i )
  {
    if ( *i )
      result = (**(__int64 (__fastcall ***)(_QWORD, __int64))*i)(*i, 1LL);
  }
  a1[1] -= v10;
  return result;
}
