/*
 * XREFs of xKdEnumerateDebuggingDevices @ 0x1403D05B0
 * Callers:
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     NtQueryInformationThread @ 0x1406EB0A0 (NtQueryInformationThread.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     IommuDomainConfigure @ 0x1408668C0 (IommuDomainConfigure.c)
 *     IommuFlushDomainVaList @ 0x140866950 (IommuFlushDomainVaList.c)
 *     HaliQuerySystemInformation @ 0x1409909D0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 xKdEnumerateDebuggingDevices()
{
  return 3221225474LL;
}
