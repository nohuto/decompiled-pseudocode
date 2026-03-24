/*
 * XREFs of RtlCreateUnicodeString @ 0x1406ED6B0
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x14065F4C4 (EtwpRealtimeCreateLogfile.c)
 *     RtlConvertSidToUnicodeString @ 0x1406ED390 (RtlConvertSidToUnicodeString.c)
 *     EtwpStartLogger @ 0x140711A40 (EtwpStartLogger.c)
 *     EtwpCaptureString @ 0x1407128E4 (EtwpCaptureString.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140727CD0 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140737538 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x140738C94 (PiDevCfgQueryDriverNode.c)
 *     PiGetDefaultMessageString @ 0x14076A644 (PiGetDefaultMessageString.c)
 *     PipGenerateContainerID @ 0x14076DBF8 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariable @ 0x14077B470 (PiDevCfgResolveVariable.c)
 *     EtwStartAutoLogger @ 0x140796424 (EtwStartAutoLogger.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079A4DC (IopCopyBootLogRegistryToFile.c)
 *     PiDrvDbCreateNode @ 0x1407A3DFC (PiDrvDbCreateNode.c)
 *     DrvDbCreateDatabaseNode @ 0x1407A4698 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxCreateNode @ 0x1407A4BD8 (_PnpCtxCreateNode.c)
 *     EtwpQueryRegistryCallback @ 0x1407B1FA0 (EtwpQueryRegistryCallback.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140877990 (CmpCreateHwProfileFriendlyName.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1408A7284 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A7698 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B4730 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408B79AC (PiDrvDbResolveNodeFilePaths.c)
 *     AslPathWildcardFindFirst @ 0x140968B44 (AslPathWildcardFindFirst.c)
 *     PipInitDeviceOverrideCache @ 0x140A5CBAC (PipInitDeviceOverrideCache.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A61428 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x140685CE0 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall RtlCreateUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  wchar_t *StringRoutine; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( SourceString[v4] );
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v5);
  DestinationString->Buffer = StringRoutine;
  if ( !StringRoutine )
    return 0;
  DestinationString->MaximumLength = v5;
  memmove(StringRoutine, SourceString, v5);
  DestinationString->Length = v5 - 2;
  return 1;
}
