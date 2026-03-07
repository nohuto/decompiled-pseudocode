__int64 __fastcall GetNextFrameId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  unsigned int v5; // edi
  CInpLockGuard *v7[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_DWORD **)(SGDGetUserSessionState(a1, a2, a3, a4) + 16368);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v7,
    (struct CInpLockGuard *)(v4 + 2),
    0LL);
  v5 = (*v4)++;
  if ( v5 == -1 )
  {
    *v4 = 1;
    ApiSetResetLastSeenFrameId();
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v7);
  return v5;
}
