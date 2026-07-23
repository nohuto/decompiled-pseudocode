/*
 * XREFs of PopThermalZoneAdd @ 0x140791D90
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeTimer2 @ 0x14029A5B0 (KeInitializeTimer2.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     KeInitializeIRTimer @ 0x140380F30 (KeInitializeIRTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403A8D58 (PopThermalUpdateTelemetryClientCount.c)
 *     PopResetCurrentPolicies @ 0x140793E98 (PopResetCurrentPolicies.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

void __fastcall PopThermalZoneAdd(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1 + 296;
  if ( PopThermalPollingMode )
  {
    v8 = 262152;
    KeInitializeIRTimer(v2, (__int64)PopThermalZoneTimerCallback, a1, (unsigned __int8 *)&v8, 2);
  }
  else
  {
    KeInitializeTimer2(v2, (__int64)PopThermalZoneTimerCallback, a1, 0LL);
  }
  v3 = *(_QWORD *)(a1 + 56);
  *(_WORD *)(a1 + 69) = -1;
  *(_DWORD *)(a1 + 80) = 100;
  *(_DWORD *)(a1 + 84) = 100;
  *(_BYTE *)(a1 + 64) = 6;
  *(_BYTE *)(a1 + 67) = 2;
  *(_DWORD *)(a1 + 76) = 1000;
  *(_DWORD *)(v3 + 48) = -1073741667;
  LODWORD(v3) = PopThermalZoneNextId;
  *(_DWORD *)(a1 + 496) = PopThermalZoneNextId;
  *(_DWORD *)(a1 + 216) = 100;
  PopThermalZoneNextId = v3 + 1;
  KeInitializeEvent((PRKEVENT)(a1 + 448), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 472), NotificationEvent, 0);
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 280) = PopThermalWorker;
  *(_QWORD *)(a1 + 288) = a1;
  v5 = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 512) = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 520) = v5;
  *(_QWORD *)(a1 + 440) = 0LL;
  LODWORD(v5) = PopThermalZoneCount;
  *(_QWORD *)(a1 + 432) = 0LL;
  PopThermalZoneCount = v5 + 1;
  if ( !(_DWORD)v5 )
  {
    PopAcquirePolicyLock(v4);
    if ( BYTE13(PopCapabilities) != 1 )
    {
      BYTE13(PopCapabilities) = 1;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v7, v6);
  }
  PopThermalUpdateTelemetryClientCount(1);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 264), DelayedWorkQueue);
}
