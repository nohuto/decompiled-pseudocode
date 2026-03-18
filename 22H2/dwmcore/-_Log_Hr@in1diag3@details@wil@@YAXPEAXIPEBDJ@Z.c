/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B5B34
 * Callers:
 *     ?AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180049720 (-AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x1800CC854 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800D667C (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 *     ?Run@CKstBase@@AEAAKXZ @ 0x1800FBA5C (-Run@CKstBase@@AEAAKXZ.c)
 *     ?RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801CC4DC (-RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 *     _lambda_1e65f1bd86c69cffa4e82cca78acb4e5_::_lambda_invoker_cdecl_ @ 0x1802020F0 (_lambda_1e65f1bd86c69cffa4e82cca78acb4e5_--_lambda_invoker_cdecl_.c)
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x180203460 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 *     wil::details::lambda_call__lambda_5f2d415c4a7cf1ed97bf669579e56a7e___::_lambda_call__lambda_5f2d415c4a7cf1ed97bf669579e56a7e___ @ 0x180204830 (wil--details--lambda_call__lambda_5f2d415c4a7cf1ed97bf669579e56a7e___--_lambda_call__lambda_5f2d.c)
 *     ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x180209BC0 (-GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x180235D98 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     GetStagingTexture @ 0x18027332C (GetStagingTexture.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180197670 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, __int64 a2, __int64 a3, const char *a4)
{
  wil::details *v4; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v4) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<2>((__int64)this, a2, a3, 0LL, 0LL, retaddr, v4);
}
