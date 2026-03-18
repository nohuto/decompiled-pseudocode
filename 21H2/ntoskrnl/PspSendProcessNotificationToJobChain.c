/*
 * XREFs of PspSendProcessNotificationToJobChain @ 0x140683F18
 * Callers:
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 * Callees:
 *     PspSendJobNotification @ 0x14025863C (PspSendJobNotification.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PspLockJobConditionally @ 0x14068565C (PspLockJobConditionally.c)
 *     PspLockRootJobFromProcess @ 0x140687598 (PspLockRootJobFromProcess.c)
 *     PspUnlockJob @ 0x1406FFE90 (PspUnlockJob.c)
 */

__int64 __fastcall PspSendProcessNotificationToJobChain(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 i; // rbx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v8 = 0LL;
  PspLockRootJobFromProcess(a1, CurrentThread, &v9, &v8);
  for ( i = v9; i; i = *(_QWORD *)(i + 1264) )
  {
    PspLockJobConditionally(i, &v8);
    if ( *(_QWORD *)(i + 552) && ((1 << a2) & *(_DWORD *)(i + 1068)) != 0 )
      PspSendJobNotification(i, a2, a3, 0);
    if ( i != v8 )
      ExReleaseResourceLite((PERESOURCE)(i + 56));
  }
  return PspUnlockJob(v8, CurrentThread);
}
