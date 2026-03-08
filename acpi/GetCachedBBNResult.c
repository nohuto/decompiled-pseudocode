/*
 * XREFs of GetCachedBBNResult @ 0x1C0034ACC
 * Callers:
 *     GetPciAddressWorker @ 0x1C0034E00 (GetPciAddressWorker.c)
 * Callees:
 *     AMLIIsEqualHandle @ 0x1C0048794 (AMLIIsEqualHandle.c)
 */

__int64 __fastcall GetCachedBBNResult(__int64 a1, _DWORD *a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 *v6; // r10
  KIRQL v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // r8

  v4 = KeAcquireSpinLockRaiseToDpc(&gBBNResultCacheLock);
  v5 = gBBNResultCacheListHead;
  v6 = &gBBNResultCacheListHead;
  v7 = v4;
  v8 = -1073741275;
  while ( (__int64 *)v5 != v6 )
  {
    if ( (unsigned __int8)AMLIIsEqualHandle(*(_QWORD *)(v5 + 16), a1) )
    {
      v8 = 0x40000000;
      *a2 = *(_DWORD *)(v9 + 24);
      break;
    }
    v5 = *(_QWORD *)v9;
  }
  KeReleaseSpinLock(&gBBNResultCacheLock, v7);
  return v8;
}
