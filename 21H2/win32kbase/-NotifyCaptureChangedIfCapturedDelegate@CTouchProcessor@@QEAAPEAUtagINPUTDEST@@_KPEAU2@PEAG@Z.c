/*
 * XREFs of ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C01CED50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C00E8060 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C01D447C (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C01D696C (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCapturedDelegate(
        struct _KTHREAD **this,
        _QWORD *a2,
        struct tagINPUTDEST *a3,
        unsigned __int16 *a4)
{
  struct tagINPUTDEST *v7; // rbx
  __int64 v9; // rdx
  CTouchProcessor *v10; // rcx
  __int64 v11; // r8
  const struct CPointerMsgData *MsgData; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __int128 v18; // xmm4
  __int128 v19; // xmm5
  __int128 v20; // xmm6
  CInpLockGuard *v22[6]; // [rsp+30h] [rbp-58h] BYREF
  struct CInputDest *v23; // [rsp+90h] [rbp+8h] BYREF

  v7 = 0LL;
  v23 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v22, (struct CInpLockGuard *)(this + 4), a2);
  CTouchProcessor::GetPointerCapture(this, (__int64)a2, 0LL, &v23, 0LL);
  if ( v23 )
  {
    MsgData = CTouchProcessor::GetMsgData(v10, (__int64)a2, v11);
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *((_DWORD *)MsgData + 7),
      *((_WORD *)MsgData + 8),
      0x200000u);
    if ( this[5] != KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v11);
    v9 = a2[5];
    if ( v9 )
      CTouchProcessor::SetDelegateActionInt(v14, v9, 5LL);
    v7 = a3;
    *a4 = *((_WORD *)MsgData + 8);
    v15 = *((_OWORD *)v23 + 1);
    v16 = *((_OWORD *)v23 + 2);
    v17 = *((_OWORD *)v23 + 3);
    v18 = *((_OWORD *)v23 + 4);
    v19 = *((_OWORD *)v23 + 5);
    v20 = *((_OWORD *)v23 + 6);
    *(_OWORD *)a3 = *(_OWORD *)v23;
    *((_OWORD *)a3 + 1) = v15;
    *((_OWORD *)a3 + 2) = v16;
    *((_OWORD *)a3 + 3) = v17;
    *((_OWORD *)a3 + 4) = v18;
    *((_OWORD *)a3 + 5) = v19;
    *((_OWORD *)a3 + 6) = v20;
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v22, v9, v11);
  return v7;
}
