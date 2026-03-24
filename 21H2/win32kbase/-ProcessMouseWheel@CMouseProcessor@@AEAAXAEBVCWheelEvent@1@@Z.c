/*
 * XREFs of ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C17AC
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C01BF170 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00428EC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0042A50 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C0043240 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00435A0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0044428 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C004450C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C0047554 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C0047B74 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C004BBEC (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C004BD08 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0094BC8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C009B424 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C00A1AF4 (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C00A4678 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00ADC2C (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C01BB0F0 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01BF4A8 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01BF824 (-DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C01C02E0 (-GetInputDestFromForegroundFocus@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1C01C03EC (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C01C04EC (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1C01C07B8 (_anonymous_namespace_--HasThreadRequestedFocusMouseWheelRouting.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01C0848 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z @ 0x1C01C1E18 (-ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z.c)
 *     ?RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C01C1F50 (-RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     _anonymous_namespace_::ResolveApplicationFrameChildThread @ 0x1C01C1FE4 (_anonymous_namespace_--ResolveApplicationFrameChildThread.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C01C21D8 (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x1C01CA2E0 (APISetEditionGetMouseWheelRoutingMode.c)
 *     ApiSetEditionLLMouseWheelHook @ 0x1C01CC79C (ApiSetEditionLLMouseWheelHook.c)
 *     ApiSetEditionPostMouseWheelToForeground @ 0x1C01CD3A8 (ApiSetEditionPostMouseWheelToForeground.c)
 */

void __fastcall CMouseProcessor::ProcessMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2)
{
  char v4; // di
  __int64 v5; // rcx
  struct tagPOINT v6; // rbx
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // r8
  int v10; // eax
  BOOL v11; // ebx
  unsigned int WheelMessage; // eax
  _QWORD *v13; // rax
  CMouseProcessor *v14; // rcx
  __int64 v15; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v17; // rbx
  _OWORD *InputDestFromForegroundFocus; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  char v25; // si
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  CMouseProcessor *v27; // rcx
  __int64 v28; // rdi
  unsigned int v29; // r15d
  __int16 v30; // si
  unsigned __int64 v31; // r14
  HWND WindowHandle; // rbx
  unsigned int v33; // eax
  int v34; // edi
  __int64 v35; // rax
  __int64 v36; // rbx
  int v37; // eax
  __int64 v38; // rbx
  __int64 v39; // r14
  __int64 v40; // r15
  int v41; // r12d
  unsigned __int64 v42; // rsi
  int v43; // r10d
  int v44; // edi
  CMouseProcessor::CWheelEvent *v45; // rcx
  int v46; // eax
  bool ShouldDeliverWheelEventToInputDest; // [rsp+50h] [rbp-B0h]
  struct tagPOINT v48; // [rsp+58h] [rbp-A8h] BYREF
  int v49; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+68h] [rbp-98h]
  __int64 v51; // [rsp+70h] [rbp-90h] BYREF
  struct tagPOINT v52; // [rsp+78h] [rbp-88h] BYREF
  __int64 v53; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+90h] [rbp-70h] BYREF
  int v55; // [rsp+98h] [rbp-68h]
  __int64 v56; // [rsp+A0h] [rbp-60h] BYREF
  int v57; // [rsp+A8h] [rbp-58h]
  __int64 v58; // [rsp+ACh] [rbp-54h]
  int v59; // [rsp+B4h] [rbp-4Ch]
  _OWORD v60[7]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v61[128]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v62[7]; // [rsp+1B0h] [rbp+B0h] BYREF
  struct tagPOINT v63; // [rsp+220h] [rbp+120h] BYREF
  int v64; // [rsp+228h] [rbp+128h]
  int v65; // [rsp+22Ch] [rbp+12Ch]
  int v66; // [rsp+230h] [rbp+130h]
  int v67; // [rsp+234h] [rbp+134h]
  __int64 ExtraInfoForHook; // [rsp+238h] [rbp+138h]
  __int128 v69[7]; // [rsp+240h] [rbp+140h] BYREF
  char v70; // [rsp+2B0h] [rbp+1B0h]
  _BYTE v71[128]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v48.x = 0;
  v4 = 0;
  v5 = *((_QWORD *)a2 + 1);
  v6 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
  v52 = v6;
  if ( (*(_DWORD *)(v5 + 112) & 0x200) != 0 )
    v6 = *(struct tagPOINT *)(v5 + 52);
  v48 = v6;
  v50 = (LOWORD(v6.y) << 16) | LOWORD(v6.x);
  memset(v69, 0, sizeof(v69));
  v70 = 0;
  CMouseProcessor::InformUMObservers(this, a2, &v48, &v48);
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) & 0x80u) == 0 && CBaseProcessor::IsUMSuppressed(this) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 6, 39, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
    goto LABEL_48;
  }
  v8 = *((_QWORD *)a2 + 1);
  v63 = v6;
  v64 = *(unsigned __int16 *)(v8 + 30) << 16;
  v65 = *(unsigned __int8 *)(v8 + 112) >> 7;
  v66 = *(_DWORD *)(v8 + 80);
  v67 = 0;
  ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
  v10 = *(_DWORD *)(v9 + 140);
  v11 = (*(_DWORD *)(v9 + 112) & 1) == 0;
  v54 = *(_QWORD *)(v9 + 132);
  v55 = v10;
  WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
  if ( (unsigned int)ApiSetEditionLLMouseWheelHook(&v63, WheelMessage, &v54, v11) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 6, 40, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    goto LABEL_48;
  }
  if ( gpqForeground
    && (*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) & 8) == 0
    && (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) == 0 )
  {
    CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3456, 0, 0);
  }
  ShouldDeliverWheelEventToInputDest = 0;
  v49 = 0;
  if ( *((_DWORD *)a2 + 6) || (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0 )
  {
    v51 = *((_QWORD *)gpsi + 619);
    v13 = CMouseProcessor::MouseHitTest(
            (__int64)this,
            (__int64)v61,
            &v52,
            (__int64)&v51,
            a2,
            _InterlockedCompareExchange((volatile signed __int32 *)this + 922, 1, 1) != 0,
            &v49);
    CInputDest::operator=((__int64)v69, v13);
    CInputDest::SetEmpty((CInputDest *)v61);
    ShouldDeliverWheelEventToInputDest = CMouseProcessor::ShouldDeliverWheelEventToInputDest(
                                           v14,
                                           a2,
                                           (const struct CInputDest *)v69);
    if ( ShouldDeliverWheelEventToInputDest )
    {
      if ( !CInputDest::DoesBelongToForeground((__int64)v69, 0) )
        CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v69);
      v15 = *((_QWORD *)a2 + 1);
      if ( (*(_DWORD *)(v15 + 112) & 8) != 0
        && (*(_DWORD *)(v15 + 108) == 1 || anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v15 + 132), v69)) )
      {
        CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3456, (int)v69, 0);
      }
      ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v69);
      v17 = ThreadInfo;
      if ( !ThreadInfo )
        goto LABEL_27;
      if ( !anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting((__int64)ThreadInfo) )
        goto LABEL_27;
      InputDestFromForegroundFocus = QHelper::GetInputDestFromForegroundFocus(v62);
      v19 = InputDestFromForegroundFocus[1];
      v60[0] = *InputDestFromForegroundFocus;
      v20 = InputDestFromForegroundFocus[2];
      v60[1] = v19;
      v21 = InputDestFromForegroundFocus[3];
      v60[2] = v20;
      v22 = InputDestFromForegroundFocus[4];
      v60[3] = v21;
      v23 = InputDestFromForegroundFocus[5];
      v60[4] = v22;
      v24 = InputDestFromForegroundFocus[6];
      v60[5] = v23;
      v60[6] = v24;
      CInputDest::CInputDest((CInputDest *)v71, (const struct tagINPUTDEST *)v60);
      v4 = 1;
      v25 = 1;
      if ( CInputDest::operator==((int *)v69, (__int64)v71) )
