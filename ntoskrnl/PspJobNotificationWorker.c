/*
 * XREFs of PspJobNotificationWorker @ 0x14067EDE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     PspSendReliableJobNotification @ 0x1406F4D9C (PspSendReliableJobNotification.c)
 *     PspUnlockJob @ 0x1406FBF7C (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406FC178 (PspLockJobExclusive.c)
 */

signed __int64 PspJobNotificationWorker()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  signed __int32 v2; // esi
  signed __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi

  do
  {
    v0 = _InterlockedExchange64(&PspJobNotificationList, -1LL);
    do
    {
      v1 = *(_QWORD *)(v0 + 1184);
      _m_prefetchw((const void *)(v0 + 1536));
      v2 = _InterlockedAnd((volatile signed __int32 *)(v0 + 1536), 0xFFFDDFFF);
      if ( (v2 & 0x2000) != 0 )
        ZwUpdateWnfStateData(v0 + 1096, 0LL);
      if ( (v2 & 0x20000) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        PspLockJobExclusive(v0, CurrentThread);
        if ( *(_QWORD *)(v0 + 552) && (*(_DWORD *)(v0 + 1088) & 0x1000) != 0 )
          PspSendReliableJobNotification((PVOID)v0);
        PspUnlockJob(v0, CurrentThread);
      }
      ObfDereferenceObjectWithTag((PVOID)v0, 0x6F4E7350u);
      v0 = v1;
    }
    while ( v1 && v1 != -1 );
    result = _InterlockedCompareExchange64(&PspJobNotificationList, 0LL, -1LL);
  }
  while ( result != -1 );
  return result;
}
