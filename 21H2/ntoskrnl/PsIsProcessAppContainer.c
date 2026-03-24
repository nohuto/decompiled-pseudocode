/*
 * XREFs of PsIsProcessAppContainer @ 0x1406AD854
 * Callers:
 *     IopFileObjectRevoked @ 0x14027BCE0 (IopFileObjectRevoked.c)
 *     IopReferenceFileObject @ 0x140348A20 (IopReferenceFileObject.c)
 *     IoRevokeHandlesForProcess @ 0x1405071D0 (IoRevokeHandlesForProcess.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406AD66C (ExpGetSystemFirmwareTableInformation.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1406C0810 (NtQuerySystemEnvironmentValueEx.c)
 *     IopSynchronousServiceTail @ 0x1406FED80 (IopSynchronousServiceTail.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14076E25C (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140955660 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     SeQueryInformationToken @ 0x140656BD0 (SeQueryInformationToken.c)
 *     PsReferencePrimaryToken @ 0x140706D00 (PsReferencePrimaryToken.c)
 */

bool __fastcall PsIsProcessAppContainer(struct _KPROCESS *a1)
{
  char v1; // si
  struct _DMA_ADAPTER *v2; // rdi
  NTSTATUS v3; // ebx
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  LODWORD(TokenInformation) = 0;
  v2 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  v3 = SeQueryInformationToken(v2, TokenIsAppContainer, &TokenInformation);
  HalPutDmaAdapter(v2);
  if ( v3 >= 0 )
    return (_DWORD)TokenInformation != 0;
  return v1;
}
