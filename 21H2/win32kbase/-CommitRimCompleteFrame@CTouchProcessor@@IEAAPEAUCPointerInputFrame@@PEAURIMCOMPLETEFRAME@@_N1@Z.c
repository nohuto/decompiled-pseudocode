/*
 * XREFs of ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01C1E20
 * Callers:
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C01D14C4 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHH@Z @ 0x1C01D1824 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHH@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHH@Z @ 0x1C01DF13C (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMAssignmentLock @ 0x1C003A420 (HMAssignmentLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C00E7D12 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     IsTouchpadDevice @ 0x1C00E8F60 (IsTouchpadDevice.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C014C710 (EtwTraceBeginPointerFrameCommit.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C01BE26C (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x1C01C1208 (-CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C01C13A4 (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOI.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C01C62EC (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C01C6358 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C020F0D4 (ApiSetResetLastSeenFrameId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CommitRimCompleteFrame(
        CTouchProcessor *this,
        struct RIMCOMPLETEFRAME *a2,
        char a3,
        char a4)
{
  struct RIMCOMPLETEFRAME *v5; // r15
  CTouchProcessor *v6; // r13
  char v7; // di
  char v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  PDEVICE_OBJECT v12; // rcx
  __int16 v13; // ax
  char *v14; // rcx
  KPROCESSOR_MODE v15; // r8
  int v16; // eax
  int v17; // r8d
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  PVOID v23; // rbx
  __int64 v24; // rax
  __int64 Pool2; // rsi
  __int64 v26; // r8
  struct CPointerQFrame *v27; // rax
  unsigned __int64 v28; // rcx
  PVOID v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rbx
  char v33; // r12
  _DWORD *v34; // rbx
  int v35; // r14d
  _DWORD *v36; // r14
  _DWORD *v37; // r12
  unsigned int v38; // r13d
  __int64 v39; // rbx
  _OWORD *v40; // rcx
  __int64 v41; // r12
  PVOID v42; // r14
  __int64 v43; // rax
  int v44; // edx
  __int64 v45; // rbx
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r14
  CTouchProcessor *v50; // rcx
  __int64 v51; // rbx
  char *v52; // rdx
  char *v53; // rdx
  CTouchProcessor *v54; // rcx
  int v55; // edx
  __int64 v56; // r8
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v59; // [rsp+60h] [rbp-A8h]
  __int64 v60; // [rsp+68h] [rbp-A0h]
  __int64 i; // [rsp+70h] [rbp-98h]
  __int64 *v62[2]; // [rsp+78h] [rbp-90h] BYREF
  PVOID v63[20]; // [rsp+88h] [rbp-80h] BYREF
  PERESOURCE *v64[7]; // [rsp+128h] [rbp+20h] BYREF
  PERESOURCE *v65[7]; // [rsp+160h] [rbp+58h] BYREF
  PVOID BackTrace[20]; // [rsp+198h] [rbp+90h] BYREF
  PVOID v67[26]; // [rsp+238h] [rbp+130h] BYREF
  char v69; // [rsp+318h] [rbp+210h]

  v5 = a2;
  v6 = this;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v8 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v8 = 0;
  }
  if ( (_BYTE)a2 || v8 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v8,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      151,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v65,
    (CTouchProcessor *)((char *)v6 + 32),
    0LL);
  if ( *((struct _KTHREAD **)v6 + 5) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  if ( a4 )
  {
    if ( *((_DWORD *)v6 + 37) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v9) = 0;
      }
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          7,
          152,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v9) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v7 = 0;
      if ( !(_BYTE)v9 && !v7 )
        goto LABEL_237;
      v13 = 153;
      goto LABEL_236;
    }
  }
  else if ( *((_DWORD *)v6 + 36) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        7,
        154,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v7 = 0;
    if ( !(_BYTE)v9 && !v7 )
      goto LABEL_237;
    v13 = 155;
LABEL_236:
    WPP_RECORDER_AND_TRACE_SF_(
      v12->AttachedDevice,
      v9,
      v7,
      v12->DeviceExtension,
      5,
      7,
      v13,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    goto LABEL_237;
  }
  v14 = (char *)*((_QWORD *)v5 + 4);
  v15 = *((_DWORD *)v5 + 48) == 0;
  Object = 0LL;
  v16 = RawInputManagerDeviceObjectResolveHandle(v14, 3u, v15, &Object);
  if ( v16 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v17,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        156,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids,
        v16);
    }
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v7 = 0;
    if ( !(_BYTE)v9 && !v7 )
      goto LABEL_237;
    v13 = 157;
    goto LABEL_236;
  }
  v18 = 0LL;
  if ( Object != (PVOID)-88LL )
    v18 = *((_QWORD *)Object + 11);
  v60 = v18;
  ObfDereferenceObject(Object);
  Object = (PVOID)HMValidateHandleNoSecure(v18, 19);
  if ( !Object )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
  v22 = *((unsigned int *)v5 + 6);
  if ( !(_DWORD)v22 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v22, v21);
    LODWORD(v22) = *((_DWORD *)v5 + 6);
  }
  EtwTraceBeginPointerFrameCommit(0LL, v22, v21);
  v23 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x66707355) != 0x66707355
    || (v24 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_61:
    Pool2 = ExAllocatePool2(260LL, 264LL);
    goto LABEL_62;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v24) != 1718645589 )
  {
    if ( ++v24 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_61;
  }
  Pool2 = ExAllocatePool2(260LL, 280LL);
  if ( !Pool2 )
    goto LABEL_63;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v23,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_83;
    Pool2 += 16LL;
LABEL_62:
    if ( Pool2 )
      goto LABEL_73;
LABEL_63:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        158,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v7 = 0;
    if ( !(_BYTE)v9 && !v7 )
      goto LABEL_237;
    v13 = 159;
    goto LABEL_236;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v23,
          Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
LABEL_83:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_63;
  }
LABEL_73:
  v27 = CTouchProcessor::AllocPointerQFrameList((struct _KTHREAD **)v6, *((unsigned int *)v5 + 6), v26);
  *(_QWORD *)(Pool2 + 248) = v27;
  if ( !v27 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        160,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v7 = 0;
    if ( !(_BYTE)v9 && !v7 )
      goto LABEL_237;
    v13 = 161;
    goto LABEL_236;
  }
  v28 = 480LL * *((unsigned int *)v5 + 6);
  if ( v28 > 0xFFFFFFFF )
  {
    v32 = *(_QWORD *)(Pool2 + 240);
    goto LABEL_123;
  }
  v29 = gpLeakTrackingAllocator;
  v30 = (unsigned int)v28;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x65707355) == 0x65707355
    && (v31 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v31) != 1701868373 )
    {
      if ( ++v31 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_109;
    }
    v33 = 0;
    if ( (unsigned int)v28 < 0x1000uLL || (v28 & 0xFFF) != 0 )
    {
      v33 = 1;
      v30 = (unsigned int)v28 + 16LL;
    }
    v32 = ExAllocatePool2(260LL, v30);
    if ( v32 )
    {
      memset(v63, 0, sizeof(v63));
      RtlCaptureStackBackTrace(0, 0x14u, v63, 0LL);
      if ( v33 && (unsigned __int64)(v32 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v29,
               (const void *)v32,
               (struct NSInstrumentation::CBackTrace *)v63) )
        {
          v32 += 16LL;
          goto LABEL_110;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v29,
                  v32,
                  (struct NSInstrumentation::CBackTrace *)v63) )
      {
        goto LABEL_110;
      }
      ExFreePoolWithTag((PVOID)v32, 0);
    }
    v32 = 0LL;
  }
  else
  {
LABEL_109:
    v32 = ExAllocatePool2(260LL, (unsigned int)v28);
  }
LABEL_110:
  *(_QWORD *)(Pool2 + 240) = v32;
LABEL_123:
  if ( !v32 )
  {
    CTouchProcessor::FreePointerQFrameList(
      (CTouchProcessor *)v28,
      *(struct CPointerQFrame **)(Pool2 + 248),
      *((_DWORD *)v5 + 6));
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        162,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v7 = 0;
    if ( !(_BYTE)v9 && !v7 )
      goto LABEL_237;
    v13 = 163;
    goto LABEL_236;
  }
  v34 = qword_1C0296BE0;
  *(_DWORD *)(Pool2 + 224) = 1;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v64,
    (struct CInpLockGuard *)(v34 + 2),
    0LL);
  v35 = (*v34)++;
  if ( v35 == -1 )
  {
    *v34 = 1;
    ApiSetResetLastSeenFrameId();
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v64);
  *(_DWORD *)(Pool2 + 40) = v35;
  *(_DWORD *)(Pool2 + 48) = *((_DWORD *)v5 + 6);
  *(_QWORD *)(Pool2 + 64) = v60;
  *(_OWORD *)(Pool2 + 72) = *((_OWORD *)v5 + 3);
  *(_OWORD *)(Pool2 + 88) = *((_OWORD *)v5 + 4);
  *(_OWORD *)(Pool2 + 104) = *((_OWORD *)v5 + 5);
  *(_OWORD *)(Pool2 + 120) = *((_OWORD *)v5 + 6);
  *(_OWORD *)(Pool2 + 136) = *((_OWORD *)v5 + 7);
  *(_OWORD *)(Pool2 + 152) = *((_OWORD *)v5 + 8);
  *(_OWORD *)(Pool2 + 168) = *((_OWORD *)v5 + 9);
  *(_OWORD *)(Pool2 + 184) = *((_OWORD *)v5 + 10);
  *(_OWORD *)(Pool2 + 200) = *((_OWORD *)v5 + 11);
  *(_QWORD *)(Pool2 + 216) = *(_QWORD *)(*((_QWORD *)v5 + 29) + 96LL);
  InputTraceLogging::Pointer::CommitFrame((const struct RIMDEV *)Object, (const struct CPointerInputFrame *)Pool2);
  v36 = (_DWORD *)*((_QWORD *)v5 + 29);
  if ( *((_DWORD *)v5 + 6) )
  {
    v37 = v36 + 2;
    v38 = 0;
    do
    {
      v39 = 480LL * v38;
      *(_DWORD *)(v39 + *(_QWORD *)(Pool2 + 240) + 156) = *v36;
      v40 = (_OWORD *)(v39 + *(_QWORD *)(Pool2 + 240) + 160LL);
      *v40 = *(_OWORD *)v37;
      v40[1] = *((_OWORD *)v37 + 1);
      v40[2] = *((_OWORD *)v37 + 2);
      v40[3] = *((_OWORD *)v37 + 3);
      v40[4] = *((_OWORD *)v37 + 4);
      v40[5] = *((_OWORD *)v37 + 5);
      v40[6] = *((_OWORD *)v37 + 6);
      v40 += 8;
      *(v40 - 1) = *((_OWORD *)v37 + 7);
      *v40 = *((_OWORD *)v37 + 8);
      v40[1] = *((_OWORD *)v37 + 9);
      v40[2] = *((_OWORD *)v37 + 10);
      *((_QWORD *)v40 + 6) = *((_QWORD *)v37 + 22);
      *(_QWORD *)(v39 + *(_QWORD *)(Pool2 + 240) + 184) = v60;
      CInputDest::SetEmpty((CInputDest *)(v39 + *(_QWORD *)(Pool2 + 240) + 352LL));
      InputTraceLogging::Pointer::CommitFramePointer(
        (const struct RIMDEV *)Object,
        (const struct CPointerInputFrame *)Pool2,
        (const struct tagPOINTEREVENTINT *)(v39 + *(_QWORD *)(Pool2 + 240) + 160LL));
      ++v38;
      v36 += 48;
      v37 += 48;
    }
    while ( v38 < *((_DWORD *)v5 + 6) );
    v6 = this;
  }
  *(_DWORD *)(Pool2 + 56) = *((_DWORD *)v5 + 7);
  *(_QWORD *)Pool2 = gpTouchProcessor;
  v41 = *((_QWORD *)v5 + 28);
  for ( i = 0LL; ; i = v45 )
  {
    if ( !v41 )
    {
      v62[0] = (__int64 *)(Pool2 + 256);
      v62[1] = *((__int64 **)Object + 59);
      HMAssignmentLock(v62, 0LL);
      if ( a3
        || (CTouchProcessor::CommitInputFrame((struct _KTHREAD **)v6, (struct CPointerInputFrame *)Pool2, v56),
            IsTouchpadDevice(v60)) )
      {
        *(_DWORD *)(Pool2 + 228) |= 0x80u;
      }
      else if ( a4 )
      {
        *(_DWORD *)(Pool2 + 228) |= 0x40u;
        ++*((_DWORD *)v6 + 36);
      }
      else
      {
        ++*((_DWORD *)v6 + 37);
      }
      *(_QWORD *)(Pool2 + 32) = Pool2 + 24;
      *(_QWORD *)(Pool2 + 24) = Pool2 + 24;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v55) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v55) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v7 = 0;
      if ( (_BYTE)v55 || v7 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v55,
          v7,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          7,
          167,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      goto LABEL_238;
    }
    v42 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x64727355) != 0x64727355
      || (v43 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_153:
      v45 = ExAllocatePool2(260LL, 32LL);
      goto LABEL_154;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v43) != 1685222229 )
    {
      if ( ++v43 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_153;
    }
    v45 = ExAllocatePool2(260LL, 48LL);
    if ( !v45 )
      goto LABEL_181;
    memset(v63, 0, sizeof(v63));
    RtlCaptureStackBackTrace(0, 0x14u, v63, 0LL);
    if ( (unsigned __int64)(v45 & 0xFFF) + 16 < 0x1000 )
      break;
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
            (__int64)v42,
            v45,
            (struct NSInstrumentation::CBackTrace *)v63) )
      goto LABEL_166;
LABEL_155:
    v46 = *(unsigned int *)(v41 + 4);
    v59 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x64727355) != 0x64727355
      || (v47 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_159:
      v48 = ExAllocatePool2(260LL, v46);
LABEL_160:
      v49 = v48;
      goto LABEL_161;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v47) != 1685222229 )
    {
      if ( ++v47 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_159;
    }
    v69 = 0;
    if ( v46 < 0x1000 || (v46 & 0xFFF) != 0 )
    {
      v69 = 1;
      v46 += 16LL;
    }
    v49 = ExAllocatePool2(260LL, v46);
    v48 = 0LL;
    if ( !v49 )
      goto LABEL_160;
    memset(v67, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, v67, 0LL);
    if ( v69 && (unsigned __int64)(v49 & 0xFFF) + 16 < 0x1000 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
              (__int64)v59,
              (const void *)v49,
              (struct NSInstrumentation::CBackTrace *)v67) )
        goto LABEL_178;
      v49 += 16LL;
    }
    else if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v59,
                 v49,
                 (struct NSInstrumentation::CBackTrace *)v67) )
    {
LABEL_178:
      ExFreePoolWithTag((PVOID)v49, 0);
      v48 = 0LL;
      goto LABEL_160;
    }
LABEL_161:
    *(_QWORD *)(v45 + 16) = v49;
    *(_DWORD *)(v45 + 4) = *(_DWORD *)v41;
    *(_DWORD *)(v45 + 8) = *(_DWORD *)(v41 + 4);
    memmove((void *)v49, *(const void **)(v41 + 8), *(unsigned int *)(v41 + 4));
    if ( i )
      *(_QWORD *)(i + 24) = v45;
    else
      *(_QWORD *)(Pool2 + 232) = v45;
    v41 = *(_QWORD *)(v41 + 16);
  }
  if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
         (__int64)v42,
         (const void *)v45,
         (struct NSInstrumentation::CBackTrace *)v63) )
  {
    v45 += 16LL;
LABEL_154:
    if ( !v45 )
      goto LABEL_181;
    goto LABEL_155;
  }
LABEL_166:
  ExFreePoolWithTag((PVOID)v45, 0);
LABEL_181:
  v50 = (CTouchProcessor *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v44) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v44) = 0;
  }
  if ( (_BYTE)v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v44,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      7,
      165,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  v51 = *(_QWORD *)(Pool2 + 232);
  while ( v51 )
  {
    v52 = *(char **)(v51 + 16);
    if ( v52 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v52);
    v53 = (char *)v51;
    v51 = *(_QWORD *)(v51 + 24);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v53);
  }
  CTouchProcessor::FreePointerInfoList(v50, *(struct CPointerInfoNode **)(Pool2 + 240), *((_DWORD *)v5 + 6));
  CTouchProcessor::FreePointerQFrameList(v54, *(struct CPointerQFrame **)(Pool2 + 248), *((_DWORD *)v5 + 6));
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (char *)Pool2);
  v12 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v7 = 0;
  if ( (_BYTE)v9 || v7 )
  {
    v13 = 166;
    goto LABEL_236;
  }
LABEL_237:
  Pool2 = 0LL;
LABEL_238:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v65);
  return (struct CPointerInputFrame *)Pool2;
}
