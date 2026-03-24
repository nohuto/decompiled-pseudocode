/*
 * XREFs of PopHandleWakeSources @ 0x140998410
 * Callers:
 *     PoBroadcastSystemState @ 0x1409922E0 (PoBroadcastSystemState.c)
 * Callees:
 *     KiSetTimerEx @ 0x14025FD70 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x140278AE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14027B6B0 (KeInitializeDpc.c)
 *     PopWakeInfoReference @ 0x1402D4048 (PopWakeInfoReference.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     PopReleaseWakeSourceSpinLock @ 0x14038BD14 (PopReleaseWakeSourceSpinLock.c)
 *     PopAcquireWakeSourceSpinLock @ 0x14038BD48 (PopAcquireWakeSourceSpinLock.c)
 *     ExCopyWakeTimerInfo @ 0x1405B6070 (ExCopyWakeTimerInfo.c)
 *     PopFinalizeWakeInfo @ 0x140778934 (PopFinalizeWakeInfo.c)
 *     PopNewWakeSource @ 0x1408E6B14 (PopNewWakeSource.c)
 *     PopUnlinkWakeSources @ 0x1408E6CD8 (PopUnlinkWakeSources.c)
 *     PopValidateRTCWake @ 0x1409985FC (PopValidateRTCWake.c)
 */

void PopHandleWakeSources()
{
  int v0; // esi
  int v1; // edi
  __int64 v2; // rbx
  SIZE_T *v3; // rbp
  _DWORD *v4; // rdi
  _QWORD *v5; // rcx
  __int64 *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  char v8; // [rsp+70h] [rbp+8h] BYREF

  v0 = 0;
  v8 = 0;
  v1 = 4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (PopSimulate & 0x200000) == 0 && (PopFixedWakeSourceMask & 1) == 0 )
  {
    if ( (PopSimulate & 0x400000) == 0 && (PopFixedWakeSourceMask & 2) == 0 )
    {
      if ( (unsigned __int8)PopValidateRTCWake(&v8) && (PopSimulate & 0x100000) == 0 )
        v0 = 4;
    }
    else
    {
      v0 = 2;
    }
  }
  else
  {
    v0 = 1;
  }
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v2 = PopCurrentWakeInfo;
  if ( PopCurrentWakeInfo && !v0 )
    PopWakeInfoReference(PopCurrentWakeInfo);
  PopReleaseWakeSourceSpinLock(&LockHandle);
  if ( !v2 )
  {
    KeSetEvent(&PopWakeSourceAvailable, 0, 0);
    return;
  }
  if ( !v0 )
  {
    KeInitializeDpc((PRKDPC)(v2 + 48), (PKDEFERRED_ROUTINE)PopWakeSourceTimeoutDpc, 0LL);
    KeInitializeTimerEx((PKTIMER)(v2 + 112), NotificationTimer);
    KiSetTimerEx(v2 + 112, -20000000LL, 0, 0, v2 + 48);
    return;
  }
  if ( dword_140C234A0 < 0 || (unsigned __int64)dword_140C234A0 >= 3 )
    v3 = 0LL;
  else
    v3 = (SIZE_T *)qword_140C234B8[3 * dword_140C234A0];
  if ( v0 == 4 )
  {
    if ( (unsigned __int64)v3 <= 0xFFFFFFFFFFFFFFFCuLL )
      v1 = (v8 != 0) + 2;
  }
  else
  {
    v1 = 1;
  }
  v4 = PopNewWakeSource(v1);
  PopAcquireWakeSourceSpinLock(&LockHandle);
  PopCurrentWakeInfo = 0LL;
  PopReleaseWakeSourceSpinLock(&LockHandle);
  PopUnlinkWakeSources(v2);
  if ( v4 )
  {
    if ( (unsigned int)(v4[4] - 2) <= 1 )
    {
      ExCopyWakeTimerInfo(v3, (_QWORD *)v4 + 3);
    }
    else if ( v3 == (SIZE_T *)-1LL )
    {
      v4[6] = 0;
    }
    else if ( v3 == (SIZE_T *)-2LL )
    {
      v4[6] = 1;
    }
    else
    {
      if ( v3 == (SIZE_T *)-3LL )
        v0 = 2;
      v4[6] = v0;
    }
    v5 = *(_QWORD **)(v2 + 32);
    if ( *v5 != v2 + 24 )
LABEL_37:
      __fastfail(3u);
    *(_QWORD *)v4 = v2 + 24;
    *((_QWORD *)v4 + 1) = v5;
    *v5 = v4;
    *(_QWORD *)(v2 + 32) = v4;
    *(_DWORD *)(v2 + 40) = 1;
  }
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v6 = (__int64 *)qword_140C24368;
  if ( *(__int64 **)qword_140C24368 != &PopWakeInfoList )
    goto LABEL_37;
  ++PopWakeInfoCount;
  *(_QWORD *)v2 = &PopWakeInfoList;
  *(_QWORD *)(v2 + 8) = v6;
  *v6 = v2;
  qword_140C24368 = v2;
  PopReleaseWakeSourceSpinLock(&LockHandle);
  PopFinalizeWakeInfo(v2);
}
