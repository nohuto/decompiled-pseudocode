/*
 * XREFs of ExReleaseCacheAwarePushLockExclusiveEx @ 0x14040CC40
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

char __fastcall ExReleaseCacheAwarePushLockExclusiveEx(
        volatile signed __int64 **BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  _UNKNOWN **v2; // rax
  char v3; // si
  unsigned __int64 v5; // rbp
  volatile signed __int64 **v6; // rdi
  volatile signed __int64 *v7; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  v5 = (unsigned __int64)(BugCheckParameter2 + 32);
  v6 = BugCheckParameter2;
  if ( BugCheckParameter2 < BugCheckParameter2 + 32 )
  {
    do
    {
      v7 = *v6;
      LOBYTE(v2) = _InterlockedExchangeAdd64(*v6, 0xFFFFFFFFFFFFFFFFuLL) & 6;
      if ( (_BYTE)v2 == 2 )
        LOBYTE(v2) = ExfTryToWakePushLock(v7);
      ++v6;
    }
    while ( (unsigned __int64)v6 < v5 );
  }
  if ( (v3 & 2) == 0 )
    LOBYTE(v2) = KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return (char)v2;
}
