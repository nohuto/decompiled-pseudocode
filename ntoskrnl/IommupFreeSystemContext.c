/*
 * XREFs of IommupFreeSystemContext @ 0x140521654
 * Callers:
 *     IommuFreeLibraryContext @ 0x140520A48 (IommuFreeLibraryContext.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 */

void __fastcall IommupFreeSystemContext(__int64 a1)
{
  char v2; // di
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rcx

  if ( *(_DWORD *)(a1 + 16) )
  {
    v2 = 0;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&IommupSystemContextListPushLock, 0LL);
    if ( *(_QWORD *)(a1 + 32) == a1 + 32 && *(_QWORD *)(a1 + 48) == a1 + 48 )
    {
      v3 = *(_QWORD *)a1;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v4 = *(_QWORD **)(a1 + 8), *v4 != a1) )
        __fastfail(3u);
      *v4 = v3;
      v2 = 1;
      *(_QWORD *)(v3 + 8) = v4;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IommupSystemContextListPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&IommupSystemContextListPushLock);
    KeAbPostRelease((ULONG_PTR)&IommupSystemContextListPushLock);
    if ( v2 )
      HalpMmAllocCtxFree(v5, a1);
  }
}
