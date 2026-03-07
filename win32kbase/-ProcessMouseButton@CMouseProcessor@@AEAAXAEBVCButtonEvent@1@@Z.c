void __fastcall CMouseProcessor::ProcessMouseButton(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2,
        __int64 a3)
{
  const struct CMouseProcessor::CButtonEvent *v3; // r14
  char v5; // r13
  char v6; // si
  void *v7; // r9
  __int64 v8; // rax
  int v9; // ebx
  int v10; // edi
  __int64 v11; // rdx
  int v12; // r8d
  unsigned int ButtonMessage; // r12d
  unsigned int v14; // edx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  char v18; // al
  struct tagPOINT v19; // rbx
  int v20; // edx
  int v21; // r8d
  HWND WindowHandle; // rax
  int MessageWParamInfo; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  int v28; // edi
  int v29; // ebx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // edx
  int v38; // r8d
  __int128 *RawMouseInputDestination; // rax
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  int v46; // ebx
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // r9
  int v51; // edx
  int v52; // r8d
  __int64 v53; // r9
  __int64 v54; // rdi
  int v55; // r8d
  int v56; // edx
  CInputDest *v57; // rax
  HWND v58; // rax
  int v59; // ebx
  struct tagTHREADINFO *v60; // rax
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // r9
  int v64; // r8d
  __int64 v65; // r9
  __int64 v66; // rax
  bool ShouldSkipForegroundActivation; // al
  CMouseProcessor *v68; // rcx
  __int64 v69; // r9
  int v70; // edx
  unsigned __int8 v71; // bl
  bool updated; // al
  PDEVICE_OBJECT v73; // rcx
  __int16 v74; // ax
  __int64 PtiFromInputDest; // rax
  int v76; // edx
  int v77; // r8d
  __int64 v78; // rax
  int v79; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT v80; // [rsp+48h] [rbp-B8h] BYREF
  struct tagPOINT v81; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v82; // [rsp+60h] [rbp-A0h] BYREF
  int v83; // [rsp+68h] [rbp-98h]
  CMouseProcessor *v84[2]; // [rsp+70h] [rbp-90h] BYREF
  char v85; // [rsp+80h] [rbp-80h]
  int v86; // [rsp+84h] [rbp-7Ch]
  __int64 v87; // [rsp+88h] [rbp-78h] BYREF
  __int64 v88; // [rsp+90h] [rbp-70h] BYREF
  int v89; // [rsp+98h] [rbp-68h]
  _QWORD v90[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v91[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v92; // [rsp+D0h] [rbp-30h]
  int v93; // [rsp+D4h] [rbp-2Ch]
  int v94; // [rsp+D8h] [rbp-28h]
  int v95; // [rsp+DCh] [rbp-24h]
  _OWORD v96[7]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v97[6]; // [rsp+170h] [rbp+70h] BYREF
  __int128 v98; // [rsp+1D0h] [rbp+D0h]
  __int64 v99; // [rsp+1F0h] [rbp+F0h]
  int v100; // [rsp+1F8h] [rbp+F8h]
  struct tagPOINT v101; // [rsp+200h] [rbp+100h] BYREF
  int v102; // [rsp+208h] [rbp+108h]
  int v103; // [rsp+20Ch] [rbp+10Ch]
  int v104; // [rsp+210h] [rbp+110h]
  int v105; // [rsp+214h] [rbp+114h]
  __int64 ExtraInfoForHook; // [rsp+218h] [rbp+118h]
  __int128 v107; // [rsp+220h] [rbp+120h] BYREF
  __int128 v108; // [rsp+230h] [rbp+130h]
  __int128 v109; // [rsp+240h] [rbp+140h]
  __int128 v110; // [rsp+250h] [rbp+150h]
  __int128 v111; // [rsp+260h] [rbp+160h]
  __int128 v112; // [rsp+270h] [rbp+170h]
  __int128 v113; // [rsp+280h] [rbp+180h]
  _DWORD v114[32]; // [rsp+290h] [rbp+190h] BYREF

  v3 = a2;
  v5 = 0;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  v7 = &WPP_2101e6ada08e3422177879c6f3be7480_Traceguids;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      6,
      23,
      (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
  v8 = *((_QWORD *)v3 + 1);
  v84[0] = this;
  v84[1] = v3;
  v85 = 0;
  v9 = *(_DWORD *)(v8 + 140);
  v10 = *(_DWORD *)(v8 + 108);
  v99 = *(_QWORD *)(v8 + 132);
  v86 = 0;
  v100 = v9;
  v79 = 0;
  ApiSetEditionCancelCoolSwitch(&v79, a2, a3, v7);
  if ( v79 )
  {
    if ( v10 != 1 )
    {
      v88 = v99;
      v89 = v9;
      if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer((__int64)&v88, v11, 0LL) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v6 = 0;
        }
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = v6;
          LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            v12,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            3,
            6,
            24,
            (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
        }
LABEL_70:
        InputTraceLogging::Mouse::DropButton();
        goto LABEL_173;
      }
    }
  }
  if ( !*((_QWORD *)v3 + 5) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = v6;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        6,
        25,
        (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
    }
    goto LABEL_70;
  }
  ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(v3);
  if ( !IsPTPIVEnabled() || !isChildPartition() || !IsTouchpadDevice(*(_QWORD *)(*((_QWORD *)v3 + 1) + 8LL)) )
    goto LABEL_33;
  v17 = *((_DWORD *)v3 + 8);
  if ( v17 != 1 )
  {
    if ( v17 == 2 && *((_BYTE *)this + 3560) )
    {
      *((_BYTE *)this + 3560) = 0;
      goto LABEL_40;
    }
LABEL_33:
    if ( (gpdwCPUserPreferencesMask & 0x80008000) == 0x80008000 )
    {
      if ( ButtonMessage == 513 )
      {
        if ( *((_BYTE *)this + 3564) )
        {
          v18 = 0;
        }
        else
        {
          v18 = 1;
          *((_DWORD *)this + 892) = *(_DWORD *)(*((_QWORD *)v3 + 1) + 80LL);
        }
        *((_BYTE *)this + 3564) = v18;
        if ( !v18 )
          goto LABEL_49;
      }
      else if ( ButtonMessage == 514 && *((_BYTE *)this + 3564) )
      {
        v14 = *(_DWORD *)(*((_QWORD *)v3 + 1) + 80LL) - *((_DWORD *)this + 892);
        if ( v14 > dword_1C02CA9C0 )
        {
LABEL_49:
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (LODWORD(v15) = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v6 = 0;
          }
          if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = v6;
            LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v14,
              v15,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              6,
              27,
              (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
          }
          goto LABEL_70;
        }
        *((_BYTE *)this + 3564) = 0;
      }
    }
    v19 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
    v80 = v19;
    v87 = *((_QWORD *)gpsi + 619);
    v81 = v19;
    CMouseProcessor::InformUMObservers(this, v3, &v81, &v81);
    if ( (*(_DWORD *)(*((_QWORD *)v3 + 1) + 112LL) & 0x80u) == 0 && CBaseProcessor::IsUMSuppressed(this) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (v21 = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = v6;
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v20,
          v21,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          6,
          28,
          (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
      }
      goto LABEL_70;
    }
    CMouseProcessor::MouseHitTest((__int64)this, (__int64)v97, &v80, (__int64)&v87, v3, 0, 0LL);
    v86 = DWORD1(v97[0]);
    v85 = 1;
    WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v97);
    InputTraceLogging::Mouse::ProcessButton(
      *(_QWORD *)(*((_QWORD *)v3 + 1) + 88LL),
      (const struct tagPOINT *)(*((_QWORD *)v3 + 1) + 52LL),
      ButtonMessage,
      WindowHandle);
    v101 = v19;
    MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v3);
    v24 = *((_QWORD *)v3 + 1);
    v102 = MessageWParamInfo;
    v103 = *(unsigned __int8 *)(v24 + 112) >> 7;
    v104 = *(_DWORD *)(v24 + 80);
    v105 = 0;
    ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(v3);
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v91, (struct CInputDest *)v97, v25, v26);
    v27 = *((_QWORD *)v3 + 1);
    v28 = *(_DWORD *)(v27 + 112);
    v29 = *(_DWORD *)(v27 + 140);
    v82 = *(_QWORD *)(v27 + 132);
    v30 = CMouseProcessor::CButtonEvent::GetButtonMessage(v3);
    v83 = v29;
    if ( (unsigned int)ApiSetEditionLLMouseButtonHook(
                         (unsigned int)v97,
                         (unsigned int)&v101,
                         v30,
                         (unsigned int)&v82,
                         (v28 & 1) == 0) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (LODWORD(v32) = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v31) = v6;
        LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v31,
          v32,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          6,
          29,
          (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
      }
      InputTraceLogging::Mouse::DropButton();
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v91, v34, v35, v36);
      goto LABEL_172;
    }
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v91, v31, v32, v33);
    CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3464, 0, 3);
    if ( anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 0) )
    {
      RawMouseInputDestination = anonymous_namespace_::GetRawMouseInputDestination(v96);
      v40 = RawMouseInputDestination[1];
      v107 = *RawMouseInputDestination;
      v41 = RawMouseInputDestination[2];
      v108 = v40;
      v42 = RawMouseInputDestination[3];
      v109 = v41;
      v43 = RawMouseInputDestination[4];
      v110 = v42;
      v44 = RawMouseInputDestination[5];
      v111 = v43;
      v45 = RawMouseInputDestination[6];
      v112 = v44;
      v113 = v45;
      CInputDest::CInputDest((CInputDest *)v114, (const struct tagINPUTDEST *)&v107);
      if ( v114[0] )
      {
        v46 = *((_DWORD *)v3 + 8);
        CMouseProcessor::CButtonEvent::GetVKey(v3);
        ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v114);
        LOBYTE(v48) = v46 == 2;
        UpdateAsyncKeyState(*((_QWORD *)ThreadInfo + 54), v49, v48, v50);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (v52 = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v6 = 0;
        }
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v51) = v6;
          LOBYTE(v52) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v51,
            v52,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            6,
            30,
            (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
        }
        InputTraceLogging::Mouse::DropButton();
        CInputDest::SetEmpty((CInputDest *)v114);
        goto LABEL_172;
      }
      CInputDest::SetEmpty((CInputDest *)v114);
    }
    if ( !LODWORD(v97[0]) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (v38 = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v6 = 0;
      }
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v37) = v6;
        LOBYTE(v38) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v37,
          v38,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          6,
          31,
          (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
      }
      goto LABEL_169;
    }
    if ( (unsigned int)IsPointerPromotedMouseMessage(ButtonMessage, *((_QWORD *)v3 + 1) + 104LL) )
    {
      v5 = 1;
      if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v53 + 132), v97) )
      {
LABEL_169:
        InputTraceLogging::Mouse::DropButton();
LABEL_172:
        CInputDest::SetEmpty((CInputDest *)v97);
        goto LABEL_173;
      }
    }
    v54 = LOWORD(v80.x) | (LOWORD(v80.y) << 16);
    ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick(v97, *((_DWORD *)v3 + 8) == 2);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 924, 1, 1) )
    {
      if ( v5
        && !(unsigned __int8)anonymous_namespace_::ValidateUIPI(
                               *(_QWORD *)(*((_QWORD *)v3 + 1) + 132LL),
                               (char *)this + 3576) )
      {
        goto LABEL_169;
      }
      v107 = v97[0];
      v109 = v97[2];
      v108 = v97[1];
      v111 = v97[4];
      v110 = v97[3];
      v113 = v98;
      v112 = v97[5];
      if ( *((_DWORD *)v3 + 8) == 1 )
      {
        if ( !*((_DWORD *)v3 + 7) )
        {
          v79 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7390);
        }
        *((_DWORD *)this + 893) |= *((_DWORD *)v3 + 7);
        CInputDest::operator=((__int64)v97, (__int64)this + 3576);
      }
      else
      {
        v57 = CMouseProcessor::HandleCapture_BreakHasMouseOwner(
                (__int64)this,
                (CInputDest *)v114,
                (CInputDest *)v97,
                (__int64)v3);
        CInputDest::operator=((__int64)v97, v57);
        CInputDest::SetEmpty((CInputDest *)v114);
      }
      v58 = CInputDest::GetWindowHandle((CInputDest *)v97);
      InputTraceLogging::Mouse::UpdateTargetForCapture(*(_QWORD *)(*((_QWORD *)v3 + 1) + 88LL), v58);
      if ( !LODWORD(v97[0]) )
      {
        v79 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3816);
      }
      ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
        (unsigned int)v97,
        (unsigned int)&v107,
        v81.x,
        v80.x,
        (__int64)&v80);
      v54 = LOWORD(v80.x) | (LOWORD(v80.y) << 16);
    }
    else if ( *((_DWORD *)v3 + 8) == 1 )
    {
      if ( !CMouseProcessor::HandleCapture_MakeNoMouseOwner(
              this,
              (const struct CInputDest *)v97,
              v3,
              v54,
              v81,
              ButtonMessage) )
      {
        v56 = 32;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v6 = 0;
        }
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v56) = v6;
          LOBYTE(v55) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v56,
            v55,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            3,
            6,
            32,
            (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
        }
        goto LABEL_169;
      }
    }
    else
    {
      if ( !*((_DWORD *)v3 + 7) )
      {
        v79 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7390);
      }
      *((_DWORD *)this + 893) &= ~*((_DWORD *)v3 + 7);
    }
    v59 = *((_DWORD *)v3 + 8);
    CMouseProcessor::CButtonEvent::GetVKey(v3);
    v60 = CInputDest::GetThreadInfo((CInputDest *)v97);
    LOBYTE(v61) = v59 == 2;
    UpdateAsyncKeyState(*((_QWORD *)v60 + 54), v62, v61, v63);
    if ( *((_DWORD *)v3 + 8) == 1 )
    {
      v95 = 0;
      v91[0] = v98;
      v66 = *((_QWORD *)v3 + 1);
      v93 = (__int16)v54;
      v92 = 4;
      v91[1] = *(_QWORD *)(v66 + 8);
      v94 = SWORD1(v54);
      SendMessageTo(5LL, (__int64)v91, 32LL, v65);
    }
    if ( (*(_DWORD *)(*((_QWORD *)v3 + 1) + 112LL) & 0x100) != 0 )
    {
      v70 = 0;
    }
    else
    {
      ShouldSkipForegroundActivation = CInputDest::ShouldSkipForegroundActivation((CInputDest *)v97);
      v70 = 0;
      if ( !ShouldSkipForegroundActivation )
      {
        v71 = 0;
        updated = CMouseProcessor::UpdateForegroundForInput(v68, (struct CInputDest *)v97, v3, v69);
        v70 = 0;
        if ( !updated )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (v64 = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
            || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
          {
            v6 = 0;
          }
          if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v70) = v6;
            LOBYTE(v64) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v70,
              v64,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              3,
              6,
              33,
              (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
          }
          goto LABEL_169;
        }
LABEL_141:
        if ( LODWORD(v97[0]) )
        {
          if ( !v5
            || (PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)v97, 2)) == 0
            || (*(_DWORD *)(PtiFromInputDest + 488) & 1) == 0 )
          {
            if ( !anonymous_namespace_::InMouseRawInputMode((__int64)v97, 1LL, 1) )
            {
              v90[0] = v71;
              v90[1] = v54;
              v90[2] = 0LL;
              v78 = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v3);
              if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                                   (__int64)this,
                                   (__int64)v97,
                                   v3,
                                   (struct CMouseProcessor::InputDeliveryContext *)v90,
                                   &v81,
                                   0,
                                   ButtonMessage,
                                   v78) == 1 )
                CMouseProcessor::DeliverMouseButtonToInputDest(
                  this,
                  v3,
                  (const struct CInputDest *)v97,
                  (const struct CMouseProcessor::InputDeliveryContext *)v90);
              goto LABEL_172;
            }
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (v77 = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
              || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
            {
              v6 = 0;
            }
            if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v76) = v6;
              LOBYTE(v77) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v76,
                v77,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                3,
                6,
                36,
                (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
            }
            goto LABEL_169;
          }
          v73 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (v64 = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
            || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
          {
            v6 = 0;
          }
          LOBYTE(v64) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_169;
          v74 = 35;
        }
        else
        {
          v73 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (v64 = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
            || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
          {
            v6 = 0;
          }
          LOBYTE(v64) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_169;
          v74 = 34;
        }
        LOBYTE(v70) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          v73->AttachedDevice,
          v70,
          v64,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          6,
          v74,
          (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
        goto LABEL_169;
      }
    }
    v71 = 1;
    goto LABEL_141;
  }
  if ( (unsigned int)CMouseProcessor::InertiaEndSuppression::HandleMake(
                       (_BYTE *)this + 3560,
                       *(_QWORD *)(*((_QWORD *)v3 + 1) + 96LL),
                       v15,
                       v16) )
    goto LABEL_33;
LABEL_40:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (LODWORD(v15) = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = v6;
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v15,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      6,
      26,
      (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
  }
LABEL_173:
  CMouseProcessor::EndStreamToken::~EndStreamToken(v84);
}
