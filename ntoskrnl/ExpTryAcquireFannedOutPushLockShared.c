/*
 * XREFs of ExpTryAcquireFannedOutPushLockShared @ 0x1403C89DC
 * Callers:
 *     ExTryAcquireAutoExpandPushLockShared @ 0x1403C8900 (ExTryAcquireAutoExpandPushLockShared.c)
 * Callees:
 *     ExfTryAcquirePushLockSharedEx @ 0x1403586D0 (ExfTryAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

volatile signed __int64 *__fastcall ExpTryAcquireFannedOutPushLockShared(unsigned int a1, int a2)
{
  __int64 v2; // r10
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  volatile signed __int64 *v6; // r11

  v2 = (a1 >> 4) & 0x1FF;
  v3 = (a1 >> 13) & 0x3FFFF;
  _BitScanReverse(&v4, v3);
  v5 = a2 | 2;
  v6 = (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v4 - 2)
                                             + 8LL * (v3 ^ (1 << v4))
                                             + 8)
                                 + 8 * v2);
  if ( (a2 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, v5, (ULONG_PTR)v6, 0LL, 0LL);
  if ( !_InterlockedCompareExchange64(v6, 17LL, 0LL) || ExfTryAcquirePushLockSharedEx((signed __int64 *)v6, v5) )
    return v6;
  else
    return 0LL;
}
