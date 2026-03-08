/*
 * XREFs of ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C0207AAC
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01FCDE4 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C007E768 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00F2348 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C01EEF38 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C01F1224 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0203070 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C02083AC (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C0209074 (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1C020989C (WPP_RECORDER_AND_TRACE_SF_LL.c)
 */

__int64 __fastcall CTouchProcessor::UpdateActivePointer(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3,
        struct CInputDest *a4,
        unsigned int *a5,
        unsigned __int16 *a6,
        unsigned int *a7,
        unsigned int a8,
        unsigned __int16 a9)
{
  char *v9; // rsi
  const struct CPointerInputFrame *v10; // r13
  unsigned __int16 v11; // r15
  unsigned int v13; // r14d
  unsigned int v14; // r12d
  char v15; // bl
  int v16; // edx
  struct CInputPointerNode *NodeById; // rdi
  int v18; // r8d
  int v19; // r15d
  int v21; // r9d
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rcx
  unsigned __int64 v25; // r9
  int v26; // eax
  _QWORD *Target; // rax
  int v28; // r8d
  int v29; // edx
  unsigned __int16 v30; // cx
  int v31; // [rsp+28h] [rbp-150h]
  int v32; // [rsp+38h] [rbp-140h]
  struct CPointerInfoNode *v34; // [rsp+78h] [rbp-100h]
  _BYTE v35[128]; // [rsp+A0h] [rbp-D8h] BYREF

  v9 = (char *)a3 + 160;
  v10 = a2;
  v11 = *((_WORD *)a3 + 80);
  v13 = *((_DWORD *)a3 + 42);
  v14 = *((_DWORD *)a3 + 45);
  v34 = a3;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1609);
  v15 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      53,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  *a6 = 0;
  *a7 = 0;
  NodeById = CTouchProcessor::FindNodeById(this, v11, 1, 1);
  if ( NodeById )
  {
    v19 = 0;
  }
  else
  {
    NodeById = CTouchProcessor::CreateNode(this, v11, v13, v14, a9);
    v19 = 1;
  }
  if ( !NodeById )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v18,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        54,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v15 = 0;
    if ( (_BYTE)v16 || v15 )
    {
      LOBYTE(v18) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v18,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        7,
        55,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
LABEL_34:
    InputTraceLogging::Pointer::DropInput();
    return 0LL;
  }
  if ( !v19 && (*((_DWORD *)v9 + 5) & 1) == 0 )
  {
    v21 = *((_DWORD *)NodeById + 15);
    if ( v21 != v13 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_LL(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v18,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          v31,
          56,
          v32,
          v21,
          v13);
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v15 = 0;
      if ( (_BYTE)v16 || v15 )
      {
        LOBYTE(v18) = v15;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v18,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          7,
          57,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      }
      goto LABEL_34;
    }
    if ( !CTouchProcessor::SetNewValidState(this, (_QWORD *)v14, NodeById) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1647);
      LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v22,
          v23,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          7,
          58,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v22) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v15 = 0;
      if ( (_BYTE)v22 || v15 )
      {
        LOBYTE(v23) = v15;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v22,
          v23,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          7,
          59,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      }
      goto LABEL_34;
    }
  }
  v24 = *((_QWORD *)NodeById + 5);
  if ( !v24 )
    v24 = *((_QWORD *)NodeById + 6);
  if ( !v24 )
    *(_OWORD *)((char *)NodeById + 40) = *((_OWORD *)v9 + 10);
  v25 = *((_QWORD *)v9 + 11);
  *((_DWORD *)v9 + 45) = -__CFSHR__(*((_DWORD *)v10 + 57), 9);
  v26 = *((unsigned __int16 *)NodeById + 16);
  *((_DWORD *)v9 + 5) &= ~0x4000000u;
  *((_DWORD *)v9 + 3) = v26;
  CTouchProcessor::UpdateStateIndicator((CTouchProcessor *)this, NodeById, v14, v25, *(struct tagPOINT *)(v9 + 48));
  Target = (_QWORD *)CTouchProcessor::UpdateInputCaptureAndGetTarget(this, v35, v10, v9, NodeById, v14, a6, a7, a8);
  CInputDest::operator=((__int64)a4, Target);
  CInputDest::SetEmpty((CInputDest *)v35);
  *((_DWORD *)v34 + 119) = *((_DWORD *)NodeById + 58);
  *a6 |= v19;
  v29 = 2 * (*((_DWORD *)NodeById + 75) & 4);
  LOWORD(v29) = *a6 | (2 * (*((_WORD *)NodeById + 150) & 4));
  *a6 = v29;
  v30 = v29 | (2 * (*((_DWORD *)NodeById + 75) & 1));
  *a6 = v30;
  *a6 = v30 | (2 * (*((_DWORD *)NodeById + 75) & 2));
  *a5 = *((_DWORD *)NodeById + 16) & 0x1F0;
  *((_DWORD *)NodeById + 16) = v14;
  LOBYTE(v29) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v15 = 0;
  if ( (_BYTE)v29 || v15 )
  {
    LOBYTE(v28) = v15;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v29,
      v28,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      60,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
  return *((unsigned __int16 *)NodeById + 16);
}
