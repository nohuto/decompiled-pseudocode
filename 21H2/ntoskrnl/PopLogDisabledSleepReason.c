/*
 * XREFs of PopLogDisabledSleepReason @ 0x1407627C8
 * Callers:
 *     PopFilterCapabilities @ 0x1407628C0 (PopFilterCapabilities.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x140762A68 (PopRemoveReasonRecordByReasonCode.c)
 *     PopLogSleepDisabled @ 0x140810E2C (PopLogSleepDisabled.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 PopLogDisabledSleepReason()
{
  unsigned int v0; // ebx
  unsigned int v1; // edi
  unsigned int v2; // esi
  __int64 v3; // rax
  __int64 v5; // rbp
  __int64 Pool2; // rax
  void *v7; // rsi
  __int64 v8; // rcx
  _DWORD *v9; // r8

  v0 = 0;
  v1 = 0;
  v2 = 0;
  ExAcquireFastMutex(&PopDisableSleepMutex);
  PopRemoveReasonRecordByReasonCode(13LL);
  v3 = PopDisableSleepList;
  if ( (__int64 *)PopDisableSleepList != &PopDisableSleepList )
  {
    do
    {
      v1 |= *(_DWORD *)(v3 + 20);
      ++v2;
      v3 = *(_QWORD *)v3;
    }
    while ( (__int64 *)v3 != &PopDisableSleepList );
    if ( v1 )
    {
      v5 = 8LL * v2;
      Pool2 = ExAllocatePool2(256LL, v5, 1718968931LL);
      v7 = (void *)Pool2;
      if ( Pool2 )
      {
        v8 = PopDisableSleepList;
        v9 = (_DWORD *)Pool2;
        while ( (__int64 *)v8 != &PopDisableSleepList )
        {
          *v9 = *(_DWORD *)(v8 + 16);
          v9 += 2;
          *(v9 - 1) = *(_DWORD *)(v8 + 20);
          v8 = *(_QWORD *)v8;
        }
        v0 = PopLogSleepDisabled(13LL, v1, Pool2, v5);
        ExFreePoolWithTag(v7, 0x66756263u);
      }
      else
      {
        v0 = -1073741670;
      }
    }
  }
  KeReleaseGuardedMutex(&PopDisableSleepMutex);
  return v0;
}
