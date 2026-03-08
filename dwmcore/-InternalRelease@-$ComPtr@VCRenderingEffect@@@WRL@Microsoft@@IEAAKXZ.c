/*
 * XREFs of ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x1800102A0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180029D08 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18005B700 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084A90 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800B3DC0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B4C40 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ??$?4VCCommonRenderingEffect@@@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCommonRenderingEffect@@@Z @ 0x1800B58C0 (--$-4VCCommonRenderingEffect@@@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCComm.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x1800B5D70 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x1800B5E94 (--1CEffectBrush@@MEAA@XZ.c)
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x1800E3414 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     ??4?$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@QEAAAEAV012@PEAVClipPlaneInfoRef@@@Z @ 0x1800F2520 (--4-$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@QEAAAEAV012@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1800F8A04 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x18010DFF4 (--1-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801290B0 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??_GTargetingInfo@@QEAAPEAXI@Z @ 0x180129610 (--_GTargetingInfo@@QEAAPEAXI@Z.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180197AFC (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x18019A4A4 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x18019A4F4 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019A7E4 (-CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z @ 0x18019A904 (-CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18019AD14 (-Insert@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV-$ComPtr@VCManipulatio.c)
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x18019B610 (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x18019B88C (-OnInput@CManipulationManager@@IEAAXXZ.c)
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x18019B9B8 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x18019BD9C (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019BEFC (-ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18019C918 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 *     ?Remove@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18019D38C (-Remove@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@V.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x18019D43C (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     ?RemoveRange@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHHH@Z @ 0x18019D588 (-RemoveRange@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$Com.c)
 *     ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019E3BC (-TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18019E5C8 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x18019FA84 (-Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z.c)
 *     ??1CManipulationContext@@UEAA@XZ @ 0x1801A01B8 (--1CManipulationContext@@UEAA@XZ.c)
 *     ?GetLastPointerTarget@CManipulationContext@@UEBAJIPEAUTargetingInfo@@@Z @ 0x1801A1090 (-GetLastPointerTarget@CManipulationContext@@UEBAJIPEAUTargetingInfo@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x1801A11A0 (-Initialize@CManipulationContext@@QEAAJ_NK@Z.c)
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801A2374 (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1801A2408 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     ?RevalidateMCsAndLists@CManipulationContext@@CAXPEAUMCCollections@@PEAH@Z @ 0x1801A3134 (-RevalidateMCsAndLists@CManipulationContext@@CAXPEAUMCCollections@@PEAH@Z.c)
 *     ?RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801A31C4 (-RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1801A4680 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 *     ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z @ 0x1801A4C6C (-ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1801A4ED8 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x1801A5288 (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x1801D7334 (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x1801E3010 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ??1CDrawListEntryBatch@@EEAA@XZ @ 0x180207474 (--1CDrawListEntryBatch@@EEAA@XZ.c)
 *     ??1CPolygon@@EEAA@XZ @ 0x18020EE5C (--1CPolygon@@EEAA@XZ.c)
 *     ??$?4VCExpressionForce@@@?$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpressionForce@@@Z @ 0x18022CCF4 (--$-4VCExpressionForce@@@-$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpressionForc.c)
 *     ??$?4VCScalarForce@@@?$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCScalarForce@@@12@@Z @ 0x18022CD94 (--$-4VCScalarForce@@@-$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPtr@VCScalarFo.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x180230C64 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ??1CNaturalAnimation@@UEAA@XZ @ 0x180238804 (--1CNaturalAnimation@@UEAA@XZ.c)
 *     ??4?$ComPtr@VCVector3Force@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVector3Force@@@Z @ 0x1802388FC (--4-$ComPtr@VCVector3Force@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVector3Force@@@Z.c)
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x180261C48 (-SelectInertiaModifier@CScrollAnimation@@QEAAJXZ.c)
 *     ??1CMotion@@QEAA@XZ @ 0x180263224 (--1CMotion@@QEAA@XZ.c)
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x180263750 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x180267230 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 *     ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x18026B5D4 (-InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z.c)
 *     ?StartInContact@CMotion@@IEAAX_N@Z @ 0x18026B720 (-StartInContact@CMotion@@IEAAX_N@Z.c)
 *     ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x18026B7A4 (-StartInertia@CMotion@@IEAAXMM_N0@Z.c)
 *     ?GetCurrentState@CNaturalAnimationScalarForceAdapater@@UEBA?BUIntegrationState@@XZ @ 0x180273D40 (-GetCurrentState@CNaturalAnimationScalarForceAdapater@@UEBA-BUIntegrationState@@XZ.c)
 *     ?GetFinalValue@CNaturalAnimationScalarForceAdapater@@UEBAMM@Z @ 0x180273E00 (-GetFinalValue@CNaturalAnimationScalarForceAdapater@@UEBAMM@Z.c)
 *     ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z @ 0x180273E9C (-GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z.c)
 *     ?IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ @ 0x180273EF0 (-IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ.c)
 *     ??1CManipulationManager@@MEAA@XZ @ 0x18027FDEC (--1CManipulationManager@@MEAA@XZ.c)
 *     ??1MCCollections@@QEAA@XZ @ 0x18027FF10 (--1MCCollections@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return result;
}
