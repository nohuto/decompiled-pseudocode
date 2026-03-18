/*
 * XREFs of PsIsProcessAppContainer @ 0x1406C9928
 * Callers:
 *     IopFileObjectRevoked @ 0x1402AC840 (IopFileObjectRevoked.c)
 *     IoRevokeHandlesForProcess @ 0x140558960 (IoRevokeHandlesForProcess.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x1406C9680 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406C9754 (ExpGetSystemFirmwareTableInformation.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1406DC9F0 (NtQuerySystemEnvironmentValueEx.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1406DCB10 (NtSetSystemEnvironmentValueEx.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
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
