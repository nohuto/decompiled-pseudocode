/*
 * XREFs of ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C01D14C4
 * Callers:
 *     SynthesizeMitTouchInput @ 0x1C01F2134 (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1C01F2634 (SynthesizeTouchInputContainer.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01C1E20 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C01C4EF8 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C01D340C (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessInjectedInput(
        CTouchProcessor *this,
        void *a2,
        struct RIMCOMPLETEFRAME *a3,
        char a4,
        unsigned int a5,
        bool a6)
{
  CTouchProcessor *v6; // rsi
  void *v7; // r14
  int v10; // edx
  int v11; // r8d
  char v12; // bl
  struct CPointerInputFrame *v13; // rax
  const struct RIMCOMPLETEFRAME *v14; // rdx
  struct RIMCOMPLETEFRAME *v15; // r8
  PDEVICE_OBJECT v16; // rcx
  __int16 v17; // ax
  const struct CPointerInputFrame *v18; // rax
  __int64 v19; // rcx
  const struct CPointerInputFrame *v20; // rdi
  CInpLockGuard *v21[6]; // [rsp+40h] [rbp-48h] BYREF

  v6 = gpTouchProcessor;
  v7 = TouchExtensibility::ghInjectionDevice;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v21,
    (CTouchProcessor *)((char *)gpTouchProcessor + 32),
    0LL);
  v12 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v11) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v11) = 0;
  }
  if ( (_BYTE)v10 || (_BYTE)v11 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      24,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  v13 = CTouchProcessor::CommitRimCompleteFrame(v6, a3, 0, a4);
  if ( v13 )
  {
    v18 = CTouchProcessor::ReferenceInputFrame(v6, v13, v15, a5);
    v20 = v18;
    if ( v18 )
    {
      if ( *((_DWORD *)v18 + 12) <= *((_DWORD *)v18 + 13) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v14, v15);
      if ( !*((_QWORD *)v20 + 30) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v14, v15);
      CTouchProcessor::DoContactVisualizationAndGenerateMessages(v6, v14, v20, (__int64)v7, 1, 0, a6);
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v12 = 0;
      if ( (_BYTE)v14 || v12 )
      {
        v17 = 29;
        goto LABEL_61;
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
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v14,
          (_DWORD)v15,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          7,
          27,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v12 = 0;
      if ( (_BYTE)v14 || v12 )
      {
        v17 = 28;
        goto LABEL_61;
      }
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
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v14,
        (_DWORD)v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        25,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v12 = 0;
    if ( (_BYTE)v14 || v12 )
    {
      v17 = 26;
LABEL_61:
      LOBYTE(v15) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        v16->AttachedDevice,
        (_DWORD)v14,
        (_DWORD)v15,
        v16->DeviceExtension,
        5,
        7,
        v17,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v21, (__int64)v14, (__int64)v15);
}
