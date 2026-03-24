/*
 * XREFs of RtlCreateUnicodeString @ 0x1406748C0
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x1406745A0 (RtlConvertSidToUnicodeString.c)
 *     EtwpRealtimeCreateLogfile @ 0x140681844 (EtwpRealtimeCreateLogfile.c)
 *     EtwpStartLogger @ 0x1406DE1A0 (EtwpStartLogger.c)
 *     EtwpCaptureString @ 0x1406DF044 (EtwpCaptureString.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14072DDF8 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073B090 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x14073C7F4 (PiDevCfgQueryDriverNode.c)
 *     PiGetDefaultMessageString @ 0x14076B024 (PiGetDefaultMessageString.c)
 *     PipGenerateContainerID @ 0x14076E528 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariable @ 0x14077B570 (PiDevCfgResolveVariable.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790278 (IopCopyBootLogRegistryToFile.c)
 *     EtwStartAutoLogger @ 0x14079B594 (EtwStartAutoLogger.c)
 *     PiDrvDbCreateNode @ 0x1407A39CC (PiDrvDbCreateNode.c)
 *     DrvDbCreateDatabaseNode @ 0x1407A4268 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxCreateNode @ 0x1407A47A8 (_PnpCtxCreateNode.c)
 *     EtwpQueryRegistryCallback @ 0x1407B1B60 (EtwpQueryRegistryCallback.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140877940 (CmpCreateHwProfileFriendlyName.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1408A7234 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A7648 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B46E0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408B795C (PiDrvDbResolveNodeFilePaths.c)
 *     AslPathWildcardFindFirst @ 0x140968AF4 (AslPathWildcardFindFirst.c)
 *     PipInitDeviceOverrideCache @ 0x140A5CBAC (PipInitDeviceOverrideCache.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A61428 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     memmove @ 0x140413F40 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1406A0F60 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
