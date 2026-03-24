/*
 * XREFs of ?GetPointerBarrelVisualization@CTouchProcessor@@QEAAHG@Z @ 0x1C0191DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00CCCC0 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C0187434 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018E2A4 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerBarrelVisualization(struct _KTHREAD **this, unsigned __int16 a2)
{
  unsigned int v4; // esi
  struct CInputPointerNode *NodeById; // rax
  int v6; // eax
  CInpLockGuard *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 1;
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v8, (struct CInpLockGuard *)(this + 5), 1);
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( NodeById )
  {
    v6 = *((_DWORD *)NodeById + 70);
    if ( (v6 & 0x800) != 0 )
      v4 = (v6 & 0x400) != 0 ? 1 : -1;
    else
      v4 = 0;
  }
  CInpLockGuardShared::~CInpLockGuardShared(v8);
  return v4;
}
