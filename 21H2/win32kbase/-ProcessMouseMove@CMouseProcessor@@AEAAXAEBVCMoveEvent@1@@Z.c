/*
 * XREFs of ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00364E4
 * Callers:
 *     ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0035A40 (-ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0007E58 (_anonymous_namespace_--ValidateUIPI.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     IsPointerPromotedMouseMessage @ 0x1C0033AF0 (IsPointerPromotedMouseMessage.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C0033B24 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0033DD0 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0034524 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1C00387C4 (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C003880C (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C003BCDC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C00419A8 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0041A94 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C0041E98 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C0042514 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C006DA50 (PhysicalToLogicalDPIPoint.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C00B1C0C (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C00B22A4 (-AnalyzeNewMousePosition@CMouseProcessor@@AEBA-AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C00C21F4 (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ProcessMouseMove(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMoveEvent *a2,
        __int64 a3)
{
  const struct CMouseProcessor::CMoveEvent *v3; // rdi
  char v5; // bl
  void *v6; // r9
  __int64 v7; // r10
  char v8; // r15
  __int64 v9; // r8
  int DpiAwarenessContext; // eax
  int v11; // r14d
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r10
  int v15; // r14d
  __int64 v16; // r8
  void *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *v21; // rdx
  __int64 v22; // rdx
  __int64 PtiFromInputDest; // rax
  int v24; // r14d
  void *v25; // rdx
  struct tagPOINT *v26; // r9
  void *v27; // rdx
  PDEVICE_OBJECT v28; // rcx
  __int16 v29; // ax
  void *v30; // rdx
  struct tagPOINT v31; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT v32; // [rsp+48h] [rbp-B8h] BYREF
  struct tagPOINT v33; // [rsp+50h] [rbp-B0h] BYREF
  LONG x; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  HWND WindowHandle; // [rsp+78h] [rbp-88h] BYREF
  struct tagPOINT v38; // [rsp+80h] [rbp-80h] BYREF
  struct tagPOINT v39; // [rsp+88h] [rbp-78h]
  int v40; // [rsp+90h] [rbp-70h]
  int v41; // [rsp+94h] [rbp-6Ch]
  _QWORD v42[2]; // [rsp+98h] [rbp-68h] BYREF
  char v43; // [rsp+A8h] [rbp-58h]
  _DWORD v44[32]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+130h] [rbp+30h] BYREF
  struct tagPOINT *v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  struct tagPOINT *v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  LONG *p_x; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  HWND *p_WindowHandle; // [rsp+180h] [rbp+80h]
  __int64 v53; // [rsp+188h] [rbp+88h]

  v3 = a2;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  v6 = &WPP_47101fbb63c9386296243f9d06c06c50_Traceguids;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      6,
      45,
      (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
  v7 = *((_QWORD *)v3 + 1);
  v8 = 0;
  v42[0] = this;
  v42[1] = v3;
  v43 = 0;
  if ( (*(_DWORD *)(v7 + 112) & 0x800) != 0 )
  {
    *((_QWORD *)this + 432) = 0LL;
LABEL_9:
    if ( (*(_DWORD *)(*((_QWORD *)v3 + 1) + 112LL) & 0x800) == 0
      && (unsigned __int8)anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1LL, v6) )
    {
      PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL);
      if ( PtiFromInputDest )
      {
        v24 = *(_DWORD *)(PtiFromInputDest + 340);
        v32 = 0LL;
        if ( v24 < 0 )
          v24 = *(_DWORD *)(*(_QWORD *)(PtiFromInputDest + 424) + 280LL);
        PhysicalToLogicalDPIPoint(&v32, (char *)gpsi + 4960, (unsigned int)v24, 0LL);
        v33 = v32;
        *(struct tagPOINT *)((char *)this + 60) = v32;
        *((_DWORD *)this + 17) = v24;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v5 = 0;
      }
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = &WPP_47101fbb63c9386296243f9d06c06c50_Traceguids;
        LOBYTE(v25) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v25,
          v16,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          6,
          47,
          (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
      }
      v18 = *((_QWORD *)v3 + 1);
      v19 = 12LL;
      goto LABEL_33;
    }
    v31 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
    v36 = *((_QWORD *)gpsi + 619);
    CMouseProcessor::MouseHitTest(
      this,
      v44,
      &v31,
      &v36,
      v3,
      _InterlockedCompareExchange((volatile signed __int32 *)this + 924, 1, 1) != 0,
      0LL);
    v43 = 1;
    if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 64LL) )
    {
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v44);
      x = v26[7].x;
      v32.x = v26[6].y;
      v33 = v26[11];
      p_WindowHandle = &WindowHandle;
      p_x = &x;
      v48 = &v32;
      v46 = &v33;
      v53 = 8LL;
      v51 = 4LL;
      v49 = 4LL;
      v47 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C0263C31, 0, 0, 6u, &v45);
    }
    if ( !v44[0] )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v5 = 0;
      }
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = &WPP_47101fbb63c9386296243f9d06c06c50_Traceguids;
        LOBYTE(v27) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v27,
          v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          6,
          48,
          (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
      }
      v22 = 13LL;
      goto LABEL_46;
    }
    if ( v8 )
    {
      CInputDest::GetDpiAwarenessContext((CInputDest *)v44);
      CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(this, (unsigned int)&v35);
      if ( v35 == v31 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v5 = 0;
        }
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = &WPP_47101fbb63c9386296243f9d06c06c50_Traceguids;
          LOBYTE(v21) = v5;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v21,
            v9,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            6,
            49,
            (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
        }
        v22 = 11LL;
        goto LABEL_46;
      }
    }
    v33 = v31;
    DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v44);
    *(struct tagPOINT *)((char *)this + 60) = v33;
    *((_DWORD *)this + 17) = DpiAwarenessContext;
    v11 = DpiAwarenessContext;
    if ( !(unsigned int)IsPointerPromotedMouseMessage(512, (_DWORD *)(*((_QWORD *)v3 + 1) + 104LL))
      || anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v44, v12) )
    {
      if ( !CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v3)
        || anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)v3 + 1) + 132LL), v44, v13) )
      {
        v38 = v31;
        v41 = 0;
        v39 = v33;
        v40 = v11;
        if ( (unsigned int)CMouseProcessor::ForwardInputToISM(this, v44, v3, &v38, &v31, 0, 512, 0LL) == 1 )
          CMouseProcessor::DeliverMouseMoveToInputDest(this, v3, (const struct CInputDest *)v44, &v38, 0LL);
        goto LABEL_17;
      }
      v28 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v5 = 0;
      }
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_93;
      v29 = 51;
    }
    else
    {
      v28 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v5 = 0;
      }
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_93;
      v29 = 50;
    }
    v30 = &WPP_47101fbb63c9386296243f9d06c06c50_Traceguids;
    LOBYTE(v30) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      v28->AttachedDevice,
      (_DWORD)v30,
      v9,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      6,
      v29,
      (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
LABEL_93:
    v22 = 10LL;
LABEL_46:
    InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)v3 + 1) + 88LL), v22, v9);
LABEL_17:
    CInputDest::SetEmpty((CInputDest *)v44);
    goto LABEL_18;
  }
  v15 = CMouseProcessor::AnalyzeNewMousePosition(this, v3, a3, v6);
  if ( v15 == 1 )
  {
    v8 = 1;
    *((_QWORD *)gpsi + 619) = *(_QWORD *)(v14 + 60);
  }
  else if ( v15 == 2 )
  {
    *((_QWORD *)gpsi + 620) = *(_QWORD *)(v14 + 52);
    *((_QWORD *)gpsi + 619) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 60LL);
  }
  CMouseProcessor::CMouseRawInput::PostRawMouse((char *)this + 3464, 0LL, 0LL);
  v16 = *((_QWORD *)v3 + 1);
  if ( (*(_DWORD *)(v16 + 112) & 0x4000) != 0 )
    CMouseProcessor::InformUMObservers(
      this,
      v3,
      (const struct tagPOINT *)(v16 + 52),
      (const struct tagPOINT *)(v16 + 68));
  if ( v15 )
  {
    *((_QWORD *)this + 432) = *(unsigned int *)(*((_QWORD *)v3 + 1) + 40LL);
    v20 = *((_QWORD *)v3 + 1);
    *((_QWORD *)this + 430) = *(_QWORD *)(v20 + 52);
    *((_QWORD *)this + 431) = *(_QWORD *)(v20 + 60);
    goto LABEL_9;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v5 = 0;
  }
  LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = &WPP_47101fbb63c9386296243f9d06c06c50_Traceguids;
    LOBYTE(v17) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v17,
      v16,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      6,
      46,
      (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
  }
  v18 = *((_QWORD *)v3 + 1);
  if ( (*(_DWORD *)(v18 + 112) & 0x2000) == 0 )
  {
    v19 = 11LL;
LABEL_33:
    InputTraceLogging::Mouse::DropMove(*(_QWORD *)(v18 + 88), v19, v16);
  }
LABEL_18:
  CMouseProcessor::EndStreamToken::~EndStreamToken((CMouseProcessor::EndStreamToken *)v42);
}
