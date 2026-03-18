/*
 * XREFs of ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C01CE330
 * Callers:
 *     <none>
 * Callees:
 *     IsMiPActive @ 0x1C003C2F4 (IsMiPActive.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC94C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE82C (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01D30A4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C02078CC (ApiSetEditionFindThreadPointerData.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMessageTouchpad(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        void *a3,
        unsigned __int16 a4)
{
  unsigned int IsTouchpad; // ebx
  __int64 ThreadPointerData; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  CTouchProcessor *v12; // rcx
  __int64 v13; // r8
  const struct CPointerMsgData *MsgData; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  const struct CPointerMsgData *v17; // rdi
  const struct CPointerInputFrame *v18; // rbp
  __int64 v19; // r8
  CInpLockGuard *v21[7]; // [rsp+20h] [rbp-38h] BYREF

  IsTouchpad = 0;
  if ( (*((_DWORD *)a2 + 314) & 0x2000) == 0 )
  {
    if ( !a3 )
    {
      CInpLockGuardExclusive::CInpLockGuardExclusive(
        (CInpLockGuardExclusive *)v21,
        (CTouchProcessor *)((char *)this + 32),
        0LL);
      ThreadPointerData = ApiSetEditionFindThreadPointerData((char *)a2 + 1112, a4);
      if ( ThreadPointerData )
      {
        if ( *(_DWORD *)(ThreadPointerData + 20) == 5 )
          IsTouchpad = (_DWORD)a3 + 1;
      }
      goto LABEL_13;
    }
    if ( a3 == (void *)-1LL )
      return 1;
    if ( IsMiPActive((__int64)a2, 0LL) && a4 )
      return IsTouchpad;
    CInpLockGuardExclusive::CInpLockGuardExclusive(
      (CInpLockGuardExclusive *)v21,
      (CTouchProcessor *)((char *)this + 32),
      a3);
    MsgData = CTouchProcessor::GetMsgData(v12, (__int64)a3, v13);
    v17 = MsgData;
    if ( MsgData )
    {
      v18 = CTouchProcessor::ReferenceFrame(this, *((_DWORD *)MsgData + 7));
      if ( v18 )
      {
        IsTouchpad = CPointerInfoNode::IsTouchpad((CPointerInfoNode *)(*((_QWORD *)v18 + 30)
                                                                     + 480LL * *((unsigned int *)v17 + 8)));
        CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v18, v19);
LABEL_13:
        CInpLockGuardExclusive::~CInpLockGuardExclusive(v21, v10, v11);
        return IsTouchpad;
      }
    }
    CInpLockGuardExclusive::~CInpLockGuardExclusive(v21, v15, v16);
  }
  return 0LL;
}
