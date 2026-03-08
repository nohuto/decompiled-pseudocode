/*
 * XREFs of ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C00F2DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C9B24 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C00C9B90 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C00F5E90 (ApiSetEditionFindThreadPointerData.c)
 *     IsMiPActive @ 0x1C0155C14 (IsMiPActive.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C01FC070 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C0200BB4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C02070EC (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMessageTouchpad(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        void *a3,
        unsigned __int16 a4)
{
  unsigned int IsTouchpad; // ebx
  __int64 ThreadPointerData; // rax
  CTouchProcessor *v10; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v12; // rdi
  __int64 v13; // rsi
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF

  IsTouchpad = 0;
  if ( (*((_DWORD *)a2 + 318) & 0x2000) == 0 && (*((_DWORD *)a2 + 319) & 0x40) == 0 )
  {
    if ( !a3 )
    {
      CInpLockGuardExclusive::CInpLockGuardExclusive(
        (CInpLockGuardExclusive *)v15,
        (CTouchProcessor *)((char *)this + 32),
        0LL);
      ThreadPointerData = ApiSetEditionFindThreadPointerData((char *)a2 + 1128, a4);
      if ( ThreadPointerData )
      {
        if ( *(_DWORD *)(ThreadPointerData + 20) == 5 )
          IsTouchpad = (_DWORD)a3 + 1;
      }
      goto LABEL_14;
    }
    if ( a3 == (void *)-1LL )
      return 1;
    if ( (unsigned int)IsMiPActive(a2, 0LL) && a4 )
      return IsTouchpad;
    CInpLockGuardExclusive::CInpLockGuardExclusive(
      (CInpLockGuardExclusive *)v15,
      (CTouchProcessor *)((char *)this + 32),
      a3);
    NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v10, (unsigned __int64)a3);
    v12 = NonConstMsgData;
    if ( NonConstMsgData )
    {
      v13 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7));
      if ( v13 )
      {
        IsTouchpad = CPointerInfoNode::IsTouchpad((CPointerInfoNode *)(*(_QWORD *)(v13 + 240)
                                                                     + 480LL * *((unsigned int *)v12 + 8)));
        CTouchProcessor::UnreferenceFrame(this, v13);
LABEL_14:
        CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v15);
        return IsTouchpad;
      }
    }
    CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v15);
  }
  return 0LL;
}