LABEL_27:
        v25 = 0;
      if ( (v4 & 1) != 0 )
        CInputDest::SetEmpty((CInputDest *)v71);
      if ( v25 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 6, 41, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        goto LABEL_48;
      }
      MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread();
      if ( MouseWheelForegroundThread
        && *((_QWORD *)v17 + 53) != *(_QWORD *)(anonymous_namespace_::ResolveApplicationFrameChildThread(MouseWheelForegroundThread)
                                              + 424)
        && !(unsigned int)APISetEditionGetMouseWheelRoutingMode()
        && CMouseProcessor::HittestWheelRoutingRequested(v27) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 6, 42, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        InputTraceLogging::Mouse::RerouteWheel(*(_QWORD *)(*((_QWORD *)a2 + 1) + 88LL));
        ShouldDeliverWheelEventToInputDest = 0;
      }
    }
  }
  v28 = *((_QWORD *)a2 + 1);
  v29 = *((_DWORD *)a2 + 6);
  v30 = *(_WORD *)(v28 + 30);
  v31 = *(_QWORD *)(v28 + 88);
  WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v69);
  v33 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
  InputTraceLogging::Mouse::ProcessWheel(
    v31,
    (const struct tagPOINT *)(v28 + 52),
    v33,
    v30,
    v29,
    WindowHandle,
    ShouldDeliverWheelEventToInputDest);
  v34 = 2 * (unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
  if ( ShouldDeliverWheelEventToInputDest )
  {
    if ( !anonymous_namespace_::InMouseRawInputMode((__int64)v69, 1, 1) )
    {
      v35 = *((_QWORD *)a2 + 1);
      v58 = 0LL;
      v59 = 0;
      v56 = v50;
      v57 = v34;
      v36 = (unsigned __int64)*(unsigned __int16 *)(v35 + 30) << 16;
      v37 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
      if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                           (__int64)this,
                           v69,
                           a2,
                           (const struct CMouseProcessor::InputDeliveryContext *)&v56,
                           &v48,
                           v49,
                           v37,
                           v36) == 1 )
        CMouseProcessor::DeliverMouseWheelToInputDest(
          this,
          a2,
          (const struct CInputDest *)v69,
          (const struct CMouseProcessor::InputDeliveryContext *)&v56);
    }
  }
  else
  {
    if ( !gpqForeground || anonymous_namespace_::InMouseRawInputMode(0LL, 1, 1) )
    {
LABEL_48:
      InputTraceLogging::Mouse::DropWheel();
      goto LABEL_49;
    }
    v38 = *((_QWORD *)a2 + 1);
    v39 = *(unsigned int *)(v38 + 40);
    v40 = *(_QWORD *)(v38 + 88);
    v41 = *(_DWORD *)(v38 + 80);
    v53 = *(_QWORD *)(v38 + 132);
    v42 = (unsigned __int64)&v53 & -(__int64)(CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2) != 0);
    v48.x = v34 | 0x20;
    v44 = v43 << 16;
    v46 = CMouseProcessor::CWheelEvent::GetWheelMessage(v45);
    ApiSetEditionPostMouseWheelToForeground(v46, v44, v50, v41, v40, v39, v48.x, v38 + 104, v42);
  }
LABEL_49:
  CInputDest::SetEmpty((CInputDest *)v69);
}
