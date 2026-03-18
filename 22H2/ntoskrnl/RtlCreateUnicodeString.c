/*
 * XREFs of RtlCreateUnicodeString @ 0x1407FB710
 * Callers:
 *     DifRtlCreateUnicodeStringWrapper @ 0x1405EB210 (DifRtlCreateUnicodeStringWrapper.c)
 *     PipGenerateContainerID @ 0x1406850A8 (PipGenerateContainerID.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpRealtimeCreateLogfile @ 0x140773258 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCaptureString @ 0x1407FB2E0 (EtwpCaptureString.c)
 *     RtlConvertSidToUnicodeString @ 0x1407FB3F0 (RtlConvertSidToUnicodeString.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140814158 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbCreateNode @ 0x14081425C (PiDrvDbCreateNode.c)
 *     DrvDbCreateDatabaseNode @ 0x140815840 (DrvDbCreateDatabaseNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081CB70 (PiCreateDriverSwDeviceCallback.c)
 *     EtwpQueryRegistryCallback @ 0x1408364C0 (EtwpQueryRegistryCallback.c)
 *     EtwStartAutoLogger @ 0x14083DD38 (EtwStartAutoLogger.c)
 *     PiGetDefaultMessageString @ 0x140849DD8 (PiGetDefaultMessageString.c)
 *     _PnpCtxCreateNode @ 0x140855DB8 (_PnpCtxCreateNode.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408659D8 (IopCopyBootLogRegistryToFile.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140866854 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14087A140 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x14087DDB0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgResolveVariable @ 0x14087F0D0 (PiDevCfgResolveVariable.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14095EEB0 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095F2B8 (PiDevCfgQueryIncludedDriverNode.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140A10A70 (CmpCreateHwProfileFriendlyName.c)
 *     AslPathWildcardFindFirst @ 0x140A555C4 (AslPathWildcardFindFirst.c)
 *     PipInitDeviceOverrideCache @ 0x140B3F9C8 (PipInitDeviceOverrideCache.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B72B88 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1407C7520 (ExpAllocateStringRoutine.c)
 *     ExFreePool @ 0x140AAFCC0 (ExFreePool.c)
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
