/*
 * XREFs of ?GetPointerBarrelVisualization@CTouchProcessor@@QEAAHG@Z @ 0x1C01F62D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00C9BF0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00F2348 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C01E8508 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerBarrelVisualization(struct _KTHREAD **this, unsigned __int16 a2)
{
  unsigned int v4; // esi
  struct CInputPointerNode *NodeById; // rax
  int v6; // eax
  CInpLockGuard *v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  v4 = 1;
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v8, (struct CInpLockGuard *)(this + 4), 1);
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( NodeById )
  {
    v6 = *((_DWORD *)NodeById + 75);
    if ( (v6 & 0x800) != 0 )
      v4 = (v6 & 0x400) != 0 ? 1 : -1;
    else
      v4 = 0;
  }
  if ( !v9 )
    CInpLockGuard::UnLock(v8);
  return v4;
}
