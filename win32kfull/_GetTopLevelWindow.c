/*
 * XREFs of _GetTopLevelWindow @ 0x1C0035AF0
 * Callers:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0007CC8 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000E6EC (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C0025360 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C0028F20 (-GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C002B8C8 (CreateOrGetRedirectionBitmap.c)
 *     ?IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z @ 0x1C00359DC (-IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0035AC4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ProtectedContentAccessCheck @ 0x1C0039B9C (ProtectedContentAccessCheck.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00402A0 (NtUserGetWindowCompositionAttribute.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0043348 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z @ 0x1C0044458 (-GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00468F4 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0048F7C (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C0049F70 (-IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z.c)
 *     NtUserSetWindowPos @ 0x1C0067A30 (NtUserSetWindowPos.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0096318 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     NtUserLayoutCompleted @ 0x1C0098EE0 (NtUserLayoutCompleted.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C009E068 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1C00A366C (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     UpdateWindowMonitor @ 0x1C00AE6B0 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     _lambda_a4faeffec317e94db02d9bdb76d95fff_::operator() @ 0x1C00BDBE4 (_lambda_a4faeffec317e94db02d9bdb76d95fff_--operator().c)
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1C00C8930 (_lambda_1a8a671d465f8785bc97c99107a222a3_--_lambda_invoker_cdecl_.c)
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C00DFDF0 (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00EC5C8 (IsTopLevelOrLayeredChildWindow.c)
 *     NtUserBeginLayoutUpdate @ 0x1C00EEB80 (NtUserBeginLayoutUpdate.c)
 *     CitGetWindowInfo @ 0x1C0101B20 (CitGetWindowInfo.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C01442D8 (TransformVectorWithInputTargetPrecedence.c)
 *     ?SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z @ 0x1C014A79A (-SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01AF53C (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     GetDPITransformationMonitor @ 0x1C01BAD54 (GetDPITransformationMonitor.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01C1328 (-RequestModernAppClose@@YAHXZ.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C75BC (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01C8548 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01CB3B8 (_GetNextQueueWindow.c)
 *     NtUserGetTopLevelWindow @ 0x1C01D4F20 (NtUserGetTopLevelWindow.c)
 *     NtUserNavigateFocus @ 0x1C01D8BC0 (NtUserNavigateFocus.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01EEA1C (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01F5038 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _anonymous_namespace_::GetWindowStateForPartNotification @ 0x1C021FD2C (_anonymous_namespace_--GetWindowStateForPartNotification.c)
 *     _anonymous_namespace_::NotifyPartEnter @ 0x1C021FE90 (_anonymous_namespace_--NotifyPartEnter.c)
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
