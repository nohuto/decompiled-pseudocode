__int64 __fastcall EtwpUnreferenceGuidEntry(__int64 *BugCheckParameter2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r10
  __int64 v6; // r9
  volatile signed __int64 *v7; // rbp
  __int64 *v8; // rcx
  __int64 **v9; // rax

  v2 = _InterlockedDecrement64(BugCheckParameter2 + 4);
  if ( v2 )
  {
    if ( v2 < 0 )
      KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v5 = ((unsigned __int8)*((_DWORD *)BugCheckParameter2 + 11) ^ (unsigned __int8)(*((_DWORD *)BugCheckParameter2 + 12) ^ *((_DWORD *)BugCheckParameter2 + 13) ^ *((_DWORD *)BugCheckParameter2 + 10))) & 0x3F;
    v6 = BugCheckParameter2[49] + 512;
    --CurrentThread->KernelApcDisable;
    v7 = (volatile signed __int64 *)(v6 + 56 * v5);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v7, 0LL);
    v8 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
      || (v9 = (__int64 **)BugCheckParameter2[1], *v9 != BugCheckParameter2) )
    {
      __fastfail(3u);
    }
    *v9 = v8;
    v8[1] = (__int64)v9;
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KeLeaveCriticalRegion();
    EtwpFreeGuidEntry(BugCheckParameter2);
  }
  return v2;
}
