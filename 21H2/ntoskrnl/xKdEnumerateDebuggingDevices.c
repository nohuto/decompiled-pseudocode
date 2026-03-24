/*
 * XREFs of xKdEnumerateDebuggingDevices @ 0x1403D0440
 * Callers:
 *     NtQueryInformationThread @ 0x1405FB940 (NtQueryInformationThread.c)
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     IommuDomainConfigure @ 0x140866760 (IommuDomainConfigure.c)
 *     IommuFlushDomainVaList @ 0x1408667F0 (IommuFlushDomainVaList.c)
 *     HaliQuerySystemInformation @ 0x14098FEF0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 xKdEnumerateDebuggingDevices()
{
  return 3221225474LL;
}
