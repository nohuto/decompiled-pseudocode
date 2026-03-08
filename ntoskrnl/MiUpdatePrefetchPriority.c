/*
 * XREFs of MiUpdatePrefetchPriority @ 0x1402C95DC
 * Callers:
 *     MiValidFault @ 0x1402C90E0 (MiValidFault.c)
 *     MiPrefetchJumpVad @ 0x14062FBB8 (MiPrefetchJumpVad.c)
 * Callees:
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     MiGetPfnPriority @ 0x14028A3F8 (MiGetPfnPriority.c)
 *     MiUpdatePfnPriority @ 0x14028D35C (MiUpdatePfnPriority.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403334B4 (MiLockVadTree.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

char __fastcall MiUpdatePrefetchPriority(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v5; // edi
  ULONG_PTR v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 **Address; // rax
  __int64 v12; // rdx
  int v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v5 = *(_DWORD *)(a1 + 80) & 7;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = MI_READ_PTE_LOCK_FREE(v6);
  v15 = v7;
  if ( (v7 & 1) != 0 )
  {
    v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v15) >> 12) & 0xFFFFFFFFFFLL;
    if ( v7 > qword_140C65820 )
      return v7;
    v8 = 6 * v7;
    v7 = *(_QWORD *)(48 * v7 - 0x21FFFFFFFFD8LL) >> 54;
    if ( (v7 & 1) == 0 )
      return v7;
    v9 = 8 * v8 - 0x220000000000LL;
    LODWORD(v7) = *(_BYTE *)(v9 + 35) & 7;
    if ( (_DWORD)v7 == v5 )
      return v7;
    if ( a3 )
    {
      LOBYTE(v7) = *(_DWORD *)(a3 + 48) & 0x70;
      if ( (_BYTE)v7 == 16 )
        return v7;
    }
    else if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 296) )
    {
      MiLockVadTree(1LL);
      Address = MiLocateAddress(a2);
      if ( !Address || ((_DWORD)Address[6] & 0x70) == 0x10 )
      {
        LOBYTE(v12) = 17;
        LOBYTE(v7) = MiUnlockVadTree(1LL, v12);
        return v7;
      }
      LOBYTE(v12) = 17;
      MiUnlockVadTree(1LL, v12);
    }
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
  }
  else
  {
    if ( !v7 )
      return v7;
    if ( (v7 & 0x400) != 0 )
      return v7;
    if ( (v7 & 0x800) == 0 )
      return v7;
    v7 = MiLockTransitionLeafPageEx(v6);
    v9 = v7;
    if ( !v7 )
      return v7;
  }
  if ( (unsigned int)MiGetPfnPriority(v9) != v5 )
    MiUpdatePfnPriority(v10);
  LOBYTE(v7) = -1;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v7;
}
