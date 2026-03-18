/*
 * XREFs of ?GetPointerDownFrame@CTouchProcessor@@QEAAK_K@Z @ 0x1C01CA500
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDownFrame(struct _KTHREAD **this, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned int v8; // ebx
  PERESOURCE *v10[9]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v10,
    (struct CInpLockGuard *)(this + 4),
    a2);
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  v7 = a2[5];
  v8 = 0;
  if ( v7 )
    v8 = *(_DWORD *)(v7 + 24);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v10);
  return v8;
}
