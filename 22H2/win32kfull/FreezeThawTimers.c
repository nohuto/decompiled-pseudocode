/*
 * XREFs of FreezeThawTimers @ 0x1C00A2740
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00AC2EC (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C014F272 (--1CAutoPushLockSh@@QEAA@XZ.c)
 */

__int64 FreezeThawTimers()
{
  return gtmrListHead;
}
