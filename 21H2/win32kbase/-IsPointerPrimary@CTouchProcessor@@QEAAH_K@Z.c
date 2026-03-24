/*
 * XREFs of ?IsPointerPrimary@CTouchProcessor@@QEAAH_K@Z @ 0x1C0196E60
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00CCB60 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C0187504 (--1CInpLockGuardShared@@QEAA@XZ.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerPrimary(CTouchProcessor *this, __int64 a2)
{
  unsigned int v3; // ebx
  CInpLockGuard *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v5, (CTouchProcessor *)((char *)this + 40), 1);
  v3 = 0;
  if ( a2 )
    v3 = -__CFSHR__(*(_DWORD *)(a2 + 36), 5);
  CInpLockGuardShared::~CInpLockGuardShared(v5);
  return v3;
}
