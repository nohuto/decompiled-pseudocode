/*
 * XREFs of ?IsPointerPrimary@CTouchProcessor@@QEAAH_K@Z @ 0x1C01CE530
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00DC614 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C01BD28C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerPrimary(CTouchProcessor *this, __int64 a2)
{
  CTouchProcessor *v3; // rcx
  __int64 v4; // r8
  const struct CPointerMsgData *MsgData; // rax
  unsigned int v6; // ebx
  PERESOURCE *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v8, (CTouchProcessor *)((char *)this + 32), 1);
  MsgData = CTouchProcessor::GetMsgData(v3, a2, v4);
  v6 = 0;
  if ( MsgData )
    v6 = -__CFSHR__(*((_DWORD *)MsgData + 9), 5);
  CInpLockGuardShared::~CInpLockGuardShared(v8);
  return v6;
}
