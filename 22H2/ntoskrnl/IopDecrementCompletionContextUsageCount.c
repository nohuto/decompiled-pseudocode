/*
 * XREFs of IopDecrementCompletionContextUsageCount @ 0x1403F0594
 * Callers:
 *     IopCompleteRequest @ 0x1402C31B0 (IopCompleteRequest.c)
 *     IopXxxControlFile @ 0x14064B730 (IopXxxControlFile.c)
 *     NtLockFile @ 0x140655E20 (NtLockFile.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402E0C70 (KeReleaseSpinLock.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __fastcall IopDecrementCompletionContextUsageCount(ULONG_PTR BugCheckParameter1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v3; // al
  __int64 v4; // r8
  signed __int64 BugCheckParameter4; // rsi

  v1 = (KSPIN_LOCK *)(BugCheckParameter1 + 184);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter1 + 184));
  v4 = *(_QWORD *)(BugCheckParameter1 + 176);
  BugCheckParameter4 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = BugCheckParameter4 - 1;
  KeReleaseSpinLock(v1, v3);
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 176), 0x82uLL, BugCheckParameter4);
}
