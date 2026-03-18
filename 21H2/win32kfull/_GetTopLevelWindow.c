/*
 * XREFs of _GetTopLevelWindow @ 0x1C0075BF0
 * Callers:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00024C8 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C00029E0 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C001F528 (CreateOrGetRedirectionBitmap.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C004D894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1C0069908 (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     ?ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z @ 0x1C006A534 (-ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C006BAD0 (UpdateWindowMonitor.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006D988 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C0075834 (xxxInheritWindowMonitor.c)
 *     ProtectedContentAccessCheck @ 0x1C0075B9C (ProtectedContentAccessCheck.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0077038 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     EditionPostDwmSpeedHitTest @ 0x1C0077400 (EditionPostDwmSpeedHitTest.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _lambda_a4faeffec317e94db02d9bdb76d95fff_::operator() @ 0x1C007EA40 (_lambda_a4faeffec317e94db02d9bdb76d95fff_--operator().c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C007FC50 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C0082554 (-GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z.c)
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00903C4 (IsTopLevelOrLayeredChildWindow.c)
 *     NtUserLayoutCompleted @ 0x1C00A2930 (NtUserLayoutCompleted.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C00B4348 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     ?GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z @ 0x1C00B478C (-GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z.c)
 *     CitGetWindowInfo @ 0x1C00CB860 (CitGetWindowInfo.c)
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1C00CE070 (_lambda_1a8a671d465f8785bc97c99107a222a3_--_lambda_invoker_cdecl_.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00E1344 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     NtUserIsChildWindowDpiMessageEnabled @ 0x1C00E6430 (NtUserIsChildWindowDpiMessageEnabled.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00F1A94 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C0100200 (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C010F7F8 (TransformVectorWithInputTargetPrecedence.c)
 *     NtUserBeginLayoutUpdate @ 0x1C01175B0 (NtUserBeginLayoutUpdate.c)
 *     ?SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z @ 0x1C016E15E (-SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01CEBA0 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D2150 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01DF820 (GetDPITransformationMonitor.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01E59BC (-RequestModernAppClose@@YAHXZ.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01EC438 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     _GetNextQueueWindow @ 0x1C01EE6BC (_GetNextQueueWindow.c)
 *     NtUserGetTopLevelWindow @ 0x1C01F69D0 (NtUserGetTopLevelWindow.c)
 *     NtUserNavigateFocus @ 0x1C01FA6F0 (NtUserNavigateFocus.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C020D6AC (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     _anonymous_namespace_::NotifyPartEnter @ 0x1C0236504 (_anonymous_namespace_--NotifyPartEnter.c)
 *     ?IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z @ 0x1C0238250 (-IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTopLevelWindow(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8

  if ( a1 )
  {
    do
    {
      v1 = *(_QWORD *)(a1 + 104);
      if ( v1 )
      {
        v2 = *(_QWORD *)(a1 + 24);
        if ( v2 )
        {
          v3 = *(_QWORD *)(v2 + 8);
          if ( v3 )
          {
            if ( v1 == *(_QWORD *)(v3 + 24) )
              break;
          }
        }
      }
      a1 = *(_QWORD *)(a1 + 104);
    }
    while ( v1 );
  }
  return a1;
}
