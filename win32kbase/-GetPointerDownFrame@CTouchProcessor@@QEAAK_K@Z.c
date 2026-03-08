/*
 * XREFs of ?GetPointerDownFrame@CTouchProcessor@@QEAAK_K@Z @ 0x1C01F7720
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C98C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C99B0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z @ 0x1C01F635C (-GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDownFrame(CTouchProcessor *this, void *a2)
{
  struct CPointerCaptureData *PointerCaptureData; // rax
  unsigned int v5; // ebx
  CInpLockGuard *v7[9]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v7,
    (CTouchProcessor *)((char *)this + 32),
    a2);
  PointerCaptureData = CTouchProcessor::GetPointerCaptureData(this, (__int64)a2);
  v5 = 0;
  if ( PointerCaptureData )
    v5 = *((_DWORD *)PointerCaptureData + 6);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v7);
  return v5;
}
