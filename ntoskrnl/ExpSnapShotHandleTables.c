__int64 __fastcall ExpSnapShotHandleTables(
        __int64 (__fastcall *a1)(char **, _QWORD, volatile signed __int64 *, __int64, int, _DWORD *),
        _DWORD *a2,
        int a3,
        _DWORD *a4,
        char a5)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // edi
  __int64 *i; // r14
  __int64 v10; // rbp
  __int64 j; // rbx
  volatile signed __int64 *v12; // rax
  volatile signed __int64 *v13; // rsi
  __int64 v14; // r15
  signed __int32 v16[8]; // [rsp+0h] [rbp-88h] BYREF
  char *v17; // [rsp+40h] [rbp-48h] BYREF
  struct _KTHREAD *v18; // [rsp+48h] [rbp-40h]

  CurrentThread = KeGetCurrentThread();
  v18 = CurrentThread;
  v8 = 0;
  v17 = (char *)a2 + (a5 != 0 ? 16LL : 8LL);
  *a4 = a5 != 0 ? 16 : 8;
  *a2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&HandleTableListLock, 0LL);
  for ( i = (__int64 *)HandleTableListHead;
        (((v8 + 0x80000000) & 0x80000000) != 0 || v8 == -1073741820) && i != &HandleTableListHead;
        i = (__int64 *)*i )
  {
    v10 = (__int64)(i - 3);
    for ( j = 0LL; ((v8 + 0x80000000) & 0x80000000) != 0 || v8 == -1073741820; j += 4LL )
    {
      v12 = (volatile signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)v10, j);
      v13 = v12;
      if ( !v12 )
        break;
      if ( (j & 0x3FC) != 0 && *v12 && ExLockHandleTableEntry(v10, v12) )
      {
        ++*a2;
        v8 = a1(&v17, *(unsigned int *)(v10 + 40), v13, j, a3, a4);
        _InterlockedExchangeAdd64(v13, 1uLL);
        _InterlockedOr(v16, 0);
        if ( *(_QWORD *)(v10 + 48) )
          ExfUnblockPushLock((volatile __int64 *)(v10 + 48), 0LL);
      }
    }
  }
  v14 = (__int64)v18;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&HandleTableListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&HandleTableListLock);
  KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
  KeLeaveCriticalRegionThread(v14);
  return v8;
}
