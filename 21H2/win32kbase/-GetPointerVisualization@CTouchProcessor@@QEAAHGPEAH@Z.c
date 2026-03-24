/*
 * XREFs of ?GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z @ 0x1C0195730
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00CCB60 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C0187504 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018E374 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerVisualization(
        struct _KTHREAD **this,
        unsigned __int16 a2,
        unsigned int *a3)
{
  unsigned int v6; // esi
  struct CInputPointerNode *NodeById; // rax
  int v8; // eax
  CInpLockGuard *v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = 1;
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v10, (struct CInpLockGuard *)(this + 5), 1);
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( NodeById )
  {
    if ( a3 )
      *a3 = (*((_DWORD *)NodeById + 70) & 0x200u) >> 9;
    v8 = *((_DWORD *)NodeById + 70);
    if ( (v8 & 0x80u) == 0 && (v8 & 0x100) == 0 )
      v6 = 0;
  }
  CInpLockGuardShared::~CInpLockGuardShared(v10);
  return v6;
}
