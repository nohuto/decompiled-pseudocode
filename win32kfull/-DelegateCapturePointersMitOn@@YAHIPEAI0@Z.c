__int64 __fastcall DelegateCapturePointersMitOn(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rax
  struct CInpLockGuard *TouchProcessorLock; // rax
  void *v9; // r8
  unsigned int v10; // edi
  int v11; // ecx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // esi
  __int64 v16; // rax
  void *v17; // rbx
  __int64 v18; // rcx
  _BYTE v20[56]; // [rsp+38h] [rbp-50h] BYREF
  char v21; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a1;
  EnterCrit(0LL, 0LL);
  v7 = SGDGetUserSessionState(v6);
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(v7 + 3424));
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v20, TouchProcessorLock, v9);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v21);
  v10 = 0;
  if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x2000) == 0 )
  {
    v11 = 5;
LABEL_16:
    UserSetLastError(v11);
    goto LABEL_17;
  }
  if ( !(_DWORD)v5
    || !a2
    || !a3
    || a2 == a3
    || (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(gptiCurrent),
        ProbeForRead(a2, 4 * v5, CurrentProcessWow64Process != 0 ? 1 : 4),
        v14 = PsGetCurrentProcessWow64Process(v13),
        ProbeForRead(a3, 4 * v5, v14 != 0 ? 1 : 4),
        v15 = (_DWORD)v5 << 7,
        (unsigned __int64)(v5 << 7) > 0xFFFFFFFF) )
  {
    v11 = 87;
    goto LABEL_16;
  }
  if ( v15 >= 0x2710000 || (v16 = Win32AllocPoolZInit(v15, 1885631317LL), (v17 = (void *)v16) == 0LL) )
  {
    v11 = 8;
    goto LABEL_16;
  }
  if ( (unsigned int)ValidateDelegatePointerList(v5, (__int64)a2, (__int64)a3, v16) )
    v10 = DelegateCapturePointers(v5, (__int64)v17);
  else
    UserSetLastError(87);
  Win32FreePool(v17);
LABEL_17:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v21);
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v20);
  UserSessionSwitchLeaveCrit(v18);
  return v10;
}
