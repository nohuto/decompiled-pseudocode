/*
 * XREFs of ZwQueryInformationToken @ 0x1403F9E40
 * Callers:
 *     RtlCheckTokenCapability @ 0x140586670 (RtlCheckTokenCapability.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405BA840 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1406EFAC0 (RtlFormatCurrentUserKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072E318 (_SysCtxRegOpenCurrentUserKey.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140950450 (ExpFirmwareAccessAppContainerCheck.c)
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
