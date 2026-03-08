/*
 * XREFs of ZwQueryInformationToken @ 0x140412730
 * Callers:
 *     RtlCheckTokenCapability @ 0x1402BE920 (RtlCheckTokenCapability.c)
 *     DifZwQueryInformationTokenWrapper @ 0x1405F27D0 (DifZwQueryInformationTokenWrapper.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14060D690 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140747770 (RtlFormatCurrentUserKeyPath.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409F9A04 (ExpFirmwareAccessAppContainerCheck.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6772C (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle, *(_QWORD *)&TokenInformationClass);
}
