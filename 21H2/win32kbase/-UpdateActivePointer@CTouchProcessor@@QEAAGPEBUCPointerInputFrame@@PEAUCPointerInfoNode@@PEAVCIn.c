/*
 * XREFs of ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C01D8E38
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01CF4BC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00355CC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E7DA2 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C01C381C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C01C53AC (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C01D50CC (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D9608 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C01DA214 (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1C01DA994 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v19; // edx
  int v20; // r8d
  __int16 v21; // r15
  int v23; // r9d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int64 v27; // r9
  int v28; // eax
  _QWORD *Target; // rax
  int v30; // r8d
  unsigned __int16 v31; // cx
  int v32; // edx
  int v33; // [rsp+28h] [rbp-150h]
  int v34; // [rsp+38h] [rbp-140h]
  struct CPointerInfoNode *v36; // [rsp+78h] [rbp-100h]
  _BYTE v37[128]; // [rsp+A0h] [rbp-D8h] BYREF

  v9 = (char *)a3 + 160;
  v10 = a2;
  v11 = *((_WORD *)a3 + 80);
  v13 = *((_DWORD *)a3 + 42);
  v14 = *((_DWORD *)a3 + 45);
  v36 = a3;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
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
      49,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  *a6 = 0;
  *a7 = 0;
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)this, v11, 1, 1);
  if ( NodeById )
  {
    if ( (*((_DWORD *)v9 + 5) & 1) == 0 )
    {
      v23 = *((_DWORD *)NodeById + 15);
      if ( v23 != v13 )
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
            v33,
            52,
            v34,
            v23,
            v13);
        }
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v16) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v15 = 0;
        }
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
            53,
            (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
        }
        goto LABEL_32;
      }
      if ( !CTouchProcessor::SetNewValidState(this, (_QWORD *)v14, NodeById) )
      {
        if ( !gbIgnoreStressedOutStuff )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v24) = 0;
        }
        if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v24,
            v26,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            7,
            54,
            (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
        }
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v24) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v15 = 0;
        }
        if ( (_BYTE)v24 || v15 )
        {
          LOBYTE(v26) = v15;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v24,
            v26,
            WPP_GLOBAL_Control->DeviceExtension,
            5,
            7,
            55,
            (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
        }
        goto LABEL_32;
      }
    }
    v21 = 0;
  }
  else
  {
    NodeById = CTouchProcessor::CreateNode(this, v11, v13, v14, a9);
    v21 = 1;
    if ( !NodeById )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v19) = 0;
      }
      if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v19,
          v20,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          7,
          50,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v19) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v15 = 0;
      if ( (_BYTE)v19 || v15 )
      {
        LOBYTE(v20) = v15;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v19,
          v20,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          7,
          51,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
LABEL_32:
      InputTraceLogging::Pointer::DropInput();
      return 0LL;
    }
  }
  if ( !*(_OWORD *)((char *)NodeById + 40) )
    *(_OWORD *)((char *)NodeById + 40) = *((_OWORD *)v9 + 10);
  v27 = *((_QWORD *)v9 + 11);
  *((_DWORD *)v9 + 45) = -__CFSHR__(*((_DWORD *)v10 + 57), 9);
  v28 = *((unsigned __int16 *)NodeById + 16);
  *((_DWORD *)v9 + 5) &= ~0x4000000u;
  *((_DWORD *)v9 + 3) = v28;
  CTouchProcessor::UpdateStateIndicator((CTouchProcessor *)this, NodeById, v14, v27, *(struct tagPOINT *)(v9 + 48));
  Target = (_QWORD *)CTouchProcessor::UpdateInputCaptureAndGetTarget(this, v37, v10, v9, NodeById, v14, a6, a7, a8);
  CInputDest::operator=((__int64)a4, Target);
  CInputDest::SetEmpty((CInputDest *)v37);
  *((_DWORD *)v36 + 119) = *((_DWORD *)NodeById + 58);
  *a6 |= v21;
  v31 = *a6 | (2 * (*((_DWORD *)NodeById + 75) & 4));
  *a6 = v31;
  v32 = 2 * (*((_DWORD *)NodeById + 75) & 1);
  LOWORD(v32) = v31 | (2 * (*((_WORD *)NodeById + 150) & 1));
  *a6 = v32;
  *a6 = v32 | (2 * (*((_DWORD *)NodeById + 75) & 2));
  *a5 = *((_DWORD *)NodeById + 16) & 0x1F0;
  *((_DWORD *)NodeById + 16) = v14;
  LOBYTE(v32) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v15 = 0;
  if ( (_BYTE)v32 || v15 )
  {
    LOBYTE(v30) = v15;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v32,
      v30,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      56,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
  return *((unsigned __int16 *)NodeById + 16);
}
