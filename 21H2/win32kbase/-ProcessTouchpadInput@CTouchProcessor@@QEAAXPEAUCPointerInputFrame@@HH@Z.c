/*
 * XREFs of ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C01D2C30
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01DE5A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC94C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C00E7D12 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C01D20B8 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C01D340C (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01D3BE4 (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessTouchpadInput(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _KTHREAD **v4; // rsi
  int v8; // edx
  int v9; // r8d
  char v10; // bl
  __int64 v11; // r8
  struct RIMCOMPLETEFRAME *v12; // r8
  const struct CPointerInputFrame *v13; // rax
  __int64 v14; // rdx
  CTouchProcessor *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  PDEVICE_OBJECT v18; // rcx
  __int16 v19; // ax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  CInpLockGuard *v23[6]; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v24; // [rsp+90h] [rbp+8h] BYREF

  v24 = (__int64 *)this;
  v4 = (struct _KTHREAD **)gpTouchProcessor;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v23,
    (CTouchProcessor *)((char *)gpTouchProcessor + 32),
    0LL);
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v9) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)v8 || (_BYTE)v9 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      14,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v24, "ProcessTouchpadGesture", 0LL);
  CTouchProcessor::CommitInputFrame(v4, a2, v11);
  v13 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)v4, a2, v12, 0);
  v17 = (__int64)v13;
  if ( v13 )
  {
    if ( *((_DWORD *)v13 + 12) <= *((_DWORD *)v13 + 13) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    if ( !*(_QWORD *)(v17 + 240) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    if ( *(_DWORD *)(v17 + 48) == 1 && (*(_DWORD *)(v17 + 228) & 8) != 0 )
    {
      v15 = *(CTouchProcessor **)(v17 + 240);
      if ( (*(_DWORD *)v15 & 0x400) != 0 && (*((_DWORD *)v15 + 45) & 1) == 0 )
        CTouchProcessor::ProcessPointerInfoNodeEnterLeave(v4, (const struct CPointerInputFrame *)v17, v16);
    }
    CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(v15, (const struct CPointerInputFrame *)v17);
    CTouchProcessor::GenerateMessagesCore((CTouchProcessor *)v4, a3, a4, 0, (const struct CPointerInputFrame *)v17);
    CTouchProcessor::UnreferenceFrame((__int64)v4, v17, v20);
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v14 || v10 )
    {
      v19 = 17;
      goto LABEL_48;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v16,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        15,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v14 || v10 )
    {
      v19 = 16;
LABEL_48:
      LOBYTE(v16) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        v18->AttachedDevice,
        v14,
        v16,
        v18->DeviceExtension,
        5,
        7,
        v19,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v24);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v23, v21, v22);
}
