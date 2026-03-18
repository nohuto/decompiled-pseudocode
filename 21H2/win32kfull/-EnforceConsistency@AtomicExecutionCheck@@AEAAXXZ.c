/*
 * XREFs of ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C0071408
 * Callers:
 *     EditionGetUserObjectInformationEntryPoint @ 0x1C0070380 (EditionGetUserObjectInformationEntryPoint.c)
 *     NtUserFindWindowEx @ 0x1C00706A0 (NtUserFindWindowEx.c)
 *     NtUserBuildHwndList @ 0x1C0070A10 (NtUserBuildHwndList.c)
 *     FreeTimer @ 0x1C0070D80 (FreeTimer.c)
 *     _UnregisterClass @ 0x1C0071084 (_UnregisterClass.c)
 *     NtUserKillTimer @ 0x1C00712E0 (NtUserKillTimer.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall AtomicExecutionCheck::EnforceConsistency(AtomicExecutionCheck *this)
{
  __int64 v1; // rcx

  v1 = gpresUser;
  if ( !gpresUser || !ExIsResourceAcquiredSharedLite(gpresUser) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
}
