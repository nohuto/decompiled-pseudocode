/*
 * XREFs of ?GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z @ 0x1C00E80F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C00E819E (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GetPointerCapture(struct _KTHREAD **this, _QWORD *a2, int a3, void **a4, int *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  _BYTE v13[64]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v13,
    (struct CInpLockGuard *)(this + 4),
    a2);
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  v12 = a2[5];
  if ( v12 )
  {
    *a4 = CTouchProcessor::GetPointerCaptureInt(
            (CTouchProcessor *)this,
            (struct CPointerCaptureInfo *)(v12 + 32 + (a3 != 0 ? 0x88 : 0)),
            a5);
  }
  else
  {
    *a4 = 0LL;
    if ( a5 )
      *a5 = 0;
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v13);
}
