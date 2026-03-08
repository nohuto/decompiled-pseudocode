/*
 * XREFs of PopDispatchStateCallout @ 0x14067F6E8
 * Callers:
 *     PoPowerOffMonitor @ 0x14058CE20 (PoPowerOffMonitor.c)
 *     PopPrepareSleep @ 0x14058CFDC (PopPrepareSleep.c)
 *     PoBlockConsoleSwitch @ 0x14067F698 (PoBlockConsoleSwitch.c)
 *     PopReleaseAdaptiveLock @ 0x14073CD60 (PopReleaseAdaptiveLock.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1409809F4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PoEndPartitionReplace @ 0x140986568 (PoEndPartitionReplace.c)
 *     PoEndPowerStateTasks @ 0x140986590 (PoEndPowerStateTasks.c)
 *     PoStartPartitionReplace @ 0x1409866A8 (PoStartPartitionReplace.c)
 *     PoStartPowerStateTasks @ 0x1409866E4 (PoStartPowerStateTasks.c)
 *     PoUnblockConsoleSwitch @ 0x140986704 (PoUnblockConsoleSwitch.c)
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x140987434 (PopResumeApps.c)
 *     PopResumeServices @ 0x1409874AC (PopResumeServices.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x140987528 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSuspendApps @ 0x140987A14 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140987A68 (PopSuspendServices.c)
 *     PopBlockSessionSwitch @ 0x140994CF0 (PopBlockSessionSwitch.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x14073A52C (PopInvokeWin32Callout.c)
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
    EtwTraceKernelEvent((__int64)&v9, 1u, 0x80008000, 0x1228u, 0x401802u);
  }
  v4 = PopInvokeWin32Callout(4LL, a1, 2 - (unsigned int)(a2 != 0), a2 & -(__int64)(a2 != 0), v7);
  if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
  {
    v11 = 0;
    v9 = (int *)&v8;
    v8 = v4;
    v10 = 4;
    EtwTraceKernelEvent((__int64)&v9, 1u, 0x80008000, 0x1229u, 0x401802u);
  }
  return v4;
}
