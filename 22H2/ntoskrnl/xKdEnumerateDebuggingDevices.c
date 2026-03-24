/*
 * XREFs of xKdEnumerateDebuggingDevices @ 0x1403CFD40
 * Callers:
 *     NtQueryInformationThread @ 0x1405FB940 (NtQueryInformationThread.c)
 *     NtQueryInformationProcess @ 0x1406216C0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     IommuDomainConfigure @ 0x1408667B0 (IommuDomainConfigure.c)
 *     IommuFlushDomainVaList @ 0x140866840 (IommuFlushDomainVaList.c)
 *     HaliQuerySystemInformation @ 0x14098F9D0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 xKdEnumerateDebuggingDevices()
{
  return 3221225474LL;
}
