/*
 * XREFs of ExRaiseAccessViolation @ 0x1408713F0
 * Callers:
 *     DifExRaiseAccessViolationWrapper @ 0x1405D7070 (DifExRaiseAccessViolationWrapper.c)
 *     NtQueryVolumeInformationFile @ 0x1406B2A90 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationToken @ 0x1406D6780 (NtQueryInformationToken.c)
 *     NtQueryKey @ 0x1406E6630 (NtQueryKey.c)
 *     IopValidateQueryInformationParameters @ 0x1406EB8A0 (IopValidateQueryInformationParameters.c)
 *     NtQuerySymbolicLinkObject @ 0x140755C30 (NtQuerySymbolicLinkObject.c)
 *     NtAlpcQueryInformation @ 0x140756660 (NtAlpcQueryInformation.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
