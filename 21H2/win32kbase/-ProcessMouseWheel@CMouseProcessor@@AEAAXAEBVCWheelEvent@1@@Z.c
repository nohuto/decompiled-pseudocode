/*
 * XREFs of ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FBCD8
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C01F97F0 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0007E58 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C0033B24 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0033FF0 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00355CC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1C00387C4 (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C003880C (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003B608 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C003BCDC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C003C340 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C003D444 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C00419A8 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C0041E98 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C00423CC (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C0042514 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C01F41B0 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01F9E20 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01F9FC8 (-DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C01FA83C (-GetInputDestFromForegroundFocus@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1C01FA948 (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C01FAA48 (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1C01FACE0 (_anonymous_namespace_--HasThreadRequestedFocusMouseWheelRouting.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01FAD64 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z @ 0x1C01FC478 (-ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z.c)
 *     ?RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C01FC5B4 (-RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     _anonymous_namespace_::ResolveApplicationFrameChildThread @ 0x1C01FC648 (_anonymous_namespace_--ResolveApplicationFrameChildThread.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C01FC70C (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x1C0205848 (APISetEditionGetMouseWheelRoutingMode.c)
 *     ApiSetEditionLLMouseWheelHook @ 0x1C02093B0 (ApiSetEditionLLMouseWheelHook.c)
 *     ApiSetEditionPostMouseWheelToForeground @ 0x1C020A888 (ApiSetEditionPostMouseWheelToForeground.c)
 */

