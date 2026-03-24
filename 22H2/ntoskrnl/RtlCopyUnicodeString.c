/*
 * XREFs of RtlCopyUnicodeString @ 0x1402D3C70
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140251E10 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1402D6890 (AuthzBasepDuplicateSecurityAttributes.c)
 *     IoQueryFullDriverPath @ 0x1403A66E0 (IoQueryFullDriverPath.c)
 *     HalpInterruptRegisterController @ 0x1403B29D4 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x1403B2D90 (HalpTimerRegister.c)
 *     RtlPcToFileName @ 0x1403CBF30 (RtlPcToFileName.c)
 *     HalpRegisterDmaController @ 0x1404CF434 (HalpRegisterDmaController.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1405BAAD0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     VrpBuildKeyPath @ 0x1405D5420 (VrpBuildKeyPath.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405ECE20 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x140606B48 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140668870 (FsRtlFindInTunnelCacheEx.c)
 *     IopCheckTopDeviceHint @ 0x14067C0AC (IopCheckTopDeviceHint.c)
 *     IopSymlinkUpdateECP @ 0x140682B0C (IopSymlinkUpdateECP.c)
 *     CmpGetVirtualizationID @ 0x1406EBA84 (CmpGetVirtualizationID.c)
 *     RtlConvertSidToUnicodeString @ 0x1406ED390 (RtlConvertSidToUnicodeString.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1407109EC (SepAllocateAndInitializeCachedHandleEntry.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1407129F4 (EtwpGetLoggerInfoFromContext.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140732BBC (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14073454C (PnpQueryRemoveLockedDeviceNode.c)
 *     IopQueryRegistryKeySystemPath @ 0x14073D480 (IopQueryRegistryKeySystemPath.c)
 *     PipProcessDevNodeTree @ 0x14073D6A4 (PipProcessDevNodeTree.c)
 *     PnpConcatenateUnicodeStrings @ 0x1407454C4 (PnpConcatenateUnicodeStrings.c)
 *     PiDeferSetInterfaceState @ 0x140747C20 (PiDeferSetInterfaceState.c)
 *     PnpProcessRelation @ 0x14074950C (PnpProcessRelation.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140749CC4 (PnpProcessQueryRemoveAndEject.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x140759CC0 (SdbMakeIndexKeyFromStringEx.c)
 *     PiUEventHandleVetoEvent @ 0x14076DDE8 (PiUEventHandleVetoEvent.c)
 *     IopBootLog @ 0x1407716E0 (IopBootLog.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14077C5B8 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077C750 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PsRegisterSiloMonitor @ 0x1407905D0 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x140790780 (ObCreateObjectTypeEx.c)
 *     AdtpObjsInitialize @ 0x14079E8F0 (AdtpObjsInitialize.c)
 *     PnpCopyDeviceInstancePath @ 0x1407A5614 (PnpCopyDeviceInstancePath.c)
 *     PopGenerateDeviceFriendlyName @ 0x1407BE618 (PopGenerateDeviceFriendlyName.c)
 *     PopConnectToPolicyDevice @ 0x1407C4B28 (PopConnectToPolicyDevice.c)
 *     IoReportRootDevice @ 0x1407C7D80 (IoReportRootDevice.c)
 *     CmpLoadHiveVolatile @ 0x14087CFAC (CmpLoadHiveVolatile.c)
 *     IopSafebootDriverLoad @ 0x140891F74 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x14089FB18 (PnpNotifyHwProfileChange.c)
 *     PnpFinalizeVetoedRemove @ 0x1408ABD60 (PnpFinalizeVetoedRemove.c)
 *     PipRecordOpenHandleVeto @ 0x1408B911C (PipRecordOpenHandleVeto.c)
 *     MiAllocateSecureImageActivePatch @ 0x1408C8DA8 (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x1408C9CA8 (MiFillActivePatchesQueryBuffer.c)
 *     MiQueryLoadedPatches @ 0x1408CDCA8 (MiQueryLoadedPatches.c)
 *     PopFxRegisterComponentPerfStates @ 0x1408E53D4 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x1408E6BB4 (PopProcessWakeSourceWork.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x140906A9C (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140906B10 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlPcToFilePath @ 0x140919250 (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140921860 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepAddTokenOriginClaim @ 0x140922BA0 (SepAddTokenOriginClaim.c)
 *     AhcCacheQueryHwId @ 0x14098011C (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x14098085C (ObGetSiloRootDirectoryPath.c)
 *     StartFirstUserProcess @ 0x140A4BB74 (StartFirstUserProcess.c)
 *     ExtEnvRegisterIommu @ 0x140A8C9F0 (ExtEnvRegisterIommu.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
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
