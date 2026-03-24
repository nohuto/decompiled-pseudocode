/*
 * XREFs of PsIsProcessAppContainer @ 0x140690804
 * Callers:
 *     IopReferenceFileObject @ 0x1402C90B0 (IopReferenceFileObject.c)
 *     IopFileObjectRevoked @ 0x140344CF0 (IopFileObjectRevoked.c)
 *     IoRevokeHandlesForProcess @ 0x140506E50 (IoRevokeHandlesForProcess.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14069061C (ExpGetSystemFirmwareTableInformation.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1406A3220 (NtQuerySystemEnvironmentValueEx.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14076D92C (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1409556B0 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     PsReferencePrimaryToken @ 0x140654390 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x1406CF990 (SeQueryInformationToken.c)
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
