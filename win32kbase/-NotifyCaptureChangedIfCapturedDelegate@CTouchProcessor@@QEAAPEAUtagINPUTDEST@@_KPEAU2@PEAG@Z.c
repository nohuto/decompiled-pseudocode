/*
 * XREFs of ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C01FC600
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C9B24 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C00C9B90 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C00F266A (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z @ 0x1C01F635C (-GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C0202150 (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C0204E10 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCapturedDelegate(
        CTouchProcessor *this,
        void *a2,
        struct tagINPUTDEST *a3,
        unsigned __int16 *a4)
{
  struct tagINPUTDEST *v7; // rbx
  CTouchProcessor *v9; // rcx
  struct CInputDest *v10; // rbp
  struct CPointerMsgData *NonConstMsgData; // r14
  struct CPointerCaptureData *PointerCaptureData; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // xmm4
  __int128 v18; // xmm5
  __int128 v19; // xmm6
  _BYTE v21[48]; // [rsp+30h] [rbp-68h] BYREF
  struct CInputDest *v22; // [rsp+A0h] [rbp+8h] BYREF

  v7 = 0LL;
  v22 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v21,
    (CTouchProcessor *)((char *)this + 32),
    a2);
  CTouchProcessor::GetPointerCapture(this, (unsigned __int64)a2, 0, &v22, 0LL);
  v10 = v22;
  if ( v22 )
  {
    NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v9, (__int64)a2);
    CTouchProcessor::SetPointerInfoNodeFlag(
      this,
      *((_DWORD *)NonConstMsgData + 7),
      *((_WORD *)NonConstMsgData + 8),
      0x200000u);
    PointerCaptureData = CTouchProcessor::GetPointerCaptureData(this, (__int64)a2);
    if ( PointerCaptureData )
      CTouchProcessor::SetDelegateActionInt(v13, PointerCaptureData, 5LL);
    v7 = a3;
    *a4 = *((_WORD *)NonConstMsgData + 8);
    v14 = *((_OWORD *)v10 + 1);
    v15 = *((_OWORD *)v10 + 2);
    v16 = *((_OWORD *)v10 + 3);
    v17 = *((_OWORD *)v10 + 4);
    v18 = *((_OWORD *)v10 + 5);
    v19 = *((_OWORD *)v10 + 6);
    *(_OWORD *)a3 = *(_OWORD *)v10;
    *((_OWORD *)a3 + 1) = v14;
    *((_OWORD *)a3 + 2) = v15;
    *((_OWORD *)a3 + 3) = v16;
    *((_OWORD *)a3 + 4) = v17;
    *((_OWORD *)a3 + 5) = v18;
    *((_OWORD *)a3 + 6) = v19;
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v21);
  return v7;
}
