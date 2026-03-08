/*
 * XREFs of AlpcpTryLockForCachedReferenceBlob @ 0x1407926EC
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x1407172DC (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpReceiveMessagePort @ 0x1407CD3A0 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

char __fastcall AlpcpTryLockForCachedReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  volatile signed __int32 *v1; // rdi
  ULONG_PTR v3; // rax
  signed __int64 BugCheckParameter4; // rax

  v1 = (volatile signed __int32 *)(BugCheckParameter2 - 16);
  v3 = KeAbPreAcquire(BugCheckParameter2 - 16, 0LL);
  if ( _interlockedbittestandset64(v1, 0LL) )
  {
    if ( v3 )
      KeAbPostReleaseEx((ULONG_PTR)v1, v3);
    return 0;
  }
  else
  {
    if ( v3 )
      *(_BYTE *)(v3 + 18) = 1;
    *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL)
                       + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x27uLL, BugCheckParameter4);
    return 1;
  }
}
