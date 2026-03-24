/*
 * XREFs of ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C018DB0C
 * Callers:
 *     ?DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C018D900 (-DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0199794 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C0199C1C (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCD08 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD2DC (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0187454 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C018DAA0 (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0190000 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0191BE8 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z @ 0x1C0195EE0 (-HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C0199D74 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019B364 (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     IsTouchpadDevice @ 0x1C01AEA50 (IsTouchpadDevice.c)
 *     ApiSetEditionEdgyEnabled @ 0x1C01CB02C (ApiSetEditionEdgyEnabled.c)
 *     ApiSetEditionEdgyProcessInput @ 0x1C01CB1DC (ApiSetEditionEdgyProcessInput.c)
 *     ApiSetEditionEdgyResetCurrentFrame @ 0x1C01CB2E0 (ApiSetEditionEdgyResetCurrentFrame.c)
 */

__int64 __fastcall CTouchProcessor::DoContactVisualizationAndGenerateMessages(
        CTouchProcessor *this,
        const struct RIMCOMPLETEFRAME *a2,
        const struct CPointerInputFrame *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  CTouchProcessor *v10; // rcx
  CTouchProcessor *v11; // rcx
  __int64 v12; // rdx
  int v13; // ebx
  CTouchProcessor *v14; // rcx
  unsigned int v15; // r8d
  struct CPointerInputFrame *v17; // rsi
  const struct CPointerInputFrame *NextFrame; // rbx
  unsigned int MessagesCore; // ebx
  int v20; // edx
  PERESOURCE *v21[6]; // [rsp+30h] [rbp-88h] BYREF
  PERESOURCE *v22[6]; // [rsp+60h] [rbp-58h] BYREF
  struct CPointerInputFrame *v23; // [rsp+C8h] [rbp+10h] BYREF

  v23 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      324,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  if ( *((struct _KTHREAD **)this + 6) != KeGetCurrentThread() )
  {
    LODWORD(v23) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14135);
  }
  if ( !a7 )
  {
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v21,
      (CTouchProcessor *)((char *)this + 40),
      0LL);
    CTouchProcessor::DoContactVisualization(v10, a3, a4, a5);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v21);
  }
  if ( (unsigned int)ApiSetEditionEdgyEnabled() && !(unsigned __int8)IsTouchpadDevice(a4) )
  {
    v23 = 0LL;
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v22,
      (CTouchProcessor *)((char *)this + 40),
      0LL);
    v13 = ApiSetEditionEdgyProcessInput(this, v12, a3, &v23);
    InputTraceLogging::Pointer::HandleDesktopEdgy(a3, v13);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v22);
    if ( !v13 )
    {
      *((_DWORD *)a3 + 31) |= 0x20u;
      return 1LL;
    }
    v17 = v23;
    if ( v23 )
    {
      *((_DWORD *)v23 + 31) &= ~0x20u;
      if ( v23 )
      {
        if ( *((_DWORD *)v23 + 12) == 1 && (*((_DWORD *)v23 + 31) & 8) != 0 )
        {
          v14 = (CTouchProcessor *)*((_QWORD *)v23 + 17);
          if ( (*(_DWORD *)v14 & 0x400) != 0 && (*((_DWORD *)v14 + 45) & 1) == 0 )
            CTouchProcessor::ProcessPointerInfoNodeEnterLeave(this, v23, v15);
        }
      }
      do
      {
        if ( v17 == a3 )
          break;
        CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(v14, v17);
        CTouchProcessor::GenerateMessagesCore(
          this,
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)v17 + 19) + 312LL), 4),
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)v17 + 19) + 312LL), 5),
          0,
          v17);
        NextFrame = CTouchProcessor::GetNextFrame(this, v17, (struct _LIST_ENTRY *)((char *)this + 56));
        CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v17);
        v17 = NextFrame;
      }
      while ( NextFrame );
    }
    ApiSetEditionEdgyResetCurrentFrame();
  }
  CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(v11, a3);
  MessagesCore = CTouchProcessor::GenerateMessagesCore(this, a5, a6, 0, a3);
  CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v20) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v20,
        7,
        325,
        (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    }
  }
  return MessagesCore;
}
