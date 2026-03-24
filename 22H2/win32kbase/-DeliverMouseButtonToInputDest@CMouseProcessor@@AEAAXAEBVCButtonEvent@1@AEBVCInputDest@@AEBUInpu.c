/*
 * XREFs of ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C004C9DC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004ABB0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01C0D88 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0043DC4 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0043E10 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0044D10 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0046C9C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     ApiSetEditionPostInputMessage @ 0x1C004950C (ApiSetEditionPostInputMessage.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C004B13C (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C004B164 (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C004CBEC (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C004CC10 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C004CC3C (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ApiSetEditionReportMouseBreakToAccessibility @ 0x1C00A635C (ApiSetEditionReportMouseBreakToAccessibility.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C00A7DC8 (ApiSetEditionHandleHungWindow.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::DeliverMouseButtonToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2,
        const struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  __int64 v4; // r14
  int ButtonMessage; // r15d
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  bool v11; // al
  __int64 v12; // r8
  BOOL v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // r13d
  bool v18; // al
  __int64 v19; // r8
  int MessageWParamInfo; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // r9d
  int v24; // eax
  int v25; // edx
  int v26; // edx
  int v27; // [rsp+60h] [rbp-39h]
  __int64 v28; // [rsp+70h] [rbp-29h] BYREF
  int v29; // [rsp+78h] [rbp-21h]
  _BYTE v30[8]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v31; // [rsp+88h] [rbp-11h] BYREF
  __int64 *v32; // [rsp+90h] [rbp-9h]
  __int64 v33; // [rsp+98h] [rbp-1h]
  _QWORD v34[10]; // [rsp+A0h] [rbp+7h] BYREF

  LODWORD(v4) = 0;
  if ( *(_DWORD *)a3 )
  {
    if ( !CMouseProcessor::BufferInputDestinedForContainer(this, a2, a3) )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v30);
      ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
      CMouseProcessor::PostPendingMouseMoveToInputDest(this, a3);
      DelegateThreadInfo = CInputDest::GetDelegateThreadInfo(a3);
      if ( DelegateThreadInfo )
        CMouseProcessor::PostPendingMouseMove(this, *((struct tagQ **)DelegateThreadInfo + 54));
      v11 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
      v12 = *((_QWORD *)a2 + 1);
      v13 = v11;
      v14 = *((_DWORD *)a3 + 26);
      v15 = 2 * v13;
      v16 = v15 | 4;
      if ( !*(_BYTE *)a4 )
        v16 = v15;
      v17 = v16 | 0x40;
      v31 = *(_QWORD *)(v12 + 132);
      if ( (v14 & 4) == 0 )
        v17 = v16;
      v34[0] = v12;
      v18 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
      v34[2] = 0LL;
      v32 = (__int64 *)(v19 + 104);
      v34[1] = (unsigned __int64)&v31 & -(__int64)v18;
      v33 = *(unsigned int *)(v19 + 40);
      v28 = *(_QWORD *)(v19 + 88);
      v27 = *(_DWORD *)(v19 + 80);
      if ( *((_DWORD *)a3 + 23) == 2 )
        v4 = *((_QWORD *)a3 + 10);
      MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
      ApiSetEditionPostInputMessage(
        (int)a3,
        v4,
        ButtonMessage,
        MessageWParamInfo,
        *((_QWORD *)a4 + 1),
        v27,
        v28,
        v33,
        v17,
        v32,
        (__int64)v34);
      if ( *((_DWORD *)a2 + 8) == 2
        && (v21 = *((_QWORD *)a2 + 1),
            v22 = *((unsigned int *)a2 + 6),
            v23 = *(_DWORD *)(v21 + 112),
            v24 = *(_DWORD *)(v21 + 140),
            v28 = *(_QWORD *)(v21 + 132),
            v29 = v24,
            !(unsigned int)ApiSetEditionReportMouseBreakToAccessibility(a3, v22, &v28, (v23 >> 7) & 1)) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v25) = 3;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v25,
            6,
            36,
            (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v30);
      }
      else
      {
        if ( ButtonMessage == 513 )
        {
          if ( !*(_DWORD *)a3 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3850LL);
          ApiSetEditionHandleHungWindow(a3);
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v30);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v26) = 4;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v26,
            6,
            37,
            (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        }
      }
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3775LL);
  }
}
