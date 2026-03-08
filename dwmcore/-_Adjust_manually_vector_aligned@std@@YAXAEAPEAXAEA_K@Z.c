/*
 * XREFs of ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800E18F0
 * Callers:
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x18002CF54 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800664C0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x180082A70 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 *     ??$_Insert_range@PEAVCMilPoint2F@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VCMilPoint2F@@@std@@@std@@@1@PEAVCMilPoint2F@@1Uforward_iterator_tag@1@@Z @ 0x180083A20 (--$_Insert_range@PEAVCMilPoint2F@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180083C00 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAPEAVCShapeRenderTask@@QEAV2@@Z @ 0x180084918 (--$_Emplace_reallocate@$$V@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@st.c)
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180090F1C (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800C8F1C (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ @ 0x1800D9784 (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ.c)
 *     ??_EFlattenedShapeSharedData@CRoundedRectangleShape@@UEAAPEAXI@Z @ 0x1800E1450 (--_EFlattenedShapeSharedData@CRoundedRectangleShape@@UEAAPEAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1CShapeDrawingContext@@QEAA@XZ @ 0x180268184 (--1CShapeDrawingContext@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Adjust_manually_vector_aligned(void **a1, unsigned __int64 *a2)
{
  _BYTE *v2; // rdx

  *a2 += 39LL;
  v2 = (_BYTE *)*((_QWORD *)*a1 - 1);
  if ( (unsigned __int64)((_BYTE *)*a1 - v2 - 8) > 0x1F )
    _invalid_parameter_noinfo_noreturn();
  *a1 = v2;
}
