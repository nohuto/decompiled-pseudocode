/*
 * XREFs of ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C01C45D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C01C423C (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C01D447C (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DelegateImplictCaptureAndReleaseIfNeeded(struct _KTHREAD **this, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  PERESOURCE *v9[9]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v9,
    (struct CInpLockGuard *)(this + 4),
    a2);
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  v7 = a2[5];
  if ( !v7 || (*(_DWORD *)(v7 + 304) & 4) == 0 )
    CTouchProcessor::DelegateCapturePointerImplicit(this, (__int64)a2);
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  v8 = a2[5];
  if ( v8 )
    CTouchProcessor::SetDelegateActionInt(v5, v8, 6LL);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v9);
}
