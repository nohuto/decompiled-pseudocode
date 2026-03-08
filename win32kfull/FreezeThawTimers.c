/*
 * XREFs of FreezeThawTimers @ 0x1C00D8DA0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C0142398 (--1CAutoPushLockSh@@QEAA@XZ.c)
 */

__int64 FreezeThawTimers()
{
  return gtmrListHead[0];
}
