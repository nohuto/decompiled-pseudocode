void __fastcall CmpDereferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  bool v6; // cl
  void *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  CmpInitializeDelayDerefContext(&v11);
  v2 = *(_QWORD *)BugCheckParameter2;
  v3 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( *(_QWORD *)BugCheckParameter2 <= 1uLL )
  {
LABEL_8:
    v7 = *(void **)(BugCheckParameter2 + 32);
    CmpLockHashEntryExclusiveByKcb(BugCheckParameter2);
    CmpLockKcbExclusive(BugCheckParameter2);
    v8 = *(_QWORD *)(BugCheckParameter2 + 192);
    v9 = 0LL;
    if ( v8 )
    {
      v10 = *(_QWORD *)(v8 + 24);
      if ( v10 )
      {
        v9 = *(_QWORD *)(v10 + 16);
        CmpUnlockKcb(BugCheckParameter2);
        CmpLockKcbExclusive(v9);
        CmpLockKcbExclusive(BugCheckParameter2);
      }
    }
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2);
    CmpUnlockKcb(BugCheckParameter2);
    if ( v9 )
      CmpUnlockKcb(v9);
    CmpUnlockHashEntry(v7);
    CmpDrainDelayDerefContext((_QWORD **)&v11);
  }
  else
  {
    while ( 1 )
    {
      v4 = v2 - 1;
      v5 = v2;
      v6 = v2 == 3 && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v3 + 2944) == 1;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v4, v2);
      if ( v2 == v5 )
        break;
      if ( v2 <= 1 )
        goto LABEL_8;
    }
    if ( v2 < v4 )
      KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter2, 0LL, 0LL);
    if ( v6 )
      CmpDoQueueLateUnloadWorker(v3);
  }
}
