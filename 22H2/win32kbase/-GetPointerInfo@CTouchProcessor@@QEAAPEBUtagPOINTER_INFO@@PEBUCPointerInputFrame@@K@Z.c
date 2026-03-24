/*
 * XREFs of ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1C0193A70
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01AD158 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C007CAC0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCC20 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01970E4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::GetPointerInfo(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  __int64 v4; // rbx
  int IsValid; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  CInpLockGuard *v9[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a3;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v9,
    (CTouchProcessor *)((char *)this + 40),
    0LL);
  IsValid = CPointerInfoNode::IsValid((CPointerInfoNode *)(*((_QWORD *)a2 + 17) + 480 * v4));
  v7 = (v6 + 168) & -(__int64)(IsValid != 0);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v9);
  return (const struct tagPOINTER_INFO *)v7;
}