void __fastcall CMouseProcessor::ProcessMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2)
{
  char v4; // si
  __int64 v5; // rcx
  struct tagPOINT v6; // rbx
  bool v7; // zf
  int v8; // r8d
  bool v9; // r14
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // edi
  int v14; // ebx
  __int64 v15; // rdx
  unsigned int WheelMessage; // eax
  char v17; // r14
  int v18; // eax
  int v19; // edx
  int v20; // r8d
  char v21; // di
  bool ShouldDeliverWheelEventToInputDest; // r12
  _QWORD *v23; // rax
  CMouseProcessor *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  int v28; // r8d
  struct tagTHREADINFO *v29; // rbx
  _OWORD *InputDestFromForegroundFocus; // rax
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int64 v37; // r8
  int v38; // edx
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  CMouseProcessor *v40; // rcx
  int v41; // edx
  int v42; // r8d
  HWND WindowHandle; // rdi
  unsigned int v44; // esi
  __int16 v45; // bx
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned int v48; // eax
  int v49; // ebx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rbx
  int v53; // eax
  __int64 v54; // rsi
  char v55; // al
  __int64 v56; // r14
  char v57; // bl
  __int64 v58; // r15
  int v59; // r12d
  int v60; // edi
  __int64 v61; // rdx
  CMouseProcessor::CWheelEvent *v62; // rcx
  __int64 v63; // r8
  int v64; // eax
  int v65; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v66; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v67; // [rsp+60h] [rbp-A0h] BYREF
  int v68; // [rsp+68h] [rbp-98h]
  __int64 v69; // [rsp+6Ch] [rbp-94h]
  int v70; // [rsp+74h] [rbp-8Ch]
  __int64 v71; // [rsp+80h] [rbp-80h]
  struct tagPOINT v72; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v73[2]; // [rsp+90h] [rbp-70h] BYREF
  char v74; // [rsp+A0h] [rbp-60h]
  _OWORD v75[7]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v76[7]; // [rsp+120h] [rbp+20h] BYREF
  struct tagPOINT v77; // [rsp+190h] [rbp+90h] BYREF
  int v78; // [rsp+198h] [rbp+98h]
  int v79; // [rsp+19Ch] [rbp+9Ch]
  int v80; // [rsp+1A0h] [rbp+A0h]
  int v81; // [rsp+1A4h] [rbp+A4h]
  __int64 ExtraInfoForHook; // [rsp+1A8h] [rbp+A8h]
  __int128 v83[7]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v84; // [rsp+220h] [rbp+120h]
  _BYTE v85[128]; // [rsp+230h] [rbp+130h] BYREF

  LODWORD(v67) = 0;
  v4 = 0;
  v73[0] = this;
  v5 = *((_QWORD *)a2 + 1);
  v73[1] = a2;
  v6 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
  v72 = v6;
  v7 = (*(_DWORD *)(v5 + 112) & 0x200) == 0;
  v74 = 0;
  if ( !v7 )
    v6 = *(struct tagPOINT *)(v5 + 52);
  v66 = v6;
  v71 = (LOWORD(v6.y) << 16) | LOWORD(v6.x);
  memset(v83, 0, sizeof(v83));
  v84 = 0;
  CMouseProcessor::InformUMObservers(this, a2, &v66, &v66);
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) & 0x80u) == 0 && CBaseProcessor::IsUMSuppressed(this) )
  {
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 40;
      LOBYTE(v10) = v9;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        40,
        (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
    }
    goto LABEL_70;
  }
  v11 = *((_QWORD *)a2 + 1);
  v77 = v6;
  v78 = *(unsigned __int16 *)(v11 + 30) << 16;
  v79 = *(unsigned __int8 *)(v11 + 112) >> 7;
  v80 = *(_DWORD *)(v11 + 80);
  v81 = 0;
  ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
  v13 = *(_DWORD *)(v12 + 112);
  v14 = *(_DWORD *)(v12 + 140);
  v67 = *(_QWORD *)(v12 + 132);
  WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2, v15, v12);
  v17 = 1;
  v68 = v14;
  v18 = ApiSetEditionLLMouseWheelHook(&v77, WheelMessage, &v67, (v13 & 1) == 0);
  v21 = 0;
  if ( v18 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v19) = 0;
    }
    if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        v20,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        41,
        (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
    }
    goto LABEL_70;
  }
  if ( gpqForeground
    && (*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) & 8) == 0
    && (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) == 0 )
  {
    CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3464, 0, 0);
  }
  ShouldDeliverWheelEventToInputDest = 0;
  v65 = 0;
  if ( *((_DWORD *)a2 + 6) || (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0 )
  {
    v67 = *((_QWORD *)gpsi + 619);
    v23 = CMouseProcessor::MouseHitTest((__int64)this, (__int64)v85, &v72, (__int64)&v67, a2, 0, &v65);
    CInputDest::operator=((__int64)v83, v23);
    CInputDest::SetEmpty((CInputDest *)v85);
    v74 = 1;
    ShouldDeliverWheelEventToInputDest = CMouseProcessor::ShouldDeliverWheelEventToInputDest(
                                           v24,
                                           a2,
                                           (const struct CInputDest *)v83);
    if ( ShouldDeliverWheelEventToInputDest )
    {
      if ( !CInputDest::DoesBelongToForeground((__int64)v83, 0) )
        CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v83);
      v26 = *((_QWORD *)a2 + 1);
      if ( (*(_DWORD *)(v26 + 112) & 8) != 0
        && (*(_DWORD *)(v26 + 108) == 1 || anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v26 + 132), v83, v25)) )
      {
        CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3464, (int)v83, 0);
      }
      ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v83);
      v29 = ThreadInfo;
      if ( ThreadInfo )
      {
        if ( anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting((__int64)ThreadInfo) )
        {
          InputDestFromForegroundFocus = QHelper::GetInputDestFromForegroundFocus(v76);
          v31 = InputDestFromForegroundFocus[1];
          v75[0] = *InputDestFromForegroundFocus;
          v32 = InputDestFromForegroundFocus[2];
          v75[1] = v31;
          v33 = InputDestFromForegroundFocus[3];
          v75[2] = v32;
          v34 = InputDestFromForegroundFocus[4];
          v75[3] = v33;
          v35 = InputDestFromForegroundFocus[5];
          v75[4] = v34;
          v36 = InputDestFromForegroundFocus[6];
          v75[5] = v35;
          v75[6] = v36;
          CInputDest::CInputDest((CInputDest *)v85, (const struct tagINPUTDEST *)v75);
          v4 = 1;
          if ( !CInputDest::operator==((unsigned int *)v83, (__int64)v85, v37) )
            v21 = 1;
        }
      }
      if ( (v4 & 1) != 0 )
        CInputDest::SetEmpty((CInputDest *)v85);
      if ( v21 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v17 = 0;
        }
        if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v38 = 42;
          LOBYTE(v38) = v17;
          LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v38,
            v28,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            6,
            42,
            (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
        }
        goto LABEL_70;
      }
      MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread();
      if ( MouseWheelForegroundThread
        && *((_QWORD *)v29 + 53) != *(_QWORD *)(anonymous_namespace_::ResolveApplicationFrameChildThread(MouseWheelForegroundThread)
                                              + 424)
        && !(unsigned int)APISetEditionGetMouseWheelRoutingMode()
        && CMouseProcessor::HittestWheelRoutingRequested(v40) )
      {
        LOBYTE(v41) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v42) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v41,
            v42,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            6,
            43,
            (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
        }
        InputTraceLogging::Mouse::RerouteWheel(*(_QWORD *)(*((_QWORD *)a2 + 1) + 88LL));
        ShouldDeliverWheelEventToInputDest = 0;
      }
    }
  }
  WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v83);
  v44 = *((_DWORD *)a2 + 6);
  v45 = *(_WORD *)(*((_QWORD *)a2 + 1) + 30LL);
  v48 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2, v46, v47);
  InputTraceLogging::Mouse::ProcessWheel(
    *(_QWORD *)(*((_QWORD *)a2 + 1) + 88LL),
    (const struct tagPOINT *)(*((_QWORD *)a2 + 1) + 52LL),
    v48,
    v45,
    v44,
    WindowHandle,
    ShouldDeliverWheelEventToInputDest);
  v49 = 2 * (unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
  LODWORD(v67) = v49;
  if ( ShouldDeliverWheelEventToInputDest )
  {
    if ( !anonymous_namespace_::InMouseRawInputMode((__int64)v83, 1LL, 1) )
    {
      v51 = *((_QWORD *)a2 + 1);
      v69 = 0LL;
      v70 = 0;
      v67 = v71;
      v68 = v49;
      v52 = *(unsigned __int16 *)(v51 + 30);
      v53 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2, v50, v71);
      if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                           this,
                           v83,
                           a2,
                           (struct CMouseProcessor::InputDeliveryContext *)&v67,
                           &v66,
                           v65,
                           v53,
                           v52 << 16) == 1 )
        CMouseProcessor::DeliverMouseWheelToInputDest(
          this,
          a2,
          (const struct CInputDest *)v83,
          (const struct CMouseProcessor::InputDeliveryContext *)&v67);
    }
  }
  else
  {
    if ( !gpqForeground || anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1) )
    {
LABEL_70:
      InputTraceLogging::Mouse::DropWheel();
      goto LABEL_71;
    }
    v54 = *((_QWORD *)a2 + 1);
    v66 = *(struct tagPOINT *)(v54 + 132);
    v55 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
    v56 = *(unsigned int *)(v54 + 40);
    v57 = v55;
    v58 = *(_QWORD *)(v54 + 88);
    v59 = *(_DWORD *)(v54 + 80);
    v60 = *(unsigned __int16 *)(v54 + 30);
    v64 = CMouseProcessor::CWheelEvent::GetWheelMessage(v62, v61, v63);
    ApiSetEditionPostMouseWheelToForeground(
      v64,
      v60 << 16,
      v71,
      v59,
      v58,
      v56,
      v67 | 0x20,
      v54 + 104,
      (unsigned __int64)&v66 & -(__int64)(v57 != 0));
  }
LABEL_71:
  CInputDest::SetEmpty((CInputDest *)v83);
  CMouseProcessor::EndStreamToken::~EndStreamToken((CMouseProcessor::EndStreamToken *)v73);
}
