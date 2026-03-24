/*
 * XREFs of ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0049550
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C009BEC0 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     isChildPartition @ 0x1C0040F30 (isChildPartition.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C0041EA8 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0042A50 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C0043240 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00435A0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C004438C (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C004450C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C0047B74 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C0049ADC (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C0049B04 (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C004B9DC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C004BD08 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C004BDB0 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1C004BE94 (-ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ.c)
 *     UpdateAsyncKeyState @ 0x1C004C680 (UpdateAsyncKeyState.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004CFF4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C0072118 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0094BC8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     IsPointerPromotedMouseMessage @ 0x1C00952E0 (IsPointerPromotedMouseMessage.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C009B424 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C009C24C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C009E2B8 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C009E41C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C009EBB4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ApiSetEditionLLMouseButtonHook @ 0x1C00A01FC (ApiSetEditionLLMouseButtonHook.c)
 *     ApiSetEditionCancelCoolSwitch @ 0x1C00A1890 (ApiSetEditionCancelCoolSwitch.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C00A1AF4 (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C00A2DA8 (ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C00A4678 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C00A5498 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     IsPTPIVEnabled @ 0x1C00A9640 (IsPTPIVEnabled.c)
 *     ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ @ 0x1C00AAD80 (-GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00ADC2C (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IsTouchpadDevice @ 0x1C01AEB20 (IsTouchpadDevice.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C01BB0F0 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01BF5EC (-DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01C0434 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x1C01C05E4 (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 */

