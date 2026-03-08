/*
 * XREFs of ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C01F02E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C98C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C99B0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C01EFAD0 (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 *     ?GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z @ 0x1C01F635C (-GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C0202150 (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 */

void __fastcall CTouchProcessor::DelegateImplictCaptureAndReleaseIfNeeded(CTouchProcessor *this, void *a2)
{
  struct CPointerCaptureData *PointerCaptureData; // rax
  struct CPointerCaptureData *v5; // rax
  __int64 v6; // rcx
  CInpLockGuard *v7[9]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v7,
    (CTouchProcessor *)((char *)this + 32),
    a2);
  PointerCaptureData = CTouchProcessor::GetPointerCaptureData(this, (unsigned __int64)a2);
  if ( !PointerCaptureData || (*((_DWORD *)PointerCaptureData + 76) & 4) == 0 )
    CTouchProcessor::DelegateCapturePointerImplicit((struct _KTHREAD **)this, (unsigned __int64)a2);
  v5 = CTouchProcessor::GetPointerCaptureData(this, (unsigned __int64)a2);
  if ( v5 )
    CTouchProcessor::SetDelegateActionInt(v6, v5, 6LL);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v7);
}
