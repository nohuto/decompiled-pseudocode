/*
 * XREFs of ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01CCE84
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x1C015A440 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C002CB00 (ValidateHwndEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C00E8380 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ValidateHbwnd @ 0x1C0144300 (ValidateHbwnd.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C01C97E0 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1C01DA7E0 (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     ApiSetGetInputTransformList @ 0x1C020D020 (ApiSetGetInputTransformList.c)
 *     ApiSetHasInputTransform @ 0x1C020DCD8 (ApiSetHasInputTransform.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerTransform(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        unsigned int a4,
        struct tagINPUT_TRANSFORM *a5)
{
  char v5; // bl
  CTouchProcessor *v7; // r13
  __int16 v8; // di
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edx
  int v14; // edx
  __int64 v15; // rcx
  int v17; // edx
  __int64 Pool2; // rdi
  __int64 v19; // rdx
  unsigned int PointerDataQPCTimeList; // esi
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // edx
  __int64 v24; // rcx
  PVOID v25; // rsi
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // edx
  char v29; // r12
  PDEVICE_OBJECT v30; // rcx
  int v31; // edx
  __int16 v32; // [rsp+30h] [rbp-B1h]
  unsigned __int64 v33[2]; // [rsp+50h] [rbp-91h] BYREF
  PVOID BackTrace[26]; // [rsp+60h] [rbp-81h] BYREF
  HWND v35; // [rsp+140h] [rbp+5Fh] BYREF
  unsigned __int64 ThreadPointerData; // [rsp+148h] [rbp+67h]
  int v37; // [rsp+150h] [rbp+6Fh] BYREF

  v33[0] = 0LL;
  v5 = 1;
  v35 = 0LL;
  v7 = gpTouchProcessor;
  v8 = a3;
  v9 = a4;
  if ( (_WORD)a3 == 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        v7,
                        (struct tagTHREADINFO *)((char *)a2 + 1112),
                        v8,
                        0LL,
                        0LL,
                        &v35);
  if ( !ThreadPointerData )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 312;
      LOBYTE(v13) = v5;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        312,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids,
        v8);
    }
LABEL_20:
    v15 = 87LL;
LABEL_21:
    UserSetLastError(v15, v10, v11, v12);
    return 0LL;
  }
  if ( !ValidateHbwnd((unsigned __int64)v35, v10, v11, v12) && !ValidateHwndEx((__int64)v35, 1LL, 0LL) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 313;
      LOBYTE(v14) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        313,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
    goto LABEL_20;
  }
  if ( !(unsigned int)ApiSetHasInputTransform(v35) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 314;
      LOBYTE(v17) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        4,
        314,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
    v15 = 232LL;
    goto LABEL_21;
  }
  if ( (_DWORD)v9 == 1 )
  {
    Pool2 = (__int64)v33;
    goto LABEL_33;
  }
  v25 = gpLeakTrackingAllocator;
  v26 = 8 * v9;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x78697355) != 0x78697355
    || (v27 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_47:
    Pool2 = ExAllocatePool2(260LL, v26);
    goto LABEL_48;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v27) != 2020176725 )
  {
    if ( ++v27 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_47;
  }
  v29 = 0;
  if ( v26 < 0x1000 || (v26 & 0xFFF) != 0 )
  {
    v29 = 1;
    v26 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v26);
  if ( !Pool2 )
    goto LABEL_49;
  memset(BackTrace, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v29 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
           (__int64)v25,
           Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      goto LABEL_33;
    }
LABEL_65:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_49:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = 315;
      LOBYTE(v28) = v5;
      WPP_RECORDER_AND_TRACE_SF_L(
        WPP_GLOBAL_Control->AttachedDevice,
        v28,
        v11,
        v12,
        2,
        7,
        315,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids,
        v9);
    }
    goto LABEL_20;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          (__int64)v25,
          (const void *)Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_65;
  Pool2 += 16LL;
LABEL_48:
  if ( !Pool2 )
    goto LABEL_49;
LABEL_33:
  v37 = 1;
  PointerDataQPCTimeList = CTouchProcessor::GetPointerDataQPCTimeList(
                             v7,
                             ThreadPointerData,
                             v9,
                             (unsigned __int64 *)Pool2,
                             &v37);
  if ( PointerDataQPCTimeList )
  {
    PointerDataQPCTimeList = ApiSetGetInputTransformList((_DWORD)v35, v9, Pool2, v22, (__int64)a5);
    if ( PointerDataQPCTimeList )
      goto LABEL_84;
    v30 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_82;
    v31 = 318;
    goto LABEL_81;
  }
  if ( !v37 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = 316;
      LOBYTE(v23) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v23,
        v21,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        316,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
    v24 = 232LL;
    goto LABEL_83;
  }
  v30 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v5 = 0;
  }
  LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = 317;
LABEL_81:
    v32 = v31;
    LOBYTE(v31) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      v30->AttachedDevice,
      v31,
      v21,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      7,
      v32,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
LABEL_82:
  v24 = 87LL;
LABEL_83:
  UserSetLastError(v24, v19, v21, v22);
LABEL_84:
  if ( (unsigned __int64 *)Pool2 != v33 && Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
  return PointerDataQPCTimeList;
}
