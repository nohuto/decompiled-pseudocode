/*
 * XREFs of ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C01FF048
 * Callers:
 *     SynthesizeMitTouchInput @ 0x1C0223400 (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1C022370C (SynthesizeTouchInputContainer.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C9B24 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C00C9B90 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01ED628 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C01F0C6C (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C0200F80 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 */

void __fastcall CTouchProcessor::ProcessInjectedInput(
        struct _KTHREAD **this,
        __int64 a2,
        struct RIMCOMPLETEFRAME *a3,
        char a4,
        unsigned int a5,
        bool a6)
{
  int v10; // edx
  int v11; // r8d
  char v12; // bl
  struct CPointerInputFrame *v13; // rax
  const struct RIMCOMPLETEFRAME *v14; // rdx
  struct RIMCOMPLETEFRAME *v15; // r8
  PDEVICE_OBJECT v16; // rcx
  __int16 v17; // ax
  const struct CPointerInputFrame *v18; // rax
  const struct CPointerInputFrame *v19; // rsi
  _BYTE v20[48]; // [rsp+40h] [rbp-48h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v20, (struct CInpLockGuard *)(this + 4), 0LL);
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
      28,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  v13 = CTouchProcessor::CommitRimCompleteFrame(this, a3, 0, a4);
  if ( v13 )
  {
    v18 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)this, v13, v15, a5);
    v19 = v18;
    if ( v18 )
    {
      if ( *((_DWORD *)v18 + 12) <= *((_DWORD *)v18 + 13) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1044);
      if ( !*((_QWORD *)v19 + 30) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1045);
      CTouchProcessor::DoContactVisualizationAndGenerateMessages((CTouchProcessor *)this, v14, v19, a2, 1, 0, a6);
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
        v17 = 33;
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
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v14,
          (_DWORD)v15,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          7,
          31,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      }
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
        v17 = 32;
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
    if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v14,
        (_DWORD)v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        29,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
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
      v17 = 30;
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
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v20);
}
