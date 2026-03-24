/*
 * XREFs of ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C0197350
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C007CAC0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0095988 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCC20 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C0191E34 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C019BA18 (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C019DC90 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 *     WPP_RECORDER_SF_qHL @ 0x1C01A1BC8 (WPP_RECORDER_SF_qHL.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCaptured(
        struct _KTHREAD **this,
        __int64 a2,
        struct tagINPUTDEST *a3)
{
  struct tagINPUTDEST *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  CInputDest *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __int128 v13; // xmm4
  __int128 v14; // xmm5
  __int128 v15; // xmm6
  unsigned int WindowHandle; // eax
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  int v21; // [rsp+20h] [rbp-78h]
  CInpLockGuard *v22[6]; // [rsp+40h] [rbp-58h] BYREF
  CInputDest *v23; // [rsp+B8h] [rbp+20h] BYREF

  v6 = 0LL;
  v23 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v22,
    (struct CInpLockGuard *)(this + 5),
    (void *)a2);
  CTouchProcessor::GetPointerCapture(this, a2, 0, &v23, 0LL);
  if ( v23 )
  {
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *(_DWORD *)(a2 + 28),
      *(_WORD *)(a2 + 16),
      0x200000u);
    if ( this[6] != KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10191);
    v8 = *(_QWORD *)(a2 + 40);
    if ( v8 )
      CTouchProcessor::SetDelegateActionInt(v7, v8, 5LL);
    v9 = v23;
    v10 = *((_OWORD *)v23 + 1);
    v11 = *((_OWORD *)v23 + 2);
    v12 = *((_OWORD *)v23 + 3);
    v13 = *((_OWORD *)v23 + 4);
    v14 = *((_OWORD *)v23 + 5);
    v15 = *((_OWORD *)v23 + 6);
    *(_OWORD *)a3 = *(_OWORD *)v23;
    *((_OWORD *)a3 + 1) = v10;
    *((_OWORD *)a3 + 2) = v11;
    *((_OWORD *)a3 + 3) = v12;
    *((_OWORD *)a3 + 4) = v13;
    *((_OWORD *)a3 + 5) = v14;
    *((_OWORD *)a3 + 6) = v15;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WindowHandle = (unsigned int)CInputDest::GetWindowHandle(v9);
      WPP_RECORDER_SF_qHL(WindowHandle, v17, v18, v19, v21, WindowHandle, *(_WORD *)(a2 + 16), *(_DWORD *)(a2 + 28));
    }
    v6 = a3;
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v22);
  return v6;
}
