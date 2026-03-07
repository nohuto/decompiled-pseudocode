__int64 __fastcall CTouchProcessor::SetPointerVisualization(
        struct _KTHREAD **this,
        unsigned __int16 a2,
        int a3,
        int *a4,
        __int16 a5)
{
  struct CInputPointerNode *NodeById; // rax
  unsigned int v10; // ebx
  int v11; // esi
  CInpLockGuard *v13[8]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v13,
    (struct CInpLockGuard *)(this + 4),
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
