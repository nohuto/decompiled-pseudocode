signed __int32 __fastcall CcBoostLowPriorityWorkerThread(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v4; // rbx
  __int64 v6; // rax

  if ( a2 && !*(_DWORD *)(a2 + 4) )
    KeBugCheckEx(0x34u, 0x59FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = (volatile signed __int64 *)(a1 + 1280);
  ExAcquirePushLockExclusiveEx(a1 + 1280, 0LL);
  if ( *(_QWORD *)(a1 + 1256)
    && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) > 0
    && (!a2 || a2 == *(_QWORD *)(a1 + 1264)) )
  {
    IoBoostThreadIoPriority(*(_QWORD *)(a1 + 1256), 2LL, 0LL);
    *(_DWORD *)(a1 + 1272) = KeSetPriorityThread(*(PKTHREAD *)(a1 + 1256), 13);
    v6 = *(_QWORD *)(a1 + 1264);
    if ( !*(_DWORD *)(v6 + 4) )
      KeBugCheckEx(0x34u, 0x5CCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (*(_DWORD *)(v6 + 152) & 0x20000000) == 0 )
    {
      PsBoostThreadIoEx(*(_QWORD *)(a1 + 1256), 0, 0, 0LL);
      CcUpdateSharedCacheMapFlag(*(_QWORD *)(a1 + 1264), 0x20000000, 1);
    }
  }
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  return KeAbPostRelease((ULONG_PTR)v4);
}
