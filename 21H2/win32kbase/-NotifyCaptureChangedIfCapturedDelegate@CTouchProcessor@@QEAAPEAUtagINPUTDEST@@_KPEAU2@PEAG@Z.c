/*
 * XREFs of ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C0197580
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C007B3E0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCAC0 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C0191F04 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C019BAE8 (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C019DD60 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCapturedDelegate(
        struct _KTHREAD **this,
        __int64 a2,
        struct tagINPUTDEST *a3,
        unsigned __int16 *a4)
{
  struct tagINPUTDEST *v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int128 v14; // xmm4
  __int128 v15; // xmm5
  __int128 v16; // xmm6
  struct CInputDest *v18; // [rsp+30h] [rbp-68h] BYREF
  CInpLockGuard *v19[7]; // [rsp+38h] [rbp-60h] BYREF

  v7 = 0LL;
  v18 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v19,
    (struct CInpLockGuard *)(this + 5),
    (void *)a2);
  CTouchProcessor::GetPointerCapture(this, a2, 0, &v18, 0LL);
  if ( v18 )
  {
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *(_DWORD *)(a2 + 28),
      *(_WORD *)(a2 + 16),
      0x200000u);
    if ( this[6] != KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10191);
    v10 = *(_QWORD *)(a2 + 40);
    if ( v10 )
      CTouchProcessor::SetDelegateActionInt(v9, v10, 5LL);
    v7 = a3;
    *a4 = *(_WORD *)(a2 + 16);
    v11 = *((_OWORD *)v18 + 1);
    v12 = *((_OWORD *)v18 + 2);
    v13 = *((_OWORD *)v18 + 3);
    v14 = *((_OWORD *)v18 + 4);
    v15 = *((_OWORD *)v18 + 5);
    v16 = *((_OWORD *)v18 + 6);
    *(_OWORD *)a3 = *(_OWORD *)v18;
    *((_OWORD *)a3 + 1) = v11;
    *((_OWORD *)a3 + 2) = v12;
    *((_OWORD *)a3 + 3) = v13;
    *((_OWORD *)a3 + 4) = v14;
    *((_OWORD *)a3 + 5) = v15;
    *((_OWORD *)a3 + 6) = v16;
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v19);
  return v7;
}
