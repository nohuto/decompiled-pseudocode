/*
 * XREFs of SetProcessTimerDelay @ 0x1C01C1A20
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C0142398 (--1CAutoPushLockSh@@QEAA@XZ.c)
 */

__int64 __fastcall SetProcessTimerDelay(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edx
  int v5; // eax
  _QWORD *v6; // r9
  _QWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // r9
  __int64 v12; // rcx
  _QWORD *v13; // rax
  void *v14; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 > 0x1B7740 )
    return 3221225712LL;
  if ( a3 > 0x927C0 )
    return 3221225713LL;
  if ( *(_QWORD *)a1 == gpepCSRSS )
    return 3221225659LL;
  v4 = a2 - *(_DWORD *)(a1 + 1020);
  v5 = *(_DWORD *)(a1 + 1028);
  *(_DWORD *)(a1 + 1028) = v4;
  *(_DWORD *)(a1 + 1024) = a3;
  if ( v5 )
  {
    if ( v4 )
      goto LABEL_11;
    v11 = (_QWORD *)(a1 + 1040);
    v12 = *(_QWORD *)(a1 + 1040);
    if ( *(_QWORD **)(*v11 + 8LL) == v11 )
    {
      v13 = (_QWORD *)v11[1];
      if ( (_QWORD *)*v13 == v11 )
      {
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        goto LABEL_11;
      }
    }
    goto LABEL_18;
  }
  if ( v4 )
  {
    v6 = (_QWORD *)(a1 + 1040);
    v7 = (_QWORD *)gtmrAdjustmentListHead[1];
    if ( *v7 == gtmrAdjustmentListHead[0] )
    {
      *v6 = gtmrAdjustmentListHead[0];
      v6[1] = v7;
      *v7 = v6;
      gtmrAdjustmentListHead[1] = v6;
      goto LABEL_11;
    }
LABEL_18:
    __fastfail(3u);
  }
LABEL_11:
  if ( !gbTimersProcActive )
  {
    v14 = &CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock, 0LL);
    if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
    {
      KeSetEvent(CRitTimerScanWakeSystem::ritTimerScanWakeEvent, 1, 0);
      CAutoPushLockSh::~CAutoPushLockSh((CAutoPushLockSh *)&v14, v9, v10);
      gbRITAlerted = 1;
    }
    else
    {
      ExReleasePushLockSharedEx(&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock, 0LL, v8);
      KeLeaveCriticalRegion();
      gbRITAlerted = 0;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1990);
    }
  }
  return 0LL;
}
