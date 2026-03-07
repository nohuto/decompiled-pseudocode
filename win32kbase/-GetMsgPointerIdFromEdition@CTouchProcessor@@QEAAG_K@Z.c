__int64 __fastcall CTouchProcessor::GetMsgPointerIdFromEdition(CTouchProcessor *this, void *a2)
{
  unsigned __int64 v2; // rbx
  CTouchProcessor *v3; // rcx
  CInpLockGuard *v5[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (unsigned __int64)a2;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v5,
    (CTouchProcessor *)((char *)this + 32),
    a2);
  LOWORD(v2) = CTouchProcessor::GetMsgPointerId(v3, v2);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v5);
  return (unsigned __int16)v2;
}
