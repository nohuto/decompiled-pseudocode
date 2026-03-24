/*
 * XREFs of DpiGetIoMmuContextFromDevice @ 0x1C0057754
 * Callers:
 *     DpiAddMemoryTracker @ 0x1C0057690 (DpiAddMemoryTracker.c)
 *     DpiMapMemoryTrackersToIoMmu @ 0x1C0057A1C (DpiMapMemoryTrackersToIoMmu.c)
 *     DpiRemoveMemoryTracker @ 0x1C0057AD4 (DpiRemoveMemoryTracker.c)
 *     DpiResetIoMmuContext @ 0x1C0057B68 (DpiResetIoMmuContext.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02167E4 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiMapIommuContiguous @ 0x1C02C6FB0 (DpiMapIommuContiguous.c)
 *     DpiMapIommuIdentityRange @ 0x1C02C7000 (DpiMapIommuIdentityRange.c)
 *     DpiUnmapIommuContiguous @ 0x1C02C7820 (DpiUnmapIommuContiguous.c)
 *     DpiUnmapIommuIdentityRange @ 0x1C02C7870 (DpiUnmapIommuIdentityRange.c)
 *     DpiAttachIoMmuDomain @ 0x1C02D2158 (DpiAttachIoMmuDomain.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x1C001FD24 (DpiGetFdoFromDevice.c)
 */

__int64 __fastcall DpiGetIoMmuContextFromDevice(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 FdoFromDevice; // rbx
  __int64 v4; // rax

  FdoFromDevice = DpiGetFdoFromDevice(a1);
  if ( !FdoFromDevice )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2, v1);
    *(_QWORD *)(v4 + 24) = 635LL;
    WdLogEvent5_WdAssertion(v4);
  }
  return FdoFromDevice + 5744;
}