void __fastcall CMouseProcessor::ProcessMouseButton(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2)
{
  const struct CMouseProcessor::CButtonEvent *v2; // rdi
  __int64 v4; // rax
  int v5; // r14d
  int v6; // ebx
  __int64 v7; // rdx
  unsigned int ButtonMessage; // r12d
  unsigned int v9; // edx
  struct tagPOINT v10; // rbx
  __int64 v11; // r8
  int MessageWParamInfo; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  BOOL v16; // ebx
  unsigned int v17; // eax
  int v18; // edx
  int v19; // edx
  __int64 v20; // r9
  char v21; // r15
  __int64 v22; // r14
  int v23; // edx
  bool v24; // bl
  struct tagTHREADINFO *v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r9
  unsigned __int8 v32; // bl
  int v33; // edx
  unsigned __int64 v34; // rax
  _QWORD *HasMouseOwner; // rax
  __int64 v36; // rdx
  int v37; // eax
  int v38; // eax
  unsigned __int8 v39; // al
  int v40; // ecx
  char v41; // r8
  int v42; // edx
  __int64 v43; // r9
  __int64 v44; // r10
  _OWORD *RawMouseInputDestination; // rax
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  bool v52; // bl
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v54; // r8
  __int64 v55; // rdx
  int v56; // edx
  __int64 v57; // rdx
  int v58; // eax
  int v59; // eax
  int v60; // r9d
  __int64 PtiFromInputDest; // rax
  int v62; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT v63; // [rsp+48h] [rbp-B8h] BYREF
  struct tagPOINT v64; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v65; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v66; // [rsp+60h] [rbp-A0h] BYREF
  int v67; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v68; // [rsp+68h] [rbp-98h] BYREF
  HWND WindowHandle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v70; // [rsp+78h] [rbp-88h] BYREF
  struct tagPOINT v71; // [rsp+80h] [rbp-80h] BYREF
  int v72; // [rsp+88h] [rbp-78h]
  __int64 v73; // [rsp+90h] [rbp-70h] BYREF
  int v74; // [rsp+98h] [rbp-68h]
  _QWORD v75[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v76[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v77; // [rsp+C8h] [rbp-38h]
  __int64 v78; // [rsp+CCh] [rbp-34h]
  int v79; // [rsp+D4h] [rbp-2Ch]
  _OWORD v80[7]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v81[64]; // [rsp+150h] [rbp+50h] BYREF
  char v82[112]; // [rsp+190h] [rbp+90h] BYREF
  _OWORD v83[6]; // [rsp+200h] [rbp+100h] BYREF
  __int128 v84; // [rsp+260h] [rbp+160h]
  struct tagPOINT v85; // [rsp+280h] [rbp+180h] BYREF
  int v86; // [rsp+288h] [rbp+188h]
  int v87; // [rsp+28Ch] [rbp+18Ch]
  int v88; // [rsp+290h] [rbp+190h]
  int v89; // [rsp+294h] [rbp+194h]
  unsigned __int64 ExtraInfoForHook; // [rsp+298h] [rbp+198h]
  _OWORD v91[7]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _DWORD v92[32]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v93[128]; // [rsp+390h] [rbp+290h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+410h] [rbp+310h] BYREF
  __int64 *v95; // [rsp+430h] [rbp+330h]
  __int64 v96; // [rsp+438h] [rbp+338h]
  __int64 *v97; // [rsp+440h] [rbp+340h]
  __int64 v98; // [rsp+448h] [rbp+348h]
  int *v99; // [rsp+450h] [rbp+350h]
  __int64 v100; // [rsp+458h] [rbp+358h]
  unsigned int *v101; // [rsp+460h] [rbp+360h]
  __int64 v102; // [rsp+468h] [rbp+368h]
  HWND *p_WindowHandle; // [rsp+470h] [rbp+370h]
  __int64 v104; // [rsp+478h] [rbp+378h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 6, 22, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
  }
  v4 = *((_QWORD *)v2 + 1);
  v62 = 0;
  v5 = *(_DWORD *)(v4 + 140);
  v6 = *(_DWORD *)(v4 + 108);
  v64 = *(struct tagPOINT *)(v4 + 132);
  ApiSetEditionCancelCoolSwitch(&v62);
  if ( v62 )
  {
    if ( v6 != 1 )
    {
      v71 = v64;
      v72 = v5;
      if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer((__int64)&v71, v7, 0) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 3;
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 6, 23, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        }
        v36 = 14LL;
LABEL_42:
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), v36);
        return;
      }
    }
  }
  if ( !*((_QWORD *)v2 + 5) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 6, 24, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
    v36 = 15LL;
    goto LABEL_42;
  }
  ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(v2);
  if ( !(unsigned __int8)IsPTPIVEnabled()
    || !isChildPartition()
    || !(unsigned __int8)IsTouchpadDevice(*(_QWORD *)(*((_QWORD *)v2 + 1) + 8LL)) )
  {
    goto LABEL_7;
  }
  v37 = *((_DWORD *)v2 + 8);
  if ( v37 == 1 )
  {
    v38 = CMouseProcessor::InertiaEndSuppression::HandleMake(
            (char *)this + 3552,
            *(_QWORD *)(*((_QWORD *)v2 + 1) + 96LL));
  }
  else
  {
    if ( v37 != 2 )
      goto LABEL_7;
    if ( *((_BYTE *)this + 3552) )
    {
      *((_BYTE *)this + 3552) = 0;
      goto LABEL_54;
    }
    v38 = 1;
  }
  if ( v38 )
  {
LABEL_7:
    if ( (gpdwCPUserPreferencesMask & 0x80008000) != 0x80008000 )
    {
LABEL_8:
      v10 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
      v63 = v10;
      v68 = *((_QWORD *)gpsi + 619);
      v64 = v10;
      CMouseProcessor::InformUMObservers(this, v2, &v64, &v64);
      if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x80u) == 0 && CBaseProcessor::IsUMSuppressed(this) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v42) = 4;
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v42, 6, 27, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        }
        v36 = 4LL;
        goto LABEL_42;
      }
      CMouseProcessor::MouseHitTest((__int64)this, (__int64)v83, &v63, (__int64)&v68, v2, 0, 0LL);
      if ( (unsigned int)dword_1C024BA90 > 4
        && (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 64LL, v11, *((_QWORD *)v2 + 1)) )
      {
        WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v83);
        v67 = *(_DWORD *)(v43 + 56);
        LODWORD(v65) = *(_DWORD *)(v43 + 52);
        v70 = *(_QWORD *)(v43 + 88);
        p_WindowHandle = &WindowHandle;
        v101 = &v66;
        v99 = &v67;
        v97 = &v65;
        v95 = &v70;
        v66 = ButtonMessage;
        v104 = 8LL;
        v102 = v44;
        v100 = v44;
        v98 = v44;
        v96 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0220CAF, 0, 0, 7u, &v94);
      }
      v85 = v10;
      MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v2);
      v13 = *((_QWORD *)v2 + 1);
      v86 = MessageWParamInfo;
      v87 = *(unsigned __int8 *)(v13 + 112) >> 7;
      v88 = *(_DWORD *)(v13 + 80);
      v89 = 0;
      ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(v2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v81, (struct CInputDest *)v83);
      v14 = *((_QWORD *)v2 + 1);
      v15 = *(_DWORD *)(v14 + 140);
      v16 = (*(_DWORD *)(v14 + 112) & 1) == 0;
      v73 = *(_QWORD *)(v14 + 132);
      v74 = v15;
      v17 = CMouseProcessor::CButtonEvent::GetButtonMessage(v2);
      if ( (unsigned int)ApiSetEditionLLMouseButtonHook(
                           (unsigned int)v83,
                           (unsigned int)&v85,
                           v17,
                           (unsigned int)&v73,
                           v16) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = 4;
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v18, 6, 28, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        }
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), 0LL);
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v81);
        goto LABEL_28;
      }
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v81);
      CMouseProcessor::CMouseRawInput::PostRawMouse((char *)this + 3456, 0LL, 3LL);
      if ( anonymous_namespace_::InMouseRawInputMode(0LL, 1, 0) )
      {
        RawMouseInputDestination = (_OWORD *)anonymous_namespace_::GetRawMouseInputDestination(v82);
        v46 = RawMouseInputDestination[1];
        v80[0] = *RawMouseInputDestination;
        v47 = RawMouseInputDestination[2];
        v80[1] = v46;
        v48 = RawMouseInputDestination[3];
        v80[2] = v47;
        v49 = RawMouseInputDestination[4];
        v80[3] = v48;
        v50 = RawMouseInputDestination[5];
        v80[4] = v49;
        v51 = RawMouseInputDestination[6];
        v80[5] = v50;
        v80[6] = v51;
        CInputDest::CInputDest((CInputDest *)v92, (const struct tagINPUTDEST *)v80);
        if ( v92[0] )
        {
          v52 = *((_DWORD *)v2 + 8) == 2;
          CMouseProcessor::CButtonEvent::GetVKey(v2);
          ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v92);
          LOBYTE(v54) = v52;
          UpdateAsyncKeyState(*((_QWORD *)ThreadInfo + 54), v55, v54);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v56) = 4;
            WPP_RECORDER_SF_((_DWORD)gBaseLog, v56, 6, 29, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
          }
          InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), 19LL);
          CInputDest::SetEmpty((CInputDest *)v92);
          goto LABEL_28;
        }
        CInputDest::SetEmpty((CInputDest *)v92);
      }
      if ( !LODWORD(v83[0]) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 3;
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v19, 6, 30, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        }
        v57 = 13LL;
        goto LABEL_114;
      }
      if ( (unsigned int)IsPointerPromotedMouseMessage(ButtonMessage, *((_QWORD *)v2 + 1) + 104LL) )
      {
        v21 = 1;
        if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v20 + 132), v83) )
          goto LABEL_88;
      }
      else
      {
        v21 = 0;
      }
      v22 = LOWORD(v63.x) | (LOWORD(v63.y) << 16);
      ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick(v83, *((_DWORD *)v2 + 8) == 2);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 922, 1, 1) )
      {
        if ( v21
          && !(unsigned __int8)anonymous_namespace_::ValidateUIPI(
                                 *(_QWORD *)(*((_QWORD *)v2 + 1) + 132LL),
                                 (char *)this + 3568) )
        {
          goto LABEL_88;
        }
        v91[0] = v83[0];
        v91[2] = v83[2];
        v91[1] = v83[1];
        v91[4] = v83[4];
        v91[3] = v83[3];
        v91[6] = v84;
        v91[5] = v83[5];
        if ( *((_DWORD *)v2 + 8) == 1 )
        {
          v59 = *((_DWORD *)v2 + 7);
          if ( !v59 )
          {
            v62 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7103LL);
            v59 = *((_DWORD *)v2 + 7);
          }
          *((_DWORD *)this + 891) |= v59;
          CInputDest::operator=(v83, (char *)this + 3568);
        }
        else
        {
          HasMouseOwner = (_QWORD *)CMouseProcessor::HandleCapture_BreakHasMouseOwner(this, v93, v83, v2);
          CInputDest::operator=((__int64)v83, HasMouseOwner);
          CInputDest::SetEmpty((CInputDest *)v93);
        }
        if ( !LODWORD(v83[0]) )
        {
          v62 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3674LL);
        }
        ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
          (unsigned int)v83,
          (unsigned int)v91,
          v64.x,
          v63.x,
          (__int64)&v63);
        v22 = LOWORD(v63.x) | (LOWORD(v63.y) << 16);
      }
      else if ( *((_DWORD *)v2 + 8) == 1 )
      {
        if ( !CMouseProcessor::HandleCapture_MakeNoMouseOwner(
                this,
                (const struct CInputDest *)v83,
                v2,
                v22,
                v64,
                ButtonMessage) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = 3;
            WPP_RECORDER_SF_((_DWORD)gBaseLog, v23, 6, 31, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
          }
          v57 = 17LL;
          goto LABEL_114;
        }
      }
      else
      {
        v58 = *((_DWORD *)v2 + 7);
        if ( !v58 )
        {
          v62 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7103LL);
          v58 = *((_DWORD *)v2 + 7);
        }
        *((_DWORD *)this + 891) &= ~v58;
      }
      v24 = *((_DWORD *)v2 + 8) == 2;
      CMouseProcessor::CButtonEvent::GetVKey(v2);
      v25 = CInputDest::GetThreadInfo((CInputDest *)v83);
      LOBYTE(v26) = v24;
      UpdateAsyncKeyState(*((_QWORD *)v25 + 54), v27, v26);
      if ( *((_DWORD *)v2 + 8) == 1 )
      {
        v76[0] = v84;
        v29 = *((_QWORD *)v2 + 1);
        v79 = 0;
        v77 = 4;
        v30 = *(_QWORD *)(v29 + 8);
        LODWORD(v65) = (__int16)v22;
        HIDWORD(v65) = SWORD1(v22);
        v78 = v65;
        v76[1] = v30;
        InputExtensibilityCallout::CoreMsgSendMessage(v30, 6LL, v76);
      }
      if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x100) != 0
        || CInputDest::ShouldSkipForegroundActivation((CInputDest *)v83) )
      {
        v32 = 1;
        goto LABEL_23;
      }
      v32 = 0;
      if ( CMouseProcessor::UpdateForegroundForInput(this, (struct CInputDest *)v83, v2, v31) )
      {
LABEL_23:
        if ( !LODWORD(v83[0]) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_106:
            v57 = 18LL;
            goto LABEL_114;
          }
          v60 = 33;
LABEL_105:
          LOBYTE(v28) = 3;
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v28, 6, v60, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
          goto LABEL_106;
        }
        if ( v21 )
        {
          PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)v83, 2);
          if ( PtiFromInputDest )
          {
            if ( (*(_DWORD *)(PtiFromInputDest + 488) & 1) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_106;
              v60 = 34;
              goto LABEL_105;
            }
          }
        }
        if ( !anonymous_namespace_::InMouseRawInputMode((__int64)v83, 1, 1) )
        {
          v75[0] = v32;
          v75[1] = v22;
          v75[2] = 0LL;
          v34 = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v2);
          if ( (unsigned int)CMouseProcessor::ForwardInputToISM(this, v83, v2, v75, &v64, 0, ButtonMessage, v34) == 1 )
            CMouseProcessor::DeliverMouseButtonToInputDest(
              this,
              v2,
              (const struct CInputDest *)v83,
              (const struct CMouseProcessor::InputDeliveryContext *)v75);
          goto LABEL_28;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v33) = 3;
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v33, 6, 35, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        }
        v57 = 12LL;
