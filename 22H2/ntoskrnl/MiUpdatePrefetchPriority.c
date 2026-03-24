/*
 * XREFs of MiUpdatePrefetchPriority @ 0x140337770
 * Callers:
 *     MiValidFault @ 0x140209710 (MiValidFault.c)
 *     MiPrefetchJumpVad @ 0x14053940C (MiPrefetchJumpVad.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140218590 (MiGetPfnPriority.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiLocateAddress @ 0x14025B070 (MiLocateAddress.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUpdatePfnPriority @ 0x140339DB4 (MiUpdatePfnPriority.c)
 *     MiLockTransitionLeafPage @ 0x140363DD4 (MiLockTransitionLeafPage.c)
 */

char __fastcall MiUpdatePrefetchPriority(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  ULONG_PTR v6; // r9
  unsigned __int64 v7; // rbx
  __int64 CurrentThread; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v22; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp+10h] BYREF

  v5 = *(_DWORD *)(a1 + 80) & 7;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = *(_QWORD *)v6;
  LOBYTE(CurrentThread) = 0;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL )
  {
    LOBYTE(CurrentThread) = -8;
    if ( v6 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      CurrentThread = (__int64)KeGetCurrentThread();
      if ( *(_BYTE *)(*(_QWORD *)(CurrentThread + 184) + 912LL) != 1
        && (v7 & 1) != 0
        && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
      {
        CurrentThread = (__int64)KeGetCurrentThread();
        v16 = *(_QWORD *)(*(_QWORD *)(CurrentThread + 184) + 1928LL);
        if ( v16 )
        {
          CurrentThread = *(_QWORD *)(v16 + 8 * ((v6 >> 3) & 0x1FF));
          v17 = v7 | 0x20;
          if ( (CurrentThread & 0x20) == 0 )
            v17 = *(_QWORD *)v6;
          v7 = v17;
          if ( (CurrentThread & 0x42) != 0 )
            v7 = v17 | 0x42;
        }
      }
    }
  }
  v23 = v7;
  if ( (v7 & 1) == 0 )
  {
    if ( !v7 )
      return CurrentThread;
    if ( (v7 & 0x400) != 0 )
      return CurrentThread;
    if ( (v7 & 0x800) == 0 )
      return CurrentThread;
    CurrentThread = MiLockTransitionLeafPage(v6);
    v13 = CurrentThread;
    if ( !CurrentThread )
      return CurrentThread;
    goto LABEL_10;
  }
  if ( MiPteInShadowRange((unsigned __int64)&v23)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v19 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v23 >> 3) & 0x1FF));
      v20 = v7 | 0x20;
      if ( (v19 & 0x20) == 0 )
        v20 = v7;
      v7 = v20;
      if ( (v19 & 0x42) != 0 )
        v7 = v20 | 0x42;
    }
  }
  v11 = (v7 >> 12) & 0xFFFFFFFFFLL;
  CurrentThread = *(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL);
  v12 = 0x4000000000000LL;
  if ( (CurrentThread & 0x4000000000000LL) != 0 )
  {
    v13 = 48 * v11 - 0x58000000000LL;
    LODWORD(CurrentThread) = *(_BYTE *)(v13 + 35) & 7;
    if ( (_DWORD)CurrentThread != v5 )
    {
      if ( a3 )
      {
        LOBYTE(CurrentThread) = *(_DWORD *)(a3 + 48) & 0x70;
        if ( (_BYTE)CurrentThread == 16 )
          return CurrentThread;
      }
      else if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 304) )
      {
        CurrentThread = (__int64)MiLocateAddress(a2);
        if ( !CurrentThread )
          return CurrentThread;
        LOBYTE(CurrentThread) = *(_DWORD *)(CurrentThread + 48) & 0x70;
        if ( (_BYTE)CurrentThread == 16 )
          return CurrentThread;
      }
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v22, v12, v9, v10);
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
LABEL_10:
      if ( (unsigned int)MiGetPfnPriority(v13) != v5 )
        MiUpdatePfnPriority(v14, v5, 0LL, v15);
      LOBYTE(CurrentThread) = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return CurrentThread;
}
