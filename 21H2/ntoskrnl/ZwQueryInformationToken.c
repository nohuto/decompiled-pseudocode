/*
 * XREFs of ZwQueryInformationToken @ 0x1403FA9A0
 * Callers:
 *     RtlCheckTokenCapability @ 0x140586960 (RtlCheckTokenCapability.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405BAB30 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14066A3A0 (RtlFormatCurrentUserKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D908 (_SysCtxRegOpenCurrentUserKey.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409505D0 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle);
}
