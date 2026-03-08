/*
 * XREFs of ?GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z @ 0x1C01FAB50
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00C9BF0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00F2348 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C01E8508 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerVisualization(
        struct _KTHREAD **this,
        unsigned __int16 a2,
        unsigned int *a3)
{
  unsigned int v6; // esi
  struct CInputPointerNode *NodeById; // rax
  _DWORD *v8; // rcx
  CInpLockGuard *v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  v6 = 1;
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v10, (struct CInpLockGuard *)(this + 4), 1);
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( NodeById )
  {
    v8 = (_DWORD *)((char *)NodeById + 300);
    if ( a3 )
      *a3 = (*v8 & 0x200u) >> 9;
    if ( (*v8 & 0x80u) == 0 && (*v8 & 0x100) == 0 )
      v6 = 0;
  }
  if ( !v11 )
    CInpLockGuard::UnLock(v10);
  return v6;
}
