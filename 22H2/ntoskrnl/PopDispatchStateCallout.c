/*
 * XREFs of PopDispatchStateCallout @ 0x140725A94
 * Callers:
 *     PoPowerOffMonitor @ 0x140382960 (PoPowerOffMonitor.c)
 *     PopPrepareSleep @ 0x140382E4C (PopPrepareSleep.c)
 *     PopReleaseAdaptiveLock @ 0x1407251C4 (PopReleaseAdaptiveLock.c)
 *     PoBlockConsoleSwitch @ 0x140725A44 (PoBlockConsoleSwitch.c)
 *     PoUnblockConsoleSwitch @ 0x140774BB0 (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x140774BD8 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x140774BF8 (PoStartPowerStateTasks.c)
 *     PopSuspendApps @ 0x140776E70 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140776EC4 (PopSuspendServices.c)
 *     PopResumeApps @ 0x140776F24 (PopResumeApps.c)
 *     PopResumeServices @ 0x140776F9C (PopResumeServices.c)
 *     PopBlockSessionSwitch @ 0x140779C60 (PopBlockSessionSwitch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408E3658 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PoEndPartitionReplace @ 0x1408E75E8 (PoEndPartitionReplace.c)
 *     PoStartPartitionReplace @ 0x1408E7708 (PoStartPartitionReplace.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035C1F0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x1406F45B8 (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopDispatchStateCallout(_DWORD *a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // [rsp+30h] [rbp-30h] BYREF
  int *v8; // [rsp+38h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+44h] [rbp-1Ch]
  _DWORD v11[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( (xmmword_140CFC490 & 0x8000) != 0 )
  {
    v6 = a1[1];
    v10 = 0;
    v11[0] = v6;
    v11[1] = a1[2];
    v11[2] = a1[3];
    v11[3] = a1[4];
    v8 = v11;
    v9 = 16;
    EtwTraceKernelEvent((__int64)&v8, 1u, 0x80008000, 0x1228u, 0x401802u);
  }
  v4 = PopInvokeWin32Callout(4, (__int64)a1, 2 - (unsigned int)(a2 != 0), (int *)(a2 & -(__int64)(a2 != 0)));
  if ( (xmmword_140CFC490 & 0x8000) != 0 )
  {
    v10 = 0;
    v8 = (int *)&v7;
    v7 = v4;
    v9 = 4;
    EtwTraceKernelEvent((__int64)&v8, 1u, 0x80008000, 0x1229u, 0x401802u);
  }
  return v4;
}
