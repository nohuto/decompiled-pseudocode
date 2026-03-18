/*
 * XREFs of FreezeThawTimers @ 0x1C00FD920
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00FEB18 (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01CEF78 (--1CAutoPushLockSh@@QEAA@XZ.c)
 */

__int64 FreezeThawTimers()
{
  return gtmrListHead[0];
}
