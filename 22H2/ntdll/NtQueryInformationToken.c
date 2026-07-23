/*
 * XREFs of NtQueryInformationToken @ 0x18009D900
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x180036C40 (RtlFormatCurrentUserKeyPath.c)
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlCheckTokenCapability @ 0x18003C650 (RtlCheckTokenCapability.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x180043EE0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180044040 (RtlpGetTokenNamedObjectPath.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005064C (EtwpWriteToPrivateBuffers.c)
 *     RtlpGetDefaultsSubjectContext @ 0x18006828C (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800684C8 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x1800777AC (RtlpSetSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x18007DD40 (RtlpValidOwnerSubjectContext.c)
 *     RtlCheckSandboxedToken @ 0x180085F70 (RtlCheckSandboxedToken.c)
 *     RtlRemovePrivileges @ 0x180088E40 (RtlRemovePrivileges.c)
 *     RtlDefaultNpAcl @ 0x1800D6930 (RtlDefaultNpAcl.c)
 *     RtlNewInstanceSecurityObject @ 0x1800D6D00 (RtlNewInstanceSecurityObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D6E30 (RtlNewSecurityGrantedAccess.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800DA3E4 (AVrfpAppendCurrentUserSid.c)
 *     WerEscalationLazyInit @ 0x1800DE048 (WerEscalationLazyInit.c)
 *     RtlpIsAppContainer @ 0x1800E8984 (RtlpIsAppContainer.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E8AD4 (RtlpValidLabelSubjectContext.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119A78 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationToken(
        HANDLE TokenHandle,
        ULONG TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 33;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
