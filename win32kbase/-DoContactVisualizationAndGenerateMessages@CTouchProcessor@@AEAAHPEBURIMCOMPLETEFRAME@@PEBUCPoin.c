/*
 * XREFs of ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C01F0C6C
 * Callers:
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C01FF048 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C01FF664 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00C9BD0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00C9C40 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00F1FC6 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     IsTouchpadDevice @ 0x1C00F422E (IsTouchpadDevice.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C01F0C00 (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01F3D8C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C01F60C8 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z @ 0x1C01FAF24 (-HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C01FF93C (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C02070EC (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ApiSetEditionEdgyEnabled @ 0x1C023D59C (ApiSetEditionEdgyEnabled.c)
 *     ApiSetEditionEdgyProcessInput @ 0x1C023D83C (ApiSetEditionEdgyProcessInput.c)
 *     ApiSetEditionEdgyResetCurrentFrame @ 0x1C023D9BC (ApiSetEditionEdgyResetCurrentFrame.c)
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
  void *v12; // r9
  CTouchProcessor *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // r8d
  struct CPointerInputFrame *v25; // rbp
  _DWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  const struct CPointerInputFrame *NextFrame; // rbx
  _QWORD *v31; // rax
  __int64 v32; // r8
  _QWORD *v33; // rcx
  int v34; // edx
  int v35; // r8d
  unsigned int MessagesCore; // ebx
  int v37; // edx
  int v38; // r8d
  _BYTE v39[40]; // [rsp+40h] [rbp-88h] BYREF
  CInpLockGuard *v40; // [rsp+68h] [rbp-60h]
  _BYTE v41[40]; // [rsp+70h] [rbp-58h] BYREF
  CInpLockGuard *v42; // [rsp+98h] [rbp-30h]
  struct CPointerInputFrame *v43; // [rsp+D8h] [rbp+10h] BYREF

  v43 = a2;
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
  v12 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      332,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  if ( *((struct _KTHREAD **)this + 5) != KeGetCurrentThread() )
  {
    LODWORD(v43) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14827);
  }
  if ( !a7 )
  {
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v39,
      (CTouchProcessor *)((char *)this + 32),
      0LL,
      (__int64)v12);
    CTouchProcessor::DoContactVisualization(v13, v8, a4, a5);
    CInpLockGuard::LockExclusive(v40);
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v39, v14, v15, v16);
  }
  if ( (unsigned int)ApiSetEditionEdgyEnabled(v10, a2, a3, v12) && !IsTouchpadDevice(a4) )
  {
    v43 = 0LL;
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v41,
      (CTouchProcessor *)((char *)this + 32),
      0LL,
      v17);
    v19 = ApiSetEditionEdgyProcessInput(this, v18, v8, &v43);
    InputTraceLogging::Pointer::HandleDesktopEdgy(v8, v19);
    CInpLockGuard::LockExclusive(v42);
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v41, v20, v21, v22);
    if ( !v19 )
    {
      *((_DWORD *)v8 + 57) |= 0x20u;
      return 1LL;
    }
    v25 = v43;
    if ( v43 )
    {
      *((_DWORD *)v43 + 57) &= ~0x20u;
      if ( v43 )
      {
        if ( *((_DWORD *)v43 + 12) == 1 && (*((_DWORD *)v43 + 57) & 8) != 0 )
        {
          v26 = (_DWORD *)*((_QWORD *)v43 + 30);
          if ( (*v26 & 0x400) != 0 && (v26[45] & 1) == 0 )
            CTouchProcessor::ProcessPointerInfoNodeEnterLeave(this, v43, v23);
        }
      }
      while ( v25 != v8 )
      {
        v27 = (_QWORD *)((char *)v25 + 24);
        v28 = *((_QWORD *)v25 + 3);
        if ( *(struct CPointerInputFrame **)(v28 + 8) != (struct CPointerInputFrame *)((char *)v25 + 24) )
          goto LABEL_44;
        v29 = (_QWORD *)*((_QWORD *)v25 + 4);
        if ( (_QWORD *)*v29 != v27 )
          goto LABEL_44;
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        *((_QWORD *)v25 + 4) = (char *)v25 + 24;
        *v27 = v27;
        CTouchProcessor::GenerateMessagesCore(
          this,
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)v25 + 32) + 360LL), 4),
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)v25 + 32) + 360LL), 5),
          0,
          v25);
        NextFrame = CTouchProcessor::GetNextFrame(this, v25, (struct _LIST_ENTRY *)((char *)this + 56));
        CTouchProcessor::UnreferenceFrame(this, v25);
        v25 = NextFrame;
        if ( !NextFrame )
          break;
      }
    }
    ApiSetEditionEdgyResetCurrentFrame();
  }
  v31 = (_QWORD *)((char *)v8 + 24);
  v32 = *((_QWORD *)v8 + 3);
  if ( *(const struct CPointerInputFrame **)(v32 + 8) != (const struct CPointerInputFrame *)((char *)v8 + 24)
    || (v33 = (_QWORD *)*((_QWORD *)v8 + 4), (_QWORD *)*v33 != v31) )
  {
LABEL_44:
    __fastfail(3u);
  }
  v34 = a5;
  *v33 = v32;
  *(_QWORD *)(v32 + 8) = v33;
  v35 = a6;
  *((_QWORD *)v8 + 4) = (char *)v8 + 24;
  *v31 = v31;
  MessagesCore = CTouchProcessor::GenerateMessagesCore(this, v34, v35, 0, v8);
  CTouchProcessor::UnreferenceFrame(this, v8);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v37) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v37) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v11 = 0;
  if ( (_BYTE)v37 || v11 )
  {
    LOBYTE(v38) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v37,
      v38,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      333,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
  return MessagesCore;
}
