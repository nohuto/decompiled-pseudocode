/*
 * XREFs of ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C007C068
 * Callers:
 *     ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C007C2E0 (-ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C00074E4 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0007574 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C000AD50 (PhysicalToLogicalDPIPoint.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C000BCC8 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C007C470 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C007CE44 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C007CE78 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C007CF1C (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1C007D028 (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C007D050 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C007D110 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C00F486A (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C022B0E4 (-AnalyzeNewMousePosition@CMouseProcessor@@AEBA-AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C022E28C (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C022F130 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0231A3C (_anonymous_namespace_--ValidateUIPI.c)
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
  bool v9; // zf
  __int64 v10; // r8
  unsigned int v11; // r14d
  __int64 v12; // r10
  int v13; // r14d
  __int64 v14; // r8
  void *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 PtiFromInputDest; // rax
  signed int v20; // r14d
  void *v21; // rdx
  struct tagPOINT *v22; // r9
  void *v23; // rdx
  __int64 v24; // rdx
  unsigned int DpiAwarenessContext; // eax
  void *v26; // rdx
  PDEVICE_OBJECT v27; // rcx
  __int16 v28; // ax
  void *v29; // rdx
  struct tagPOINT v30; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT v31; // [rsp+48h] [rbp-B8h] BYREF
  struct tagPOINT v32; // [rsp+50h] [rbp-B0h] BYREF
  LONG x; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v35[2]; // [rsp+70h] [rbp-90h] BYREF
  char v36; // [rsp+80h] [rbp-80h]
  int v37; // [rsp+84h] [rbp-7Ch]
  __int64 v38; // [rsp+88h] [rbp-78h] BYREF
  HWND WindowHandle; // [rsp+90h] [rbp-70h] BYREF
  struct tagPOINT v40; // [rsp+98h] [rbp-68h] BYREF
  struct tagPOINT v41; // [rsp+A0h] [rbp-60h]
  unsigned int v42; // [rsp+A8h] [rbp-58h]
  int v43; // [rsp+ACh] [rbp-54h]
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
  v6 = &WPP_2101e6ada08e3422177879c6f3be7480_Traceguids;
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
      (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
  v7 = *((_QWORD *)v3 + 1);
  v8 = 0;
  v35[0] = this;
  v35[1] = v3;
  v36 = 0;
  v9 = (*(_DWORD *)(v7 + 112) & 0x800) == 0;
  v37 = 0;
  if ( !v9 )
  {
    *((_QWORD *)this + 432) = 0LL;
LABEL_9:
    if ( (*(_DWORD *)(*((_QWORD *)v3 + 1) + 112LL) & 0x800) == 0
      && anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1) )
    {
      PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1);
      if ( PtiFromInputDest )
      {
        v20 = *(_DWORD *)(PtiFromInputDest + 340);
        v31 = 0LL;
        if ( v20 < 0 )
          v20 = *(_DWORD *)(*(_QWORD *)(PtiFromInputDest + 424) + 280LL);
        PhysicalToLogicalDPIPoint(&v31, (_QWORD *)gpsi + 620, v20, 0LL);
        v32 = v31;
        *(struct tagPOINT *)((char *)this + 60) = v31;
        *((_DWORD *)this + 17) = v20;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v5 = 0;
      }
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = &WPP_2101e6ada08e3422177879c6f3be7480_Traceguids;
        LOBYTE(v21) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v21,
          v14,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          6,
          47,
          (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
      }
      v16 = *((_QWORD *)v3 + 1);
      v17 = 12LL;
      goto LABEL_52;
    }
    v30 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
    v38 = *((_QWORD *)gpsi + 619);
    CMouseProcessor::MouseHitTest(
      this,
      v44,
      &v30,
      &v38,
      v3,
      _InterlockedCompareExchange((volatile signed __int32 *)this + 924, 1, 1) != 0,
      0LL);
    v37 = v44[1];
    v36 = 1;
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
    {
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v44);
      x = v22[7].x;
      v31.x = v22[6].y;
      v32 = v22[11];
      p_WindowHandle = &WindowHandle;
      p_x = &x;
      v48 = &v31;
      v46 = &v32;
      v53 = 8LL;
      v51 = 4LL;
      v49 = 4LL;
      v47 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02CA7E0, (int)&dword_1C029D9CA, 0, 0, 6u, &v45);
    }
    if ( !v44[0] )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v5 = 0;
      }
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = &WPP_2101e6ada08e3422177879c6f3be7480_Traceguids;
        LOBYTE(v23) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v23,
          v10,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          6,
          48,
          (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
      }
      v24 = 13LL;
      goto LABEL_90;
    }
    if ( v8 )
    {
      DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v44);
      CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(this, (__int64)&v34, DpiAwarenessContext);
      if ( v34 == v30 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v5 = 0;
        }
        LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v26 = &WPP_2101e6ada08e3422177879c6f3be7480_Traceguids;
          LOBYTE(v26) = v5;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v26,
            v10,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            6,
            49,
            (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
        }
        v24 = 11LL;
        goto LABEL_90;
      }
    }
    v32 = v30;
    v11 = CInputDest::GetDpiAwarenessContext((CInputDest *)v44);
    *(struct tagPOINT *)((char *)this + 60) = v32;
    *((_DWORD *)this + 17) = v11;
    if ( *((_QWORD *)v3 + 1) == -104LL
      || ((*(_DWORD *)(*((_QWORD *)v3 + 1) + 104LL) - 4) & 0xFFFFFFFB) != 0
      || (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 864LL), v44) )
    {
      if ( !CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v3)
        || (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)v3 + 1) + 132LL), v44) )
      {
        v40 = v30;
        v43 = 0;
        v41 = v32;
        v42 = v11;
        if ( (unsigned int)CMouseProcessor::ForwardInputToISM(this, v44, v3, &v40, &v30, 0, 512, 0LL) == 1 )
          CMouseProcessor::DeliverMouseMoveToInputDest(this, v3, (const struct CInputDest *)v44, &v40, 0LL);
        goto LABEL_18;
      }
      v27 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v5 = 0;
      }
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v28 = 51;
    }
    else
    {
      v27 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v5 = 0;
      }
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v28 = 50;
    }
    v29 = &WPP_2101e6ada08e3422177879c6f3be7480_Traceguids;
    LOBYTE(v29) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      v27->AttachedDevice,
      (_DWORD)v29,
      v10,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      6,
      v28,
      (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
LABEL_89:
    v24 = 10LL;
LABEL_90:
    InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)v3 + 1) + 88LL), v24, v10);
LABEL_18:
    CInputDest::SetEmpty((CInputDest *)v44);
    goto LABEL_19;
  }
  v13 = CMouseProcessor::AnalyzeNewMousePosition(this, v3, a3, v6);
  if ( v13 == 1 )
  {
    v8 = 1;
    *((_QWORD *)gpsi + 619) = *(_QWORD *)(v12 + 60);
  }
  else if ( v13 == 2 )
  {
    *((_QWORD *)gpsi + 620) = *(_QWORD *)(v12 + 52);
    *((_QWORD *)gpsi + 619) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 60LL);
  }
  CMouseProcessor::CMouseRawInput::PostRawMouse((char *)this + 3464, 0LL, 0LL);
  v14 = *((_QWORD *)v3 + 1);
  if ( (*(_DWORD *)(v14 + 112) & 0x4000) != 0 )
    CMouseProcessor::InformUMObservers(
      this,
      v3,
      (const struct tagPOINT *)(v14 + 52),
      (const struct tagPOINT *)(v14 + 68));
  if ( v13 )
  {
    *((_QWORD *)this + 432) = *(unsigned int *)(*((_QWORD *)v3 + 1) + 40LL);
    v18 = *((_QWORD *)v3 + 1);
    *((_QWORD *)this + 430) = *(_QWORD *)(v18 + 52);
    *((_QWORD *)this + 431) = *(_QWORD *)(v18 + 60);
    goto LABEL_9;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v5 = 0;
  }
  LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = &WPP_2101e6ada08e3422177879c6f3be7480_Traceguids;
    LOBYTE(v15) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v15,
      v14,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      6,
      46,
      (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
  }
  v16 = *((_QWORD *)v3 + 1);
  if ( (*(_DWORD *)(v16 + 112) & 0x2000) == 0 )
  {
    v17 = 11LL;
LABEL_52:
    InputTraceLogging::Mouse::DropMove(*(_QWORD *)(v16 + 88), v17, v14);
  }
LABEL_19:
  CMouseProcessor::EndStreamToken::~EndStreamToken((CMouseProcessor::EndStreamToken *)v35);
}
