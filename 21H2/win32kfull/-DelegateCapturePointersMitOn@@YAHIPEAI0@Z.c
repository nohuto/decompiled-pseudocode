/*
 * XREFs of ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01F0678
 * Callers:
 *     NtUserDelegateCapturePointers @ 0x1C016CA30 (NtUserDelegateCapturePointers.c)
 * Callees:
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0004870 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0123C6C (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ValidateDelegatePointerList @ 0x1C01EA5B0 (ValidateDelegatePointerList.c)
 *     _DelegateCapturePointers @ 0x1C01EAC24 (_DelegateCapturePointers.c)
 */

__int64 __fastcall DelegateCapturePointersMitOn(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v5; // r12
  struct CInpLockGuard *TouchProcessorLock; // rax
  void *v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  CInpLockGuard *v23[7]; // [rsp+38h] [rbp-50h] BYREF
  char v24; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a1;
  EnterCrit(0LL, 0LL);
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(gpTouchProcessor);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v23, TouchProcessorLock, v7);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v24);
  v9 = gptiCurrent;
  v10 = 0;
  if ( (*(_DWORD *)(gptiCurrent + 1256LL) & 0x2000) == 0 )
  {
    v11 = 5LL;
LABEL_16:
    UserSetLastError(v11, v9);
    goto LABEL_17;
  }
  if ( !(_DWORD)v5
    || !a2
    || !a3
    || a2 == a3
    || (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8),
        ProbeForRead(a2, 4 * v5, CurrentProcessWow64Process != 0 ? 1 : 4),
        v14 = PsGetCurrentProcessWow64Process(v13),
        ProbeForRead(a3, 4 * v5, v14 != 0 ? 1 : 4),
        v15 = (_DWORD)v5 << 7,
        (unsigned __int64)(v5 << 7) > 0xFFFFFFFF) )
  {
    v11 = 87LL;
    goto LABEL_16;
  }
  if ( v15 >= 0x2710000 || (v16 = Win32AllocPoolZInit(v15, 1885631317LL), (v17 = v16) == 0) )
  {
    v11 = 8LL;
    goto LABEL_16;
  }
  if ( (unsigned int)ValidateDelegatePointerList(v5, (__int64)a2, (__int64)a3, v16) )
    v10 = DelegateCapturePointers(v5, v17);
  else
    UserSetLastError(87LL, v18);
  Win32FreePool(v17);
LABEL_17:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v24, v19, v20);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v23);
  UserSessionSwitchLeaveCrit(v21);
  return v10;
}
