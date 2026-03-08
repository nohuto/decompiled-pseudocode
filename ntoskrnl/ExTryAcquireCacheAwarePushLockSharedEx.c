/*
 * XREFs of ExTryAcquireCacheAwarePushLockSharedEx @ 0x140607670
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1403586D0 (ExfTryAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

volatile signed __int64 *__fastcall ExTryAcquireCacheAwarePushLockSharedEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  volatile signed __int64 *v3; // rbx
  ULONG_PTR v4; // r11
  char v5; // al

  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v3 = *(volatile signed __int64 **)(BugCheckParameter2 + 8LL * (KeGetPcr()->Prcb.Number & 0x1F));
  if ( (BugCheckParameter1 & 2) != 0 )
    v4 = 0LL;
  else
    v4 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  if ( !_InterlockedCompareExchange64(v3, 17LL, 0LL)
    || (v5 = ExfTryAcquirePushLockSharedEx((signed __int64 *)v3, 2)) != 0 )
  {
    v5 = 1;
  }
  if ( !v4 )
  {
    if ( v5 )
      return v3;
    return 0LL;
  }
  if ( !v5 )
  {
    KeAbPostReleaseEx(BugCheckParameter2, v4);
    return 0LL;
  }
  *(_BYTE *)(v4 + 18) = 1;
  return v3;
}
