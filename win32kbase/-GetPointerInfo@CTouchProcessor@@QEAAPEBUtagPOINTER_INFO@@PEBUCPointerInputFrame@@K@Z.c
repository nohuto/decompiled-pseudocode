const struct tagPOINTER_INFO *__fastcall CTouchProcessor::GetPointerInfo(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  __int64 v4; // rbx
  int IsValid; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  _BYTE v9[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a3;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v9,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  IsValid = CPointerInfoNode::IsValid((CPointerInfoNode *)(*((_QWORD *)a2 + 30) + 480 * v4));
  v7 = (v6 + 168) & -(__int64)(IsValid != 0);
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v9);
  return (const struct tagPOINTER_INFO *)v7;
}
