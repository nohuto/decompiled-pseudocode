/*
 * XREFs of ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C003EBC4
 * Callers:
 *     ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0041D10 (-ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C0043240 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C004438C (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0044A64 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C004503C (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C0047B74 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C004BBEC (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C004BD08 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0070A80 (PhysicalToLogicalDPIPoint.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0094BC8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     IsPointerPromotedMouseMessage @ 0x1C00952E0 (IsPointerPromotedMouseMessage.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C009B424 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C009D278 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C009F1C0 (-AnalyzeNewMousePosition@CMouseProcessor@@AEBA-AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C00A4678 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00ADC2C (_anonymous_namespace_--ValidateUIPI.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C00B0C9C (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ProcessMouseMove(CMouseProcessor *this, const struct CMouseProcessor::CMoveEvent *a2)
{
  const struct CMouseProcessor::CMoveEvent *v2; // rbx
  char v4; // r14
  int v5; // edx
  __int64 v6; // r8
  unsigned int DpiAwarenessContext; // eax
  unsigned int v8; // esi
  int v9; // esi
  __int64 v10; // r10
  int v11; // r11d
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rdx
  int v19; // edx
  __int64 PtiFromInputDest; // rax
  int v21; // edx
  int v22; // esi
  struct tagPOINT *v23; // r9
  int v24; // r9d
  struct tagPOINT v25; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT v26; // [rsp+48h] [rbp-B8h] BYREF
  LONG x; // [rsp+58h] [rbp-A8h] BYREF
  LONG y; // [rsp+5Ch] [rbp-A4h] BYREF
  struct tagPOINT v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  HWND WindowHandle; // [rsp+78h] [rbp-88h] BYREF
  struct tagPOINT v33; // [rsp+80h] [rbp-80h] BYREF
  struct tagPOINT v34; // [rsp+88h] [rbp-78h]
  unsigned int v35; // [rsp+90h] [rbp-70h]
  int v36; // [rsp+94h] [rbp-6Ch]
  _DWORD v37[32]; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+120h] [rbp+20h] BYREF
  struct tagPOINT *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  LONG *p_y; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  LONG *p_x; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h]
  HWND *p_WindowHandle; // [rsp+170h] [rbp+70h]
  __int64 v46; // [rsp+178h] [rbp+78h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 6, 44, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
  }
  v4 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x800) != 0 )
  {
    *((_QWORD *)this + 431) = 0LL;
LABEL_5:
    if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x800) == 0
      && (unsigned __int8)anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1LL) )
    {
      PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL);
      if ( PtiFromInputDest )
      {
        v22 = *(_DWORD *)(PtiFromInputDest + 340);
        v29 = 0LL;
        if ( v22 < 0 )
          v22 = *(_DWORD *)(*(_QWORD *)(PtiFromInputDest + 424) + 280LL);
        PhysicalToLogicalDPIPoint(&v29, (char *)gpsi + 4960, (unsigned int)v22, 0LL);
        v26 = v29;
        *(struct tagPOINT *)((char *)this + 68) = v29;
        *((_DWORD *)this + 19) = v22;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 3;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v21, 6, 46, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
      }
      v14 = *((_QWORD *)v2 + 1);
      v15 = 12LL;
      goto LABEL_25;
    }
    v25 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
    v31 = *((_QWORD *)gpsi + 619);
    CMouseProcessor::MouseHitTest(
      this,
      v37,
      &v25,
      &v31,
      v2,
      _InterlockedCompareExchange((volatile signed __int32 *)this + 922, 1, 1) != 0,
      0LL);
    if ( (unsigned int)dword_1C024BA90 > 4
      && (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 64LL, v6, *((_QWORD *)v2 + 1)) )
    {
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v37);
      x = v23[7].x;
      y = v23[6].y;
      v26 = v23[11];
      p_WindowHandle = &WindowHandle;
      p_x = &x;
      p_y = &y;
      v39 = &v26;
      v46 = 8LL;
      v44 = 4LL;
      v42 = 4LL;
      v40 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0220B81, 0, 0, 6u, &v38);
    }
    if ( !v37[0] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v5, 6, 47, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
      }
      v18 = 13LL;
      goto LABEL_34;
    }
    if ( v4 )
    {
      CInputDest::GetDpiAwarenessContext((CInputDest *)v37);
      CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(this, (unsigned int)&v30);
      if ( v30 == v25 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 4;
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v17, 6, 48, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        }
        v18 = 11LL;
        goto LABEL_34;
      }
    }
    v26 = v25;
    DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v37);
    *(struct tagPOINT *)((char *)this + 68) = v26;
    *((_DWORD *)this + 19) = DpiAwarenessContext;
    v8 = DpiAwarenessContext;
    if ( !(unsigned int)IsPointerPromotedMouseMessage(512LL, *((_QWORD *)v2 + 1) + 104LL)
      || (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v37) )
    {
      if ( !CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v2)
        || (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)v2 + 1) + 132LL), v37) )
      {
        v33 = v25;
        v36 = 0;
        v34 = v26;
        v35 = v8;
        if ( (unsigned int)CMouseProcessor::ForwardInputToISM(this, v37, v2, &v33, &v25, 0, 512, 0LL) == 1 )
          CMouseProcessor::DeliverMouseMoveToInputDest(this, v2, (const struct CInputDest *)v37, &v33, 0LL);
        goto LABEL_13;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v24 = 50;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_55:
        v18 = 10LL;
LABEL_34:
        InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), v18);
LABEL_13:
        CInputDest::SetEmpty((CInputDest *)v37);
        return;
      }
      v24 = 49;
    }
    LOBYTE(v19) = 3;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v19, 6, v24, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    goto LABEL_55;
  }
  v9 = CMouseProcessor::AnalyzeNewMousePosition(this, v2);
  if ( v9 == v11 )
  {
    v4 = v11;
    *((_QWORD *)gpsi + 619) = *(_QWORD *)(v10 + 60);
  }
  else if ( v9 - v11 == v11 )
  {
    *((_QWORD *)gpsi + 620) = *(_QWORD *)(v10 + 52);
    *((_QWORD *)gpsi + 619) = *(_QWORD *)(*((_QWORD *)v2 + 1) + 60LL);
  }
  CMouseProcessor::CMouseRawInput::PostRawMouse((char *)this + 3456, 0LL, 0LL);
  v13 = *((_QWORD *)v2 + 1);
  if ( (*(_DWORD *)(v13 + 112) & 0x4000) != 0 )
    CMouseProcessor::InformUMObservers(
      this,
      v2,
      (const struct tagPOINT *)(v13 + 52),
      (const struct tagPOINT *)(v13 + 68));
  if ( v9 )
  {
    *((_QWORD *)this + 431) = *(unsigned int *)(*((_QWORD *)v2 + 1) + 40LL);
    v16 = *((_QWORD *)v2 + 1);
    *((_QWORD *)this + 429) = *(_QWORD *)(v16 + 52);
    *((_QWORD *)this + 430) = *(_QWORD *)(v16 + 60);
    goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 3;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v12, 6, 45, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
  }
  v14 = *((_QWORD *)v2 + 1);
  if ( (*(_DWORD *)(v14 + 112) & 0x2000) == 0 )
  {
    v15 = 11LL;
LABEL_25:
    InputTraceLogging::Mouse::DropMove(*(_QWORD *)(v14 + 88), v15);
  }
}
