/*
 * XREFs of ?IsPointerPrimary@CTouchProcessor@@QEAAH_K@Z @ 0x1C01FBCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00C9BF0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C01E8508 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerPrimary(CTouchProcessor *this, __int64 a2)
{
  CTouchProcessor *v3; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  unsigned int v5; // ebx
  CInpLockGuard *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v7, (CTouchProcessor *)((char *)this + 32), 1);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v3, a2);
  if ( NonConstMsgData )
    v5 = -__CFSHR__(*((_DWORD *)NonConstMsgData + 9), 5);
  else
    v5 = 0;
  if ( !v8 )
    CInpLockGuard::UnLock(v7);
  return v5;
}
