__int64 __fastcall CmpDereferenceKeyControlBlockWithLock(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // r9d
  bool v7; // dl
  bool v8; // r8
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rax

  v4 = *(_QWORD *)(BugCheckParameter2 + 32);
  result = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( result == 2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v4 + 2944) == 1 )
      return CmpDoQueueLateUnloadWorker(v4);
  }
  else if ( !result )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 )
    {
      v9 = *(_QWORD *)(BugCheckParameter2 + 32);
      CmpCleanUpKcbCacheWithLock(BugCheckParameter2);
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)(v9 + 160) |= 0x80u;
      *(_QWORD *)(v9 + 4176) = CurrentThread;
      *(_DWORD *)(v9 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 4236), 1u) & 0x7F) + 4240) = 31;
      result = *(unsigned int *)(v9 + 160);
      if ( (result & 0x20) == 0 )
      {
        result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 4232), 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          return CmpDeleteHive((PVOID)v9);
      }
    }
    else
    {
      v6 = *(_DWORD *)(BugCheckParameter2 + 8);
      v7 = 0;
      if ( (v6 & 0x20000) == 0 )
        v7 = a3 == 0;
      v8 = 0;
      if ( (v6 & 0x20) == 0 )
        v8 = v7;
      if ( CmpHoldLazyFlush
        && (*(_WORD *)(BugCheckParameter2 + 186) & 0x10) == 0
        && (*(_BYTE *)(BugCheckParameter2 + 8) & 8) == 0
        || !v8 )
      {
        CmpCleanUpKcbCacheWithLock(BugCheckParameter2);
        result = (__int64)KeGetCurrentThread();
        if ( *(_QWORD *)(BugCheckParameter2 + 56) != result && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
          return CmpFreeKeyControlBlock(BugCheckParameter2);
      }
      else
      {
        return CmpAddToDelayedClose(BugCheckParameter2);
      }
    }
  }
  return result;
}
