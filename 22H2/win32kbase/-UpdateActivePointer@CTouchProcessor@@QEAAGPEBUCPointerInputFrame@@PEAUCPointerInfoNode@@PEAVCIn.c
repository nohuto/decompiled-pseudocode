/*
 * XREFs of ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C01D8D0C
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01CE024 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0058B74 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E3E58 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C01C007C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C01C2374 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C01D42A8 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D95F4 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C01DA2C4 (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1C01DAAEC (WPP_RECORDER_AND_TRACE_SF_LL.c)
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
  __int16 v11; // r15
  int v12; // r14d
  unsigned int v13; // r12d
  int v14; // r13d
  char v15; // bl
  int v16; // edx
  struct CInputPointerNode *NodeById; // rdi
  int v18; // r8d
  int v20; // r9d
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rcx
  unsigned __int64 v24; // r9
  int v25; // eax
  _QWORD *Target; // rax
  int v27; // r8d
  unsigned __int16 v28; // cx
  int v29; // edx
  int v30; // [rsp+28h] [rbp-150h]
  int v31; // [rsp+38h] [rbp-140h]
  const struct CPointerInputFrame *v32; // [rsp+58h] [rbp-120h]
  struct CPointerInfoNode *v34; // [rsp+80h] [rbp-F8h]
  _BYTE v35[128]; // [rsp+A0h] [rbp-D8h] BYREF

  v9 = (char *)a3 + 160;
  v11 = *((_WORD *)a3 + 80);
  v12 = *((_DWORD *)a3 + 42);
  v13 = *((_DWORD *)a3 + 45);
  v14 = 0;
  v34 = a3;
  v32 = a2;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1515);
  v15 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
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
      4,
      49,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  *a6 = 0;
  *a7 = 0;
  NodeById = CTouchProcessor::FindNodeById(this, v11, 1, 1);
  if ( !NodeById )
  {
    NodeById = CTouchProcessor::CreateNode(this, v11, v12, v13, a9);
    v14 = 1;
  }
  if ( !NodeById )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
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
        4,
        50,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
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
        4,
        51,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    }
LABEL_33:
    InputTraceLogging::Pointer::DropInput();
    return 0LL;
  }
  if ( !v14 && (*((_DWORD *)v9 + 5) & 1) == 0 )
  {
    v20 = *((_DWORD *)NodeById + 15);
    if ( v20 != v12 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
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
          v30,
          52,
          v31,
          v20,
          v12);
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
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
          4,
          53,
          (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
      }
      goto LABEL_33;
    }
    if ( !CTouchProcessor::SetNewValidState(this, (_QWORD *)v13, NodeById) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1553);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v21) = 0;
      }
      if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v21,
          v22,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          4,
          54,
          (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v21) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v15 = 0;
      if ( (_BYTE)v21 || v15 )
      {
        LOBYTE(v22) = v15;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v21,
          v22,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          4,
          55,
          (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
      }
      goto LABEL_33;
    }
  }
  v23 = *((_QWORD *)NodeById + 5);
  if ( !v23 )
    v23 = *((_QWORD *)NodeById + 6);
  if ( !v23 )
    *(_OWORD *)((char *)NodeById + 40) = *((_OWORD *)v9 + 10);
  v24 = *((_QWORD *)v9 + 11);
  *((_DWORD *)v9 + 45) = -__CFSHR__(*((_DWORD *)v32 + 57), 9);
  v25 = *((unsigned __int16 *)NodeById + 16);
  *((_DWORD *)v9 + 5) &= ~0x4000000u;
  *((_DWORD *)v9 + 3) = v25;
  CTouchProcessor::UpdateStateIndicator((CTouchProcessor *)this, NodeById, v13, v24, *(struct tagPOINT *)(v9 + 48));
  Target = (_QWORD *)CTouchProcessor::UpdateInputCaptureAndGetTarget(this, v35, v32, v9, NodeById, v13, a6, a7, a8);
  CInputDest::operator=((__int64)a4, Target);
  CInputDest::SetEmpty((CInputDest *)v35);
  *((_DWORD *)v34 + 119) = *((_DWORD *)NodeById + 58);
  *a6 |= v14;
  v28 = *a6 | (2 * (*((_DWORD *)NodeById + 75) & 4));
  *a6 = v28;
  v29 = 2 * (*((_DWORD *)NodeById + 75) & 1);
  LOWORD(v29) = v28 | (2 * (*((_WORD *)NodeById + 150) & 1));
  *a6 = v29;
  *a6 = v29 | (2 * (*((_DWORD *)NodeById + 75) & 2));
  *a5 = *((_DWORD *)NodeById + 16) & 0x1F0;
  *((_DWORD *)NodeById + 16) = v13;
  LOBYTE(v29) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v15 = 0;
  if ( (_BYTE)v29 || v15 )
  {
    LOBYTE(v27) = v15;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v29,
      v27,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      56,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  }
  return *((unsigned __int16 *)NodeById + 16);
}
