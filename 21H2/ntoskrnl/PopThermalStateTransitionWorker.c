/*
 * XREFs of PopThermalStateTransitionWorker @ 0x1408647A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x140368A78 (PopOkayToQueueNextWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x14038B428 (PopThermalStandbyEndTracking.c)
 *     PopExecutePowerAction @ 0x1407FEC6C (PopExecutePowerAction.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

void PopThermalStateTransitionWorker()
{
  int v0; // ebx
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD v7[4]; // [rsp+30h] [rbp-38h] BYREF
  _OWORD v8[2]; // [rsp+40h] [rbp-28h] BYREF

  memset(v8, 0, 24);
  v0 = 0;
  v1 = 2;
  while ( 1 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
    if ( !(_BYTE)word_140C22211 && (!byte_140C22213 || !byte_140C22214) )
      break;
    if ( !byte_140C22210 )
      break;
    if ( (_BYTE)word_140C22211 )
    {
      v0 = 3;
      word_140C22211 = 256;
      v1 = 2;
    }
    if ( byte_140C22213 && byte_140C22214 )
    {
      v0 = 6;
      byte_140C22213 = 0;
      v1 = 3;
    }
    PopReleaseRwLock((ULONG_PTR)&PopThermalStateTransitionContext);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
    PopThermalStandbyEndTracking(v1, v2, v3);
    PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
    v7[2] = 0;
    v8[0] = 0x8000000001uLL;
    v7[0] = v0;
    v7[1] = -1073741820;
    PopAcquirePolicyLock(v4);
    if ( v0 == 6 )
      PopCriticalShutdownInProgress = 1;
    PopExecutePowerAction((unsigned int *)v8, 0, v7, 5, 1u);
    PopReleasePolicyLock(v6, v5);
  }
  PopOkayToQueueNextWorkItem((__int64)&PopThermalStateTransitionWorkItem);
  PopReleaseRwLock((ULONG_PTR)&PopThermalStateTransitionContext);
}
