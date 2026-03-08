/*
 * XREFs of DbgkWerCaptureLiveKernelDump @ 0x14087EC10
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1403CFC20 (PopIdlePhaseWatchdogCallback.c)
 *     PopFxEnforceDirectedPowerTransition @ 0x140587E70 (PopFxEnforceDirectedPowerTransition.c)
 *     PopUserPresentSet @ 0x14058BAC4 (PopUserPresentSet.c)
 *     PopPowerButtonWorkCallback @ 0x140596C60 (PopPowerButtonWorkCallback.c)
 *     CarLiveDump @ 0x1405D3670 (CarLiveDump.c)
 *     ExHandleLogBadReference @ 0x140604648 (ExHandleLogBadReference.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x14060DBE0 (ExpResourceTimeoutCaptureLiveDump.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopWin32CalloutWatchdogCallback @ 0x140998C70 (PopWin32CalloutWatchdogCallback.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1409993BC (PopDripsWatchdogCheckHwDivergence.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x14099E044 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x14099E1CC (PopDripsWatchdogTakeAction.c)
 *     TtmpCalloutWatchdogCallback @ 0x1409A03F0 (TtmpCalloutWatchdogCallback.c)
 *     ExpIoPoolDeadlockWorker @ 0x1409FD930 (ExpIoPoolDeadlockWorker.c)
 *     MiForceCrashForInvalidAccess @ 0x140A28438 (MiForceCrashForInvalidAccess.c)
 *     VfPtGenerateTraceInformation @ 0x140ADB7D8 (VfPtGenerateTraceInformation.c)
 * Callees:
 *     DbgkWerCaptureLiveKernelDump2 @ 0x14087EC90 (DbgkWerCaptureLiveKernelDump2.c)
 */

__int64 __fastcall DbgkWerCaptureLiveKernelDump(
        const wchar_t *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  _DWORD v10[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+5Ch] [rbp-1Ch]
  int v15; // [rsp+64h] [rbp-14h]

  v14 = 0LL;
  v15 = 0;
  v10[0] = 1;
  v10[1] = 40;
  v11 = a8;
  v12 = a7;
  v13 = a9;
  return DbgkWerCaptureLiveKernelDump2(a1, a5, a6, (__int64)v10);
}
