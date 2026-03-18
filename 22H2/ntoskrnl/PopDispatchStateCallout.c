/*
 * XREFs of PopDispatchStateCallout @ 0x140682AC8
 * Callers:
 *     PoPowerOffMonitor @ 0x14058F350 (PoPowerOffMonitor.c)
 *     PopPrepareSleep @ 0x14058F50C (PopPrepareSleep.c)
 *     PoBlockConsoleSwitch @ 0x140682A78 (PoBlockConsoleSwitch.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC4C8 (PopReleaseAdaptiveLock.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x140983AA4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PoEndPartitionReplace @ 0x140989618 (PoEndPartitionReplace.c)
 *     PoEndPowerStateTasks @ 0x140989640 (PoEndPowerStateTasks.c)
 *     PoStartPartitionReplace @ 0x140989758 (PoStartPartitionReplace.c)
 *     PoStartPowerStateTasks @ 0x140989794 (PoStartPowerStateTasks.c)
 *     PoUnblockConsoleSwitch @ 0x1409897B4 (PoUnblockConsoleSwitch.c)
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x14098A4E4 (PopResumeApps.c)
 *     PopResumeServices @ 0x14098A55C (PopResumeServices.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x14098A5D8 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSuspendApps @ 0x14098AAC4 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x14098AB18 (PopSuspendServices.c)
 *     PopBlockSessionSwitch @ 0x140997DA0 (PopBlockSessionSwitch.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EFC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x1407D3E3C (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopDispatchStateCallout(_DWORD *a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-40h]
  unsigned int v8; // [rsp+30h] [rbp-30h] BYREF
  int *v9; // [rsp+38h] [rbp-28h] BYREF
  int v10; // [rsp+40h] [rbp-20h]
  int v11; // [rsp+44h] [rbp-1Ch]
  _DWORD v12[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
  {
    v6 = a1[1];
    v11 = 0;
    v12[0] = v6;
    v12[1] = a1[2];
    v12[2] = a1[3];
    v12[3] = a1[4];
    v9 = v12;
    v10 = 16;
    EtwTraceKernelEvent((int)&v9, 1, 0x80008000, 4648, 4200450);
  }
  v4 = PopInvokeWin32Callout(4LL, a1, 2 - (unsigned int)(a2 != 0), a2 & -(__int64)(a2 != 0), v7);
  if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
  {
    v11 = 0;
    v9 = (int *)&v8;
    v8 = v4;
    v10 = 4;
    EtwTraceKernelEvent((int)&v9, 1, 0x80008000, 4649, 4200450);
  }
  return v4;
}
