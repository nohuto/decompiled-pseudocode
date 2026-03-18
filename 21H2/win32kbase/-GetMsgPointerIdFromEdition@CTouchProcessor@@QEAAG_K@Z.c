/*
 * XREFs of ?GetMsgPointerIdFromEdition@CTouchProcessor@@QEAAG_K@Z @ 0x1C01C9190
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetMsgPointerIdFromEdition(CTouchProcessor *this, void *a2)
{
  CTouchProcessor *v3; // rcx
  __int64 v4; // r8
  const struct CPointerMsgData *MsgData; // rax
  unsigned __int16 v6; // bx
  PERESOURCE *v8[9]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v8,
    (CTouchProcessor *)((char *)this + 32),
    a2);
  MsgData = CTouchProcessor::GetMsgData(v3, (__int64)a2, v4);
  v6 = 0;
  if ( MsgData )
    v6 = *((_WORD *)MsgData + 8);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v8);
  return v6;
}
