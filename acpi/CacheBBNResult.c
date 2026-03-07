void __fastcall CacheBBNResult(__int64 a1, int a2)
{
  KIRQL v4; // al
  __int64 *v5; // r8
  KIRQL v6; // di
  __int64 **v7; // r8
  __int64 Pool2; // rax
  char v9; // cl
  __int64 v10; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&gBBNResultCacheLock);
  v5 = (__int64 *)gBBNResultCacheListHead;
  v6 = v4;
  while ( v5 != &gBBNResultCacheListHead )
  {
    if ( (unsigned __int8)AMLIIsEqualHandle(v5[2], a1) )
      goto LABEL_11;
    v5 = *v7;
  }
  Pool2 = ExAllocatePool2(64LL, 32LL, 1768973121LL);
  if ( Pool2 )
  {
    v9 = gdwfAMLI;
    *(_QWORD *)(Pool2 + 16) = a1;
    dword_1C006F938 = 0;
    pszDest = 0;
    if ( (v9 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    *(_DWORD *)(Pool2 + 24) = a2;
    v10 = gBBNResultCacheListHead;
    if ( *(__int64 **)(gBBNResultCacheListHead + 8) != &gBBNResultCacheListHead )
      __fastfail(3u);
    *(_QWORD *)Pool2 = gBBNResultCacheListHead;
    *(_QWORD *)(Pool2 + 8) = &gBBNResultCacheListHead;
    *(_QWORD *)(v10 + 8) = Pool2;
    gBBNResultCacheListHead = Pool2;
  }
LABEL_11:
  KeReleaseSpinLock(&gBBNResultCacheLock, v6);
}
