/*
 * XREFs of ExRaiseAccessViolation @ 0x1408742B0
 * Callers:
 *     DifExRaiseAccessViolationWrapper @ 0x1405D9520 (DifExRaiseAccessViolationWrapper.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     NtQueryKey @ 0x1406D6C60 (NtQueryKey.c)
 *     IopXxxControlFile @ 0x1406E5590 (IopXxxControlFile.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 *     IopValidateQueryInformationParameters @ 0x140725AC0 (IopValidateQueryInformationParameters.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     NtQueryInformationToken @ 0x140730A90 (NtQueryInformationToken.c)
 *     IopReadFile @ 0x14074C6D0 (IopReadFile.c)
 *     NtQuerySymbolicLinkObject @ 0x1407AAB70 (NtQuerySymbolicLinkObject.c)
 *     NtAlpcQueryInformation @ 0x1407AB290 (NtAlpcQueryInformation.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
