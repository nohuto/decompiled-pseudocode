/*
 * XREFs of RtlCopyUnicodeString @ 0x1402A76A0
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140204B30 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x140204DA0 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x14022B210 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     IoQueryFullDriverPath @ 0x1403B5230 (IoQueryFullDriverPath.c)
 *     HalpInterruptRegisterController @ 0x1403BDD00 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x1403BE0BC (HalpTimerRegister.c)
 *     RtlPcToFileName @ 0x1403D6E30 (RtlPcToFileName.c)
 *     HalpRegisterDmaController @ 0x14051A18C (HalpRegisterDmaController.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x140642CDC (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpGetVirtualizationID @ 0x140669CBC (CmpGetVirtualizationID.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     IopQueryRegistryKeySystemPath @ 0x14067AFB0 (IopQueryRegistryKeySystemPath.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140694E60 (FsRtlFindInTunnelCacheEx.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140696E04 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1406A2F6C (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     IopSymlinkUpdateECP @ 0x1406B9A14 (IopSymlinkUpdateECP.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406CF970 (IopInitializeDeviceInstanceKey.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406EF280 (EtwpGetLoggerInfoFromContext.c)
 *     IopCheckTopDeviceHint @ 0x14071C4C0 (IopCheckTopDeviceHint.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IopBootLog @ 0x140748300 (IopBootLog.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14075B9CC (SdbMakeIndexKeyFromStringEx.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessRelation @ 0x140767AEC (PnpProcessRelation.c)
 *     PiDeferSetInterfaceState @ 0x140769010 (PiDeferSetInterfaceState.c)
 *     PnpConcatenateUnicodeStrings @ 0x1407690BC (PnpConcatenateUnicodeStrings.c)
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 *     VrpBuildKeyPath @ 0x14077FB68 (VrpBuildKeyPath.c)
 *     PiUEventHandleVetoEvent @ 0x1407FBA68 (PiUEventHandleVetoEvent.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14080B370 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14080B4F0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 *     PsRegisterSiloMonitor @ 0x1408257B0 (PsRegisterSiloMonitor.c)
 *     CmpMergeVersionDescriptors @ 0x140837574 (CmpMergeVersionDescriptors.c)
 *     AdtpObjsInitialize @ 0x14084CD18 (AdtpObjsInitialize.c)
 *     PopGenerateDeviceFriendlyName @ 0x14085475C (PopGenerateDeviceFriendlyName.c)
 *     PopConnectToPolicyDevice @ 0x140858D04 (PopConnectToPolicyDevice.c)
 *     PnpCopyDeviceInstancePath @ 0x140865354 (PnpCopyDeviceInstancePath.c)
 *     RtlPcToFilePath @ 0x1408828C0 (RtlPcToFilePath.c)
 *     CmpLoadHiveVolatile @ 0x14090D4E8 (CmpLoadHiveVolatile.c)
 *     IopSafebootDriverLoad @ 0x140934EA4 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x14094488C (PnpNotifyHwProfileChange.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140947628 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpFinalizeVetoedRemove @ 0x140950530 (PnpFinalizeVetoedRemove.c)
 *     PiInitializeDevice @ 0x14095975C (PiInitializeDevice.c)
 *     PipRecordOpenHandleVeto @ 0x14095E7EC (PipRecordOpenHandleVeto.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14095E9F0 (PipSendTargetDeviceQueryRemoveNotification.c)
 *     MiAllocateSecureImageActivePatch @ 0x14097100C (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x14097303C (MiFillActivePatchesQueryBuffer.c)
 *     MiQueryLoadedPatches @ 0x140976F90 (MiQueryLoadedPatches.c)
 *     MiQuerySingleLoadedPatch @ 0x1409777B4 (MiQuerySingleLoadedPatch.c)
 *     PopFxRegisterComponentPerfStates @ 0x14098DCC4 (PopFxRegisterComponentPerfStates.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1409AC7F8 (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AC86C (PspSiloInitializeSystemRootSymlink.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB230 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepAddTokenOriginClaim @ 0x1409CC540 (SepAddTokenOriginClaim.c)
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 *     AhcCacheQueryHwId @ 0x140A34148 (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A34854 (ObGetSiloRootDirectoryPath.c)
 *     PopProcessWakeSourceWork @ 0x140A6B1E0 (PopProcessWakeSourceWork.c)
 *     StartFirstUserProcess @ 0x140B263A0 (StartFirstUserProcess.c)
 *     ExtEnvRegisterIommu @ 0x140B4BF38 (ExtEnvRegisterIommu.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

void __stdcall RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int Length; // r8d
  unsigned int MaximumLength; // eax
  wchar_t *Buffer; // rdx
  wchar_t *v6; // rsi
  unsigned __int64 v7; // rbx

  if ( SourceString )
  {
    Length = SourceString->Length;
    MaximumLength = DestinationString->MaximumLength;
    Buffer = SourceString->Buffer;
    if ( (unsigned __int16)Length <= (unsigned __int16)MaximumLength )
      MaximumLength = Length;
    v6 = DestinationString->Buffer;
    v7 = MaximumLength;
    DestinationString->Length = MaximumLength;
    memmove(v6, Buffer, MaximumLength);
    if ( (unsigned __int64)DestinationString->Length + 2 <= DestinationString->MaximumLength )
      v6[v7 >> 1] = 0;
  }
  else
  {
    DestinationString->Length = 0;
  }
}
