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
  unsigned int WheelMessage; // eax
  char v16; // r14
  int v17; // eax
  int v18; // edx
  int v19; // r8d
  char v20; // di
  bool ShouldDeliverWheelEventToInputDest; // r12
  _QWORD *v22; // rax
  CMouseProcessor *v23; // rcx
  __int64 v24; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  int v26; // r8d
  struct tagTHREADINFO *v27; // rbx
  _OWORD *InputDestFromForegroundFocus; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  int v35; // edx
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  CMouseProcessor *v37; // rcx
  int v38; // edx
  int v39; // r8d
  HWND WindowHandle; // rdi
  unsigned int v41; // esi
  __int16 v42; // bx
  unsigned int v43; // eax
  int v44; // ebx
  __int64 v45; // rax
  __int64 v46; // rbx
  int v47; // eax
  __int64 v48; // rsi
  char v49; // al
  __int64 v50; // r14
  char v51; // bl
  __int64 v52; // r15
  int v53; // r12d
  int v54; // edi
  CMouseProcessor::CWheelEvent *v55; // rcx
  int v56; // eax
  int v57; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v58; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+60h] [rbp-A0h] BYREF
  int v60; // [rsp+68h] [rbp-98h]
  __int64 v61; // [rsp+6Ch] [rbp-94h]
  int v62; // [rsp+74h] [rbp-8Ch]
  __int64 v63; // [rsp+80h] [rbp-80h]
  CMouseProcessor *v64[2]; // [rsp+88h] [rbp-78h] BYREF
  char v65; // [rsp+98h] [rbp-68h]
  int v66; // [rsp+9Ch] [rbp-64h]
  struct tagPOINT v67; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v68[7]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v69[7]; // [rsp+120h] [rbp+20h] BYREF
  struct tagPOINT v70; // [rsp+190h] [rbp+90h] BYREF
  int v71; // [rsp+198h] [rbp+98h]
  int v72; // [rsp+19Ch] [rbp+9Ch]
  int v73; // [rsp+1A0h] [rbp+A0h]
  int v74; // [rsp+1A4h] [rbp+A4h]
  __int64 ExtraInfoForHook; // [rsp+1A8h] [rbp+A8h]
  int v76[28]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v77; // [rsp+220h] [rbp+120h]
  _BYTE v78[128]; // [rsp+230h] [rbp+130h] BYREF

  LODWORD(v59) = 0;
  v4 = 0;
  v64[0] = this;
  v5 = *((_QWORD *)a2 + 1);
  v64[1] = a2;
  v6 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
  v67 = v6;
  v7 = (*(_DWORD *)(v5 + 112) & 0x200) == 0;
  v65 = 0;
  v66 = 0;
  if ( !v7 )
    v6 = *(struct tagPOINT *)(v5 + 52);
  v58 = v6;
  v63 = (LOWORD(v6.y) << 16) | LOWORD(v6.x);
  memset(v76, 0, sizeof(v76));
  v77 = 0;
  CMouseProcessor::InformUMObservers(this, a2, &v58, &v58);
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
        (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
    }
    goto LABEL_70;
  }
  v11 = *((_QWORD *)a2 + 1);
  v70 = v6;
  v71 = *(unsigned __int16 *)(v11 + 30) << 16;
  v72 = *(unsigned __int8 *)(v11 + 112) >> 7;
  v73 = *(_DWORD *)(v11 + 80);
  v74 = 0;
  ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
  v13 = *(_DWORD *)(v12 + 112);
  v14 = *(_DWORD *)(v12 + 140);
  v59 = *(_QWORD *)(v12 + 132);
  WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
  v16 = 1;
  v60 = v14;
  v17 = ApiSetEditionLLMouseWheelHook(&v70, WheelMessage, &v59, (v13 & 1) == 0);
  v20 = 0;
  if ( v17 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v18) = 0;
    }
    if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v19,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        41,
        (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
    }
    goto LABEL_70;
  }
  if ( gpqForeground
    && (*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) & 8) == 0
    && (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 2) == 0 )
  {
    CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3464, 0, 0);
  }
  ShouldDeliverWheelEventToInputDest = 0;
  v57 = 0;
  if ( *((_DWORD *)a2 + 6) || (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 2) != 0 )
  {
    v59 = *((_QWORD *)gpsi + 619);
    v22 = CMouseProcessor::MouseHitTest((__int64)this, (__int64)v78, &v67, (__int64)&v59, a2, 0, &v57);
    CInputDest::operator=((__int64)v76, v22);
    CInputDest::SetEmpty((CInputDest *)v78);
    v66 = v76[1];
    v65 = 1;
    ShouldDeliverWheelEventToInputDest = CMouseProcessor::ShouldDeliverWheelEventToInputDest(
                                           v23,
                                           a2,
                                           (const struct CInputDest *)v76);
    if ( ShouldDeliverWheelEventToInputDest )
    {
      if ( !CInputDest::DoesBelongToForeground((__int64)v76, 0) )
        CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v76);
      v24 = *((_QWORD *)a2 + 1);
      if ( (*(_DWORD *)(v24 + 112) & 8) != 0
        && (*(_DWORD *)(v24 + 108) == 1
         || (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v24 + 132), v76)) )
      {
        CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3464, (int)v76, 0);
      }
      ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v76);
      v27 = ThreadInfo;
      if ( ThreadInfo )
      {
        if ( anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting((__int64)ThreadInfo) )
        {
          InputDestFromForegroundFocus = QHelper::GetInputDestFromForegroundFocus(v69);
          v29 = InputDestFromForegroundFocus[1];
          v68[0] = *InputDestFromForegroundFocus;
          v30 = InputDestFromForegroundFocus[2];
          v68[1] = v29;
          v31 = InputDestFromForegroundFocus[3];
          v68[2] = v30;
          v32 = InputDestFromForegroundFocus[4];
          v68[3] = v31;
          v33 = InputDestFromForegroundFocus[5];
          v68[4] = v32;
          v34 = InputDestFromForegroundFocus[6];
          v68[5] = v33;
          v68[6] = v34;
          CInputDest::CInputDest((CInputDest *)v78, (const struct tagINPUTDEST *)v68);
          v4 = 1;
          if ( !CInputDest::operator==(v76, (__int64)v78) )
            v20 = 1;
        }
      }
      if ( (v4 & 1) != 0 )
        CInputDest::SetEmpty((CInputDest *)v78);
      if ( v20 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v16 = 0;
        }
        if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v35 = 42;
          LOBYTE(v35) = v16;
          LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v35,
            v26,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            6,
            42,
            (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
        }
        goto LABEL_70;
      }
      MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread();
      if ( MouseWheelForegroundThread
        && *((_QWORD *)v27 + 53) != *(_QWORD *)(anonymous_namespace_::ResolveApplicationFrameChildThread(MouseWheelForegroundThread)
                                              + 424)
        && !(unsigned int)APISetEditionGetMouseWheelRoutingMode()
        && CMouseProcessor::HittestWheelRoutingRequested(v37) )
      {
        LOBYTE(v38) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v39) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v38,
            v39,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            6,
            43,
            (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
        }
        InputTraceLogging::Mouse::RerouteWheel(*(_QWORD *)(*((_QWORD *)a2 + 1) + 88LL));
        ShouldDeliverWheelEventToInputDest = 0;
      }
    }
  }
  WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v76);
  v41 = *((_DWORD *)a2 + 6);
  v42 = *(_WORD *)(*((_QWORD *)a2 + 1) + 30LL);
  v43 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
  InputTraceLogging::Mouse::ProcessWheel(
    *(_QWORD *)(*((_QWORD *)a2 + 1) + 88LL),
    (const struct tagPOINT *)(*((_QWORD *)a2 + 1) + 52LL),
    v43,
    v42,
    v41,
    WindowHandle,
    ShouldDeliverWheelEventToInputDest);
  v44 = 2 * (unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
  LODWORD(v59) = v44;
  if ( ShouldDeliverWheelEventToInputDest )
  {
    if ( !anonymous_namespace_::InMouseRawInputMode((__int64)v76, 1LL, 1) )
    {
      v45 = *((_QWORD *)a2 + 1);
      v61 = 0LL;
      v62 = 0;
      v59 = v63;
      v60 = v44;
      v46 = *(unsigned __int16 *)(v45 + 30);
      v47 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
      if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                           (__int64)this,
                           (__int64)v76,
                           a2,
                           (struct CMouseProcessor::InputDeliveryContext *)&v59,
                           &v58,
                           v57,
                           v47,
                           v46 << 16) == 1 )
        CMouseProcessor::DeliverMouseWheelToInputDest(
          this,
          a2,
          (const struct CInputDest *)v76,
          (const struct CMouseProcessor::InputDeliveryContext *)&v59);
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
    v48 = *((_QWORD *)a2 + 1);
    v58 = *(struct tagPOINT *)(v48 + 132);
    v49 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
    v50 = *(unsigned int *)(v48 + 40);
    v51 = v49;
    v52 = *(_QWORD *)(v48 + 88);
    v53 = *(_DWORD *)(v48 + 80);
    v54 = *(unsigned __int16 *)(v48 + 30);
    v56 = CMouseProcessor::CWheelEvent::GetWheelMessage(v55);
    ApiSetEditionPostMouseWheelToForeground(
      v56,
      v54 << 16,
      v63,
      v53,
      v52,
      v50,
      v59 | 0x20,
      v48 + 104,
      (unsigned __int64)&v58 & -(__int64)(v51 != 0));
  }
LABEL_71:
  CInputDest::SetEmpty((CInputDest *)v76);
  CMouseProcessor::EndStreamToken::~EndStreamToken(v64);
}
