__int64 __fastcall HUBDSM_PurgingDeviceIoOnHubSuspendWhileWaitingForD0EntryOnHwWake(__int64 a1)
{
  HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
