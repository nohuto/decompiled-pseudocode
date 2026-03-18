/*
 * XREFs of _GetTopLevelWindow @ 0x1C00CFFB0
 * Callers:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0007E18 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000F42C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _lambda_a4faeffec317e94db02d9bdb76d95fff_::operator() @ 0x1C0018E5C (_lambda_a4faeffec317e94db02d9bdb76d95fff_--operator().c)
 *     ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C002878C (-GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     NtUserSetWindowPos @ 0x1C0028F90 (NtUserSetWindowPos.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0041F3C (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00423D8 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C005EDC4 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C0066A48 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1C0094BD0 (_lambda_1a8a671d465f8785bc97c99107a222a3_--_lambda_invoker_cdecl_.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00B4624 (IsTopLevelOrLayeredChildWindow.c)
 *     NtUserBeginLayoutUpdate @ 0x1C00B6640 (NtUserBeginLayoutUpdate.c)
 *     CitGetWindowInfo @ 0x1C00C3C30 (CitGetWindowInfo.c)
 *     NtUserLayoutCompleted @ 0x1C00C5C40 (NtUserLayoutCompleted.c)
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C00C7F30 (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 *     xxxSetLayeredWindow @ 0x1C00CEB30 (xxxSetLayeredWindow.c)
 *     ProtectedContentAccessCheck @ 0x1C00CF0E8 (ProtectedContentAccessCheck.c)
 *     ?IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z @ 0x1C00CFE9C (-IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00CFF84 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     UpdateWindowMonitor @ 0x1C00D16E0 (UpdateWindowMonitor.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1C00D1C5C (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00D564C (CreateOrGetRedirectionBitmap.c)
 *     ?GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z @ 0x1C00ECBC8 (-GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00EF314 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00EF6D0 (NtUserGetWindowCompositionAttribute.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C01210F8 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C0122140 (-IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C0150FD8 (TransformVectorWithInputTargetPrecedence.c)
 *     ?SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z @ 0x1C01574BA (-SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01AE34C (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     GetDPITransformationMonitor @ 0x1C01B9BB4 (GetDPITransformationMonitor.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01C0160 (-RequestModernAppClose@@YAHXZ.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C645C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01C73E8 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01CA2B8 (_GetNextQueueWindow.c)
 *     NtUserGetTopLevelWindow @ 0x1C01D3EF0 (NtUserGetTopLevelWindow.c)
 *     NtUserNavigateFocus @ 0x1C01D7B90 (NtUserNavigateFocus.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01F3E38 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _anonymous_namespace_::GetWindowStateForPartNotification @ 0x1C021D12C (_anonymous_namespace_--GetWindowStateForPartNotification.c)
 *     _anonymous_namespace_::NotifyPartEnter @ 0x1C021D290 (_anonymous_namespace_--NotifyPartEnter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTopLevelWindow(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rax

  if ( a1 )
  {
    while ( 1 )
    {
      v1 = *(_QWORD *)(a1 + 104);
      if ( !v1 )
        break;
      v2 = *(_QWORD *)(a1 + 24);
      if ( v2 )
      {
        v3 = *(_QWORD *)(v2 + 8);
        if ( v3 )
        {
          if ( v1 == *(_QWORD *)(v3 + 24) )
            return a1;
        }
      }
      a1 = *(_QWORD *)(a1 + 104);
    }
    return 0LL;
  }
  return a1;
}
