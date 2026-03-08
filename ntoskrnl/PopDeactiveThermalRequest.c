/*
 * XREFs of PopDeactiveThermalRequest @ 0x14097FEC8
 * Callers:
 *     PoDeleteThermalRequest @ 0x14097FC00 (PoDeleteThermalRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403901F8 (PopThermalUpdateTelemetryClientCount.c)
 *     PopGetDope @ 0x1403BF328 (PopGetDope.c)
 *     PopPropogateCoolingChange @ 0x140584860 (PopPropogateCoolingChange.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14059334C (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14059356C (PopTraceThermalRequestPassiveHistogram.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140846CC0 (PopThermalUpdateActiveTimeTracking.c)
 *     PopDiagTraceThermalRequest @ 0x14085CD54 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14085D84C (PopDiagTraceCoolingExtension.c)
 *     PopCleanCoolingExtension @ 0x14097FD9C (PopCleanCoolingExtension.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140987FC0 (PopThermalUpdatePassiveTimeTracking.c)
 */

void __fastcall PopDeactiveThermalRequest(__int64 a1)
{
  _QWORD *v1; // rbx
  char v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD **)(a1 + 32);
  memset(&Event, 0, sizeof(Event));
  v3 = 0;
  PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 4));
  if ( *(_BYTE *)(a1 + 18) )
  {
    if ( v1[17] )
    {
      LOBYTE(v4) = *(_BYTE *)(a1 + 16);
      PopThermalUpdatePassiveTimeTracking(a1 + 40, v4);
      PopTraceThermalRequestPassiveHistogram(a1);
      PopThermalUpdateTelemetryClientCount(0);
    }
    if ( v1[16] )
    {
      LOBYTE(v4) = *(_BYTE *)(a1 + 17) == 0;
      PopThermalUpdateActiveTimeTracking(a1 + 40, v4);
      PopTraceThermalRequestActiveActivity(a1);
    }
    PopDiagTraceThermalRequest(a1, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_THERMAL_REQUEST_REMOVE);
    *(_BYTE *)(a1 + 18) = 0;
    PopPropogateCoolingChange((__int64)v1);
  }
  PopReleaseRwLock((ULONG_PTR)(v1 + 4));
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 4));
  v5 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
    goto LABEL_22;
  v6 = *(_QWORD **)(a1 + 8);
  if ( *v6 != a1 )
    goto LABEL_22;
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  if ( (_QWORD *)v1[2] != v1 + 2 )
    goto LABEL_17;
  v7 = v1[6];
  if ( v7 )
  {
    *(_QWORD *)(PopGetDope(v7) + 64) = 0LL;
    if ( *((_BYTE *)v1 + 64) )
      PopDiagTraceCoolingExtension((__int64)v1, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
    v8 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) == v1 )
    {
      v9 = (_QWORD *)v1[1];
      if ( (_QWORD *)*v9 == v1 )
      {
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        *v1 = 0LL;
        goto LABEL_16;
      }
    }
LABEL_22:
    __fastfail(3u);
  }
LABEL_16:
  v3 = 1;
LABEL_17:
  PopReleaseRwLock((ULONG_PTR)(v1 + 4));
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
  if ( v3 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 4));
    if ( *((_BYTE *)v1 + 67) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v1[9] = &Event;
      PopReleaseRwLock((ULONG_PTR)(v1 + 4));
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 4));
      v1[9] = 0LL;
    }
    PopReleaseRwLock((ULONG_PTR)(v1 + 4));
    PopCleanCoolingExtension(v1);
  }
}
