void __fastcall CTouchProcessor::SetPointerBarrelVisualization(struct _KTHREAD **this, unsigned __int16 a2, char a3)
{
  struct CInputPointerNode *NodeById; // rax
  CInpLockGuard *v7[9]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v7,
    (struct CInpLockGuard *)(this + 4),
    0LL);
  NodeById = CTouchProcessor::FindNodeById(this, a2, 1, 0);
  if ( NodeById )
    *((_DWORD *)NodeById + 75) = *((_DWORD *)NodeById + 75) & 0xFFFFFBFF | ((a3 & 1 | 2) << 10);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v7);
}
