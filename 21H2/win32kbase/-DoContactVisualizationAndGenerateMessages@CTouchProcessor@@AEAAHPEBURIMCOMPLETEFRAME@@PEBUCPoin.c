/*
 * XREFs of ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C01C4EF8
 * Callers:
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C01D14C4 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C01D1E70 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC94C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E7C96 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     IsTouchpadDevice @ 0x1C00E8F60 (IsTouchpadDevice.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C01BD2AC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C01C4E8C (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C01C9240 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z @ 0x1C01CD7AC (-HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C01D20B8 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01D3BE4 (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionEdgyEnabled @ 0x1C0206EFC (ApiSetEditionEdgyEnabled.c)
 *     ApiSetEditionEdgyProcessInput @ 0x1C020719C (ApiSetEditionEdgyProcessInput.c)
 *     ApiSetEditionEdgyResetCurrentFrame @ 0x1C020731C (ApiSetEditionEdgyResetCurrentFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  const struct CPointerInputFrame *v8; // rsi
  PDEVICE_OBJECT v10; // rcx
  char v11; // di
  const int *v12; // r9
  CTouchProcessor *v13; // rcx
  CTouchProcessor *v14; // rcx
  __int64 v15; // rdx
  int v16; // ebx
  CTouchProcessor *v17; // rcx
  unsigned int v18; // r8d
  struct CPointerInputFrame *v20; // rbp
  const struct CPointerInputFrame *NextFrame; // rbx
  __int64 v22; // r8
  unsigned int MessagesCore; // ebx
  __int64 v24; // r8
  int v25; // edx
  int v26; // r8d
  PERESOURCE *v27[6]; // [rsp+40h] [rbp-88h] BYREF
  PERESOURCE *v28[6]; // [rsp+70h] [rbp-58h] BYREF
  struct CPointerInputFrame *v29; // [rsp+D8h] [rbp+10h] BYREF

  v29 = a2;
  v8 = a3;
  v10 = WPP_GLOBAL_Control;
  v11 = 1;
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
  v12 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      324,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  if ( *((struct _KTHREAD **)this + 5) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2, a3);
  if ( !a7 )
  {
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v27,
      (struct _KTHREAD **)this + 4,
      0LL);
    CTouchProcessor::DoContactVisualization(v13, v8, a4, a5);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v27);
  }
  if ( (unsigned int)ApiSetEditionEdgyEnabled(v10, a2, a3, v12) && !IsTouchpadDevice(a4) )
  {
    v29 = 0LL;
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v28,
      (struct _KTHREAD **)this + 4,
      0LL);
    v16 = ApiSetEditionEdgyProcessInput(this, v15, v8, &v29);
    InputTraceLogging::Pointer::HandleDesktopEdgy(v8, v16);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v28);
    if ( !v16 )
    {
      *((_DWORD *)v8 + 57) |= 0x20u;
      return 1LL;
    }
    v20 = v29;
    if ( v29 )
    {
      *((_DWORD *)v29 + 57) &= ~0x20u;
      if ( v29 )
      {
        if ( *((_DWORD *)v29 + 12) == 1 && (*((_DWORD *)v29 + 57) & 8) != 0 )
        {
          v17 = (CTouchProcessor *)*((_QWORD *)v29 + 30);
          if ( (*(_DWORD *)v17 & 0x400) != 0 && (*((_DWORD *)v17 + 45) & 1) == 0 )
            CTouchProcessor::ProcessPointerInfoNodeEnterLeave(this, v29, v18);
        }
      }
      do
      {
        if ( v20 == v8 )
          break;
        CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(v17, v20);
        CTouchProcessor::GenerateMessagesCore(
          this,
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)v20 + 32) + 360LL), 4),
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)v20 + 32) + 360LL), 5),
          0,
          v20);
        NextFrame = CTouchProcessor::GetNextFrame(this, v20, (struct _LIST_ENTRY *)this + 3);
        CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v20, v22);
        v20 = NextFrame;
      }
      while ( NextFrame );
    }
    ApiSetEditionEdgyResetCurrentFrame();
  }
  CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(v14, v8);
  MessagesCore = CTouchProcessor::GenerateMessagesCore(this, a5, a6, 0, v8);
  CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v8, v24);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v25) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v11 = 0;
  if ( (_BYTE)v25 || v11 )
  {
    LOBYTE(v26) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v25,
      v26,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      325,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
  return MessagesCore;
}