LABEL_114:
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), v57);
LABEL_28:
        CInputDest::SetEmpty((CInputDest *)v83);
        return;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v28) = 3;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v28, 6, 32, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
      }
LABEL_88:
      v57 = 10LL;
      goto LABEL_114;
    }
    if ( ButtonMessage == 513 )
    {
      if ( *((_BYTE *)this + 3556) )
      {
        v39 = 0;
      }
      else
      {
        v39 = 1;
        *((_DWORD *)this + 890) = *(_DWORD *)(*((_QWORD *)v2 + 1) + 80LL);
      }
      *((_BYTE *)this + 3556) = v39;
      v40 = v39;
    }
    else
    {
      if ( ButtonMessage != 514 )
        goto LABEL_8;
      v41 = *((_BYTE *)this + 3556);
      if ( v41 )
      {
        v9 = *(_DWORD *)(*((_QWORD *)v2 + 1) + 80LL) - *((_DWORD *)this + 890);
        if ( v9 <= dword_1C024C220 )
        {
          *((_BYTE *)this + 3556) = 0;
          v41 = 0;
        }
        if ( v41 )
        {
LABEL_68:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = 4;
            WPP_RECORDER_SF_((_DWORD)gBaseLog, v9, 6, 26, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
          }
          v36 = 16LL;
          goto LABEL_42;
        }
      }
      v40 = 1;
    }
    if ( v40 )
      goto LABEL_8;
    goto LABEL_68;
  }
LABEL_54:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v9, 6, 25, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
  }
}
