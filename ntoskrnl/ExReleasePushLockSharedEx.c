/*
 * XREFs of ExReleasePushLockSharedEx @ 0x1402C61B0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

int __fastcall ExReleasePushLockSharedEx(volatile signed __int64 *BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v3; // di
  signed __int64 v4; // rax

  v3 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  v4 = _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL);
  if ( v4 != 17 )
    LODWORD(v4) = ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
  if ( (v3 & 2) == 0 )
    LODWORD(v4) = KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return v4;
}
