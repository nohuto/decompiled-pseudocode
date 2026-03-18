/*
 * XREFs of ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C01CEBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C00E8060 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C01D447C (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C01D696C (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qHL @ 0x1C01DB120 (WPP_RECORDER_AND_TRACE_SF_qHL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCaptured(
        struct _KTHREAD **this,
        _QWORD *a2,
        struct tagINPUTDEST *a3)
{
  struct tagINPUTDEST *v6; // rbx
  __int64 v7; // rdx
  CTouchProcessor *v8; // rcx
  __int64 v9; // r8
  const struct CPointerMsgData *MsgData; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  CInputDest *v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // xmm4
  __int128 v18; // xmm5
  __int128 v19; // xmm6
  char v20; // r10
  bool v21; // di
  __int64 v22; // r11
  int v23; // r8d
  char v24; // r10
  int v25; // edx
  int v27; // [rsp+20h] [rbp-98h]
  CInpLockGuard *v28[8]; // [rsp+60h] [rbp-58h] BYREF
  CInputDest *v29; // [rsp+C0h] [rbp+8h] BYREF

  v6 = 0LL;
  v29 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v28, (struct CInpLockGuard *)(this + 4), a2);
  CTouchProcessor::GetPointerCapture(this, (__int64)a2, 0LL, &v29, 0LL);
  if ( v29 )
  {
    MsgData = CTouchProcessor::GetMsgData(v8, (__int64)a2, v9);
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *((_DWORD *)MsgData + 7),
      *((_WORD *)MsgData + 8),
      0x200000u);
    if ( this[5] != KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v9);
    v7 = a2[5];
    if ( v7 )
      CTouchProcessor::SetDelegateActionInt(v12, v7, 5LL);
    v13 = v29;
    v14 = *((_OWORD *)v29 + 1);
    v15 = *((_OWORD *)v29 + 2);
    v16 = *((_OWORD *)v29 + 3);
    v17 = *((_OWORD *)v29 + 4);
    v18 = *((_OWORD *)v29 + 5);
    v19 = *((_OWORD *)v29 + 6);
    *(_OWORD *)a3 = *(_OWORD *)v29;
    *((_OWORD *)a3 + 1) = v14;
    *((_OWORD *)a3 + 2) = v15;
    *((_OWORD *)a3 + 3) = v16;
    *((_OWORD *)a3 + 4) = v17;
    *((_OWORD *)a3 + 5) = v18;
    *((_OWORD *)a3 + 6) = v19;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v20 = 0;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      CInputDest::GetWindowHandle(v13);
      LOBYTE(v23) = v21;
      LOBYTE(v25) = v24;
      WPP_RECORDER_AND_TRACE_SF_qHL(*(_QWORD *)(v22 + 24), v25, v23, WPP_MAIN_CB.Queue.ListEntry.Flink, v27);
    }
    v6 = a3;
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v28, v7, v9);
  return v6;
}
