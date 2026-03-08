/*
 * XREFs of ObpLockUnrelatedDirectoryShared @ 0x1407DD1A8
 * Callers:
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1403586D0 (ExfTryAcquirePushLockSharedEx.c)
 */

void __fastcall ObpLockUnrelatedDirectoryShared(PVOID *a1, volatile signed __int64 *a2)
{
  char v2; // r15
  volatile signed __int64 *v3; // rbp
  char v6; // si
  ULONG_PTR v7; // r11
  signed __int64 *v8; // rbx
  signed __int64 *v9; // rbx

  v2 = *((_BYTE *)a1 + 22);
  v3 = a2 + 37;
  v6 = 1;
  v7 = KeAbPreAcquire((__int64)(a2 + 37), 0LL);
  if ( !_InterlockedCompareExchange64(v3, 17LL, 0LL) || ExfTryAcquirePushLockSharedEx((signed __int64 *)v3, 0) )
  {
    if ( v7 )
      *(_BYTE *)(v7 + 18) = 1;
    v8 = (signed __int64 *)*a1;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)*a1 + 37, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8 + 37);
    KeAbPostRelease((ULONG_PTR)(v8 + 37));
    v6 = 0;
  }
  else
  {
    if ( v7 )
      KeAbPostReleaseEx((ULONG_PTR)v3, v7);
    ObfReferenceObjectWithTag((PVOID)a2, 0x554C624Fu);
    v9 = (signed __int64 *)*a1;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)*a1 + 37, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v9 + 37);
    KeAbPostRelease((ULONG_PTR)(v9 + 37));
    ExAcquirePushLockSharedEx((ULONG_PTR)v3, 0LL);
  }
  *((_BYTE *)a1 + 22) = v6;
  if ( v2 )
    ObDereferenceObjectDeferDeleteWithTag(*a1, 0x554C624Fu);
  *a1 = (PVOID)a2;
}
