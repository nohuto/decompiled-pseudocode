/*
 * XREFs of ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C022C04C
 * Callers:
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1C022ED3C (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C022F50C (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionPostInputMessage @ 0x1C00072A4 (ApiSetEditionPostInputMessage.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C00713AC (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C007795C (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C007CFCC (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C007D050 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00ABD88 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C01E3524 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C01E35FC (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C01E3804 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C022D0D4 (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C022D35C (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C022F058 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C023ED50 (ApiSetEditionHandleHungWindow.c)
 *     ApiSetEditionxxxReportMouseBreakToAccessibility @ 0x1C0243728 (ApiSetEditionxxxReportMouseBreakToAccessibility.c)
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
  int MessageWParamInfo; // r9d
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  char v32; // di
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // r8d
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // edx
  _BYTE v45[4]; // [rsp+60h] [rbp-69h] BYREF
  int v46; // [rsp+64h] [rbp-65h]
  __int64 v47; // [rsp+70h] [rbp-59h] BYREF
  int v48; // [rsp+78h] [rbp-51h]
  __int64 v49; // [rsp+80h] [rbp-49h] BYREF
  __int64 v50; // [rsp+88h] [rbp-41h]
  _QWORD v51[4]; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v52[112]; // [rsp+B0h] [rbp-19h] BYREF

  if ( !*(_DWORD *)a3 )
  {
    v46 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3917);
    return;
  }
  if ( !CMouseProcessor::BufferInputDestinedForContainer(this, a2, a3) )
  {
    ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v45, v9, v10, v11);
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
    v49 = *(_QWORD *)(v14 + 132);
    if ( (v16 & 4) == 0 )
      v19 = v18;
    v51[0] = v14;
    v20 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
    v51[2] = 0LL;
    v22 = (__int64 *)(v21 + 104);
    v51[1] = (unsigned __int64)&v49 & -(__int64)(v20 != 0);
    v23 = *(unsigned int *)(v21 + 40);
    v50 = *(_QWORD *)(v21 + 88);
    v46 = *(_DWORD *)(v21 + 80);
    v47 = *((_QWORD *)a4 + 1);
    MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
    if ( *((_DWORD *)a3 + 23) == 2 )
      v25 = *((_QWORD *)a3 + 10);
    else
      v25 = 0LL;
    ApiSetEditionPostInputMessage(
      (int)a3,
      v25,
      ButtonMessage,
      MessageWParamInfo,
      v47,
      v46,
      v50,
      v23,
      v19,
      v22,
      (__int64)v51);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v45, v26, v27, v28);
    v32 = 1;
    if ( *((_DWORD *)a2 + 8) == 2 )
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v52, a3, v30, v31);
      v33 = *((_QWORD *)a2 + 1);
      v34 = *((unsigned int *)a2 + 6);
      v35 = *(_DWORD *)(v33 + 112);
      v36 = *(_DWORD *)(v33 + 140);
      v47 = *(_QWORD *)(v33 + 132);
      v48 = v36;
      if ( !(unsigned int)ApiSetEditionxxxReportMouseBreakToAccessibility(v34, &v47, (v35 >> 7) & 1) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v32 = 0;
        }
        LOBYTE(v38) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v40 = 37;
          LOBYTE(v40) = v32;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v40,
            v38,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            3,
            6,
            37,
            (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
        }
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v52, v37, v38, v39);
        return;
      }
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v52, v37, v38, v39);
    }
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v45, v29, v30, v31);
    if ( *(_DWORD *)a3 && ButtonMessage == 513 )
      ApiSetEditionHandleHungWindow(a3);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v32 = 0;
    }
    LOBYTE(v42) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v44 = 38;
      LOBYTE(v44) = v32;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v44,
        v42,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        38,
        (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v45, v41, v42, v43);
  }
}
