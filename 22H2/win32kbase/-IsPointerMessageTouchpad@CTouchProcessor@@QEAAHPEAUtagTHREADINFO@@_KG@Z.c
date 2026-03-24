/*
 * XREFs of ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0196B40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C007CAC0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     IsMiPActive @ 0x1C0096998 (IsMiPActive.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCC20 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD2DC (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C0197090 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019ABD8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C01CB69C (ApiSetEditionFindThreadPointerData.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMessageTouchpad(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned int *a3,
        unsigned __int16 a4)
{
  unsigned int IsTouchpad; // ebx
  __int64 v10; // r8
  __int64 ThreadPointerData; // rax
  const struct CPointerInputFrame *v12; // rbp
  CInpLockGuard *v13[7]; // [rsp+20h] [rbp-38h] BYREF

  IsTouchpad = 0;
  if ( (*((_DWORD *)a2 + 308) & 0x2000) != 0 )
    return 0LL;
  if ( !a3 )
  {
    CInpLockGuardExclusive::CInpLockGuardExclusive(
      (CInpLockGuardExclusive *)v13,
      (CTouchProcessor *)((char *)this + 40),
      0LL);
    ThreadPointerData = ApiSetEditionFindThreadPointerData((char *)a2 + 1088, a4, v10);
    if ( ThreadPointerData )
      IsTouchpad = *(_DWORD *)(ThreadPointerData + 20) == 5;
LABEL_13:
    CInpLockGuardExclusive::~CInpLockGuardExclusive(v13);
    return IsTouchpad;
  }
  if ( a3 != (unsigned int *)-1LL )
  {
    if ( IsMiPActive((__int64)a2, 0LL) && a4 )
      return IsTouchpad;
    CInpLockGuardExclusive::CInpLockGuardExclusive(
      (CInpLockGuardExclusive *)v13,
      (CTouchProcessor *)((char *)this + 40),
      a3);
    v12 = CTouchProcessor::ReferenceFrame(this, a3[7]);
    if ( !v12 )
    {
      CInpLockGuardExclusive::~CInpLockGuardExclusive(v13);
      return 0LL;
    }
    IsTouchpad = CPointerInfoNode::IsTouchpad((CPointerInfoNode *)(*((_QWORD *)v12 + 17) + 480LL * a3[8]));
    CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v12);
    goto LABEL_13;
  }
  return 1;
}
