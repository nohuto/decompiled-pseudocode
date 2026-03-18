/*
 * XREFs of ?SetPointerVisualization@CTouchProcessor@@QEAAHGHPEAHH@Z @ 0x1C01D7200
 * Callers:
 *     <none>
 * Callees:
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E7DA2 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerVisualization(
        CTouchProcessor *this,
        unsigned __int16 a2,
        int a3,
        int *a4,
        __int16 a5)
{
  struct CInputPointerNode *NodeById; // rax
  unsigned int v10; // ebx
  int v11; // esi
  PERESOURCE *v13[8]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v13,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  v10 = 0;
  if ( NodeById )
  {
    v11 = *((_DWORD *)NodeById + 75) ^ (*((_DWORD *)NodeById + 75) ^ (a3 << 7)) & 0x80;
    *((_DWORD *)NodeById + 75) = v11;
    if ( a4 )
      v11 ^= ((unsigned __int16)v11 ^ (unsigned __int16)((unsigned __int16)*a4 << 8)) & 0x100;
    v10 = 1;
    *((_DWORD *)NodeById + 75) = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(a5 << 9)) & 0x200;
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v13);
  return v10;
}
