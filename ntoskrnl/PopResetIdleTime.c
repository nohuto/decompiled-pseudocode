/*
 * XREFs of PopResetIdleTime @ 0x1403AF6E8
 * Callers:
 *     PopSystemRequiredSet @ 0x1403AF6CC (PopSystemRequiredSet.c)
 *     PopSetSystemState @ 0x14058BA7C (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x14058BAC4 (PopUserPresentSet.c)
 * Callees:
 *     PopHandleSystemIdleReset @ 0x1403AF718 (PopHandleSystemIdleReset.c)
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x14040B89C (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 */

__int64 __fastcall PopResetIdleTime(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a1;
  KeGetCurrentIrql();
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage(a1, a2);
  return PopHandleSystemIdleReset(v2);
}
