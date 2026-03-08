/*
 * XREFs of ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x1C01F9528
 * Callers:
 *     NtUserGetPointerProprietaryId @ 0x1C0170CC0 (NtUserGetPointerProprietaryId.c)
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00C9BF0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00F2348 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C01E8508 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 */

char __fastcall CTouchProcessor::GetPointerProprietaryId(struct _KTHREAD **this, unsigned __int16 a2, struct _GUID *a3)
{
  struct CInputPointerNode *NodeById; // rax
  __int64 v7; // rdx
  char v8; // bl
  CInpLockGuard *v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  *a3 = 0LL;
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v10, (struct CInpLockGuard *)(this + 4), 0);
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( !NodeById )
    goto LABEL_6;
  v7 = *((_QWORD *)NodeById + 5) - *(_QWORD *)&a3->Data1;
  if ( !v7 )
    v7 = *((_QWORD *)NodeById + 6) - *(_QWORD *)a3->Data4;
  if ( v7 )
  {
    v8 = 1;
    *a3 = *(struct _GUID *)((char *)NodeById + 40);
  }
  else
  {
LABEL_6:
    v8 = 0;
  }
  if ( !v11 )
    CInpLockGuard::UnLock(v10);
  return v8;
}
