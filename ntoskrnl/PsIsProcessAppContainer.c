/*
 * XREFs of PsIsProcessAppContainer @ 0x140781158
 * Callers:
 *     IopFileObjectRevoked @ 0x14023EC30 (IopFileObjectRevoked.c)
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 *     IoRevokeHandlesForProcess @ 0x140555EE0 (IoRevokeHandlesForProcess.c)
 *     NtQueryVolumeInformationFile @ 0x1406B2A90 (NtQueryVolumeInformationFile.c)
 *     NtWriteFile @ 0x1406B3A60 (NtWriteFile.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14075CF50 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x140780E98 (ExpGetSystemFirmwareTableInformation.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x140781084 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 *     NtReadFile @ 0x1407E0B30 (NtReadFile.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1409FD460 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 */

bool __fastcall PsIsProcessAppContainer(__int64 a1)
{
  char v1; // si
  void *v2; // rdi
  NTSTATUS v3; // ebx
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  LODWORD(TokenInformation) = 0;
  v2 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  v3 = SeQueryInformationToken(v2, TokenIsAppContainer, &TokenInformation);
  ObfDereferenceObject(v2);
  if ( v3 >= 0 )
    return (_DWORD)TokenInformation != 0;
  return v1;
}
