/*
 * XREFs of ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01CBE48
 * Callers:
 *     NtUserDelegateCapturePointers @ 0x1C01542A0 (NtUserDelegateCapturePointers.c)
 * Callees:
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00156F0 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0015734 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ValidateDelegatePointerList @ 0x1C01C44B8 (ValidateDelegatePointerList.c)
 *     _DelegateCapturePointers @ 0x1C01C4B28 (_DelegateCapturePointers.c)
 */

__int64 __fastcall DelegateCapturePointersMitOn(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rax
  struct CInpLockGuard *TouchProcessorLock; // rax
  void *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // edi
  int v13; // ecx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // esi
  __int64 v20; // rax
  void *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _BYTE v29[56]; // [rsp+38h] [rbp-50h] BYREF
  char v30; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a1;
  EnterCrit(0LL, 0LL);
  v7 = SGDGetUserSessionState(v6);
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(v7 + 3424));
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v29, TouchProcessorLock, v9);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v30);
  v12 = 0;
  if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x2000) == 0 )
  {
    v13 = 5;
LABEL_16:
    UserSetLastError(v13);
    goto LABEL_17;
  }
  if ( !(_DWORD)v5
    || !a2
    || !a3
    || a2 == a3
    || (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(gptiCurrent, v10, v11),
        ProbeForRead(a2, 4 * v5, CurrentProcessWow64Process != 0 ? 1 : 4),
        v18 = PsGetCurrentProcessWow64Process(v16, v15, v17),
        ProbeForRead(a3, 4 * v5, v18 != 0 ? 1 : 4),
        v19 = (_DWORD)v5 << 7,
        (unsigned __int64)(v5 << 7) > 0xFFFFFFFF) )
  {
    v13 = 87;
    goto LABEL_16;
  }
  if ( v19 >= 0x2710000 || (v20 = Win32AllocPoolZInit(v19, 1885631317LL), (v21 = (void *)v20) == 0LL) )
  {
    v13 = 8;
    goto LABEL_16;
  }
  if ( (unsigned int)ValidateDelegatePointerList(v5, (__int64)a2, (__int64)a3, v20) )
    v12 = DelegateCapturePointers(v5, (__int64)v21);
  else
    UserSetLastError(87);
  Win32FreePool(v21);
LABEL_17:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v30, v22, v23);
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v29);
  UserSessionSwitchLeaveCrit(v25, v24, v26, v27);
  return v12;
}
