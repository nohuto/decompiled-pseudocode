/*
 * XREFs of RtlCreateUnicodeString @ 0x140747D00
 * Callers:
 *     DifRtlCreateUnicodeStringWrapper @ 0x1405E8D60 (DifRtlCreateUnicodeStringWrapper.c)
 *     EtwpRealtimeCreateLogfile @ 0x14069152C (EtwpRealtimeCreateLogfile.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     PipGenerateContainerID @ 0x140733C8C (PipGenerateContainerID.c)
 *     EtwpCaptureString @ 0x1407478D0 (EtwpCaptureString.c)
 *     RtlConvertSidToUnicodeString @ 0x1407479E0 (RtlConvertSidToUnicodeString.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1407FFABC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140807FD0 (PiCreateDriverSwDeviceCallback.c)
 *     IopCopyBootLogRegistryToFile @ 0x140818E28 (IopCopyBootLogRegistryToFile.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14081C828 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbCreateNode @ 0x14081C92C (PiDrvDbCreateNode.c)
 *     DrvDbCreateDatabaseNode @ 0x14081DF10 (DrvDbCreateDatabaseNode.c)
 *     EtwpQueryRegistryCallback @ 0x140836810 (EtwpQueryRegistryCallback.c)
 *     EtwStartAutoLogger @ 0x14083CA48 (EtwStartAutoLogger.c)
 *     PiGetDefaultMessageString @ 0x140847760 (PiGetDefaultMessageString.c)
 *     _PnpCtxCreateNode @ 0x140851F88 (_PnpCtxCreateNode.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140875198 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgResolveVariable @ 0x140878210 (PiDevCfgResolveVariable.c)
 *     PiDevCfgQueryDriverNode @ 0x140878BA8 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14095BE90 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095C298 (PiDevCfgQueryIncludedDriverNode.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140A0DD5C (CmpCreateHwProfileFriendlyName.c)
 *     AslPathWildcardFindFirst @ 0x140A52910 (AslPathWildcardFindFirst.c)
 *     PipInitDeviceOverrideCache @ 0x140B5738C (PipInitDeviceOverrideCache.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B6E868 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
 *     ExFreePool @ 0x140AAB270 (ExFreePool.c)
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
