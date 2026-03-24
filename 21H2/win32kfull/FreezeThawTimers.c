/*
 * XREFs of FreezeThawTimers @ 0x1C0110A20
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0111E24 (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01D8654 (--1CAutoPushLockSh@@QEAA@XZ.c)
 */

__int64 FreezeThawTimers()
{
  return gtmrListHead[0];
}
