/*
 * XREFs of PopPowerRequestDebounceTimerWorker @ 0x14097E560
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x140204390 (KeCancelTimer2.c)
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     PopAcquirePowerRequestPushLock @ 0x14073B7D4 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x14073BF54 (PopPowerRequestHandleRequestUpdate.c)
 */

void PopPowerRequestDebounceTimerWorker()
{
  __int64 v0; // r8
  _DWORD *v1; // r9
  unsigned int v2; // ebx
  _DWORD *v3; // rdi
  unsigned int v4; // ecx
  _DWORD *v5; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquirePowerRequestPushLock(1);
  v2 = 0;
  v3 = &unk_140C0355C;
  do
  {
    if ( (*v3 & 8) != 0 )
    {
      *v3 &= ~8u;
      PopPowerRequestHandleRequestUpdate(0LL, v2, 0);
    }
    ++v2;
    v3 += 12;
  }
  while ( v2 < 6 );
  v4 = 0;
  v5 = &unk_140C0355C;
  while ( (*v5 & 8) == 0 )
  {
    ++v4;
    v5 += 12;
    if ( v4 >= 6 )
      goto LABEL_10;
  }
  KeCancelTimer2((__int64)&PopPowerRequestDebounceTimer, 0LL, v0, v1);
  v6[0] = 0LL;
  v6[1] = -1LL;
  KeSetTimer2((__int64)&PopPowerRequestDebounceTimer, -50000000LL, 0LL, (__int64)v6);
LABEL_10:
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
