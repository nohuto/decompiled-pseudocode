/*
 * XREFs of ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01F632C
 * Callers:
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1C01F8CB4 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9484 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C0056A24 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0057574 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C009B90C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ApiSetEditionPostInputMessage @ 0x1C00C9B0C (ApiSetEditionPostInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C01B52E4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C01B53BC (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C01B55DC (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C01F7048 (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C01F72C8 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C01F8FD0 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C020661C (ApiSetEditionHandleHungWindow.c)
 *     ApiSetEditionxxxReportMouseBreakToAccessibility @ 0x1C0207B1C (ApiSetEditionxxxReportMouseBreakToAccessibility.c)
 */

void __fastcall CMouseProcessor::DeliverMouseButtonToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2,
        const struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  unsigned int ButtonMessage; // r15d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  unsigned __int8 v13; // al
  __int64 v14; // r8
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // edi
  char v20; // al
  __int64 v21; // r8
  __int64 *v22; // r12
  __int64 v23; // r13
  __int64 MessageWParamInfo; // r9
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // di
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // r8d
  int v33; // eax
  int v34; // r8d
  int v35; // edx
  int v36; // r8d
  int v37; // edx
  _BYTE v38[4]; // [rsp+60h] [rbp-69h] BYREF
  int v39; // [rsp+64h] [rbp-65h]
  __int64 v40; // [rsp+70h] [rbp-59h] BYREF
  int v41; // [rsp+78h] [rbp-51h]
  __int64 v42; // [rsp+80h] [rbp-49h] BYREF
  __int64 v43; // [rsp+88h] [rbp-41h]
  _QWORD v44[4]; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v45[112]; // [rsp+B0h] [rbp-19h] BYREF

  if ( !*(_DWORD *)a3 )
  {
    v39 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3924);
    return;
  }
  if ( !CMouseProcessor::BufferInputDestinedForContainer(this, a2, a3) )
  {
    ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v38, v9, v10, v11);
    CMouseProcessor::PostPendingMouseMoveToInputDest(this, a3);
    DelegateThreadInfo = CInputDest::GetDelegateThreadInfo(a3);
    if ( DelegateThreadInfo )
      CMouseProcessor::PostPendingMouseMove(this, *((struct tagQ **)DelegateThreadInfo + 54));
    v13 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
    v14 = *((_QWORD *)a2 + 1);
    v15 = v13;
    v16 = *((_DWORD *)a3 + 26);
    v17 = 2 * v15;
    v18 = v17 | 4;
    if ( !*(_BYTE *)a4 )
      v18 = v17;
    v19 = v18 | 0x40;
    v42 = *(_QWORD *)(v14 + 132);
    if ( (v16 & 4) == 0 )
      v19 = v18;
    v44[0] = v14;
    v20 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
    v44[2] = 0LL;
    v22 = (__int64 *)(v21 + 104);
    v44[1] = (unsigned __int64)&v42 & -(__int64)(v20 != 0);
    v23 = *(unsigned int *)(v21 + 40);
    v43 = *(_QWORD *)(v21 + 88);
    v39 = *(_DWORD *)(v21 + 80);
    v40 = *((_QWORD *)a4 + 1);
    MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
    if ( *((_DWORD *)a3 + 23) == 2 )
      v25 = *((_QWORD *)a3 + 10);
    else
      v25 = 0LL;
    ApiSetEditionPostInputMessage(
      (__int64)a3,
      v25,
      ButtonMessage,
      MessageWParamInfo,
      v40,
      v39,
      v43,
      v23,
      v19,
      v22,
      (__int64)v44);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v38);
    v29 = 1;
    if ( *((_DWORD *)a2 + 8) == 2 )
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v45, a3);
      v30 = *((_QWORD *)a2 + 1);
      v31 = *((unsigned int *)a2 + 6);
      v32 = *(_DWORD *)(v30 + 112);
      v33 = *(_DWORD *)(v30 + 140);
      v40 = *(_QWORD *)(v30 + 132);
      v41 = v33;
      if ( !(unsigned int)ApiSetEditionxxxReportMouseBreakToAccessibility(v31, &v40, (v32 >> 7) & 1) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v29 = 0;
        }
        if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v35 = 37;
          LOBYTE(v35) = v29;
          LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v35,
            v34,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            3,
            6,
            37,
            (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
        }
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v45);
        return;
      }
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v45);
    }
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v38, v26, v27, v28);
    if ( *(_DWORD *)a3 && ButtonMessage == 513 )
      ApiSetEditionHandleHungWindow(a3);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v29 = 0;
    }
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v37 = 38;
      LOBYTE(v37) = v29;
      LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v37,
        v36,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        38,
        (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v38);
  }
}
