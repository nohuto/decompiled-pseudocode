/*
 * XREFs of RtlCreateUnicodeString @ 0x14066A0F0
 * Callers:
 *     DifRtlCreateUnicodeStringWrapper @ 0x14061B060 (DifRtlCreateUnicodeStringWrapper.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     PiDevCfgResolveVariable @ 0x14069A1F8 (PiDevCfgResolveVariable.c)
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 *     EtwpCaptureString @ 0x1406EF170 (EtwpCaptureString.c)
 *     PipGenerateContainerID @ 0x1407452A0 (PipGenerateContainerID.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407459F4 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x140746270 (PiDevCfgQueryDriverNode.c)
 *     EtwpRealtimeCreateLogfile @ 0x14079AADC (EtwpRealtimeCreateLogfile.c)
 *     EtwpQueryRegistryCallback @ 0x1408166C0 (EtwpQueryRegistryCallback.c)
 *     EtwStartAutoLogger @ 0x140817CD8 (EtwStartAutoLogger.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14081D0F0 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408264C0 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbCreateNode @ 0x1408268AC (PiDrvDbCreateNode.c)
 *     DrvDbCreateDatabaseNode @ 0x1408274C4 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxCreateNode @ 0x140827AA8 (_PnpCtxCreateNode.c)
 *     IopCopyBootLogRegistryToFile @ 0x14082848C (IopCopyBootLogRegistryToFile.c)
 *     PiGetDefaultMessageString @ 0x1408523B4 (PiGetDefaultMessageString.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14091E3D0 (CmpCreateHwProfileFriendlyName.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14094CBE0 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14094CFE8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14095A750 (PiCreateDriverSwDeviceCallback.c)
 *     AslPathWildcardFindFirst @ 0x140A15ECC (AslPathWildcardFindFirst.c)
 *     PipInitDeviceOverrideCache @ 0x140B107D8 (PipInitDeviceOverrideCache.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B12AF0 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1406BE560 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
