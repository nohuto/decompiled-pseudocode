/*
 * XREFs of ?GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z @ 0x1C01CD420
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00DC614 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E7DA2 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C01BD28C (--1CInpLockGuardShared@@QEAA@XZ.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerVisualization(
        CTouchProcessor *this,
        unsigned __int16 a2,
        unsigned int *a3)
{
  unsigned int v6; // esi
  struct CInputPointerNode *NodeById; // rax
  int v8; // eax
  PERESOURCE *v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = 1;
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v10, (CTouchProcessor *)((char *)this + 32), 1);
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( NodeById )
  {
    if ( a3 )
      *a3 = (*((_DWORD *)NodeById + 75) & 0x200u) >> 9;
    v8 = *((_DWORD *)NodeById + 75);
    if ( (v8 & 0x80u) == 0 && (v8 & 0x100) == 0 )
      v6 = 0;
  }
  CInpLockGuardShared::~CInpLockGuardShared(v10);
  return v6;
}
