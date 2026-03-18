/*
 * XREFs of HUBDSM_PurgingDeviceIoOnHubSuspendWhileWaitingForD0EntryOnHwWake @ 0x1C001F990
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl @ 0x1C0028F68 (HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_PurgingDeviceIoOnHubSuspendWhileWaitingForD0EntryOnHwWake(__int64 a1)
{
  HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
