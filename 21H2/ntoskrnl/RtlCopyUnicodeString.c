/*
 * XREFs of RtlCopyUnicodeString @ 0x14035E210
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140285468 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140360E30 (AuthzBasepDuplicateSecurityAttributes.c)
 *     IoQueryFullDriverPath @ 0x1403A6F30 (IoQueryFullDriverPath.c)
 *     HalpInterruptRegisterController @ 0x1403AC5D4 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x1403AC990 (HalpTimerRegister.c)
 *     RtlPcToFileName @ 0x1403CC7A0 (RtlPcToFileName.c)
 *     HalpRegisterDmaController @ 0x1404CF734 (HalpRegisterDmaController.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1405BADC0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     VrpBuildKeyPath @ 0x1405D5420 (VrpBuildKeyPath.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1405E7E80 (FsRtlFindInTunnelCacheEx.c)
 *     IopCheckTopDeviceHint @ 0x1405F6984 (IopCheckTopDeviceHint.c)
 *     IopSymlinkUpdateECP @ 0x1405FD41C (IopSymlinkUpdateECP.c)
 *     CmpGetVirtualizationID @ 0x140667EC4 (CmpGetVirtualizationID.c)
 *     RtlConvertSidToUnicodeString @ 0x1406697D0 (RtlConvertSidToUnicodeString.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x140696178 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406B6434 (EtwpGetLoggerInfoFromContext.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1406C4604 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406DC580 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140732A2C (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407343BC (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140736AD4 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessRelation @ 0x14073766C (PnpProcessRelation.c)
 *     IopQueryRegistryKeySystemPath @ 0x1407411A0 (IopQueryRegistryKeySystemPath.c)
 *     PipProcessDevNodeTree @ 0x1407413C4 (PipProcessDevNodeTree.c)
 *     PnpConcatenateUnicodeStrings @ 0x1407491E4 (PnpConcatenateUnicodeStrings.c)
 *     PiDeferSetInterfaceState @ 0x14074B940 (PiDeferSetInterfaceState.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14075A690 (SdbMakeIndexKeyFromStringEx.c)
 *     PiUEventHandleVetoEvent @ 0x14076E8D8 (PiUEventHandleVetoEvent.c)
 *     IopBootLog @ 0x140771BE0 (IopBootLog.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14077C878 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077CA10 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PsRegisterSiloMonitor @ 0x140795940 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x140795AF0 (ObCreateObjectTypeEx.c)
 *     AdtpObjsInitialize @ 0x14079E6C0 (AdtpObjsInitialize.c)
 *     PnpCopyDeviceInstancePath @ 0x1407A53E4 (PnpCopyDeviceInstancePath.c)
 *     PopGenerateDeviceFriendlyName @ 0x1407BE5E8 (PopGenerateDeviceFriendlyName.c)
 *     PopConnectToPolicyDevice @ 0x1407C4888 (PopConnectToPolicyDevice.c)
 *     IoReportRootDevice @ 0x1407C8180 (IoReportRootDevice.c)
 *     CmpLoadHiveVolatile @ 0x14087D0BC (CmpLoadHiveVolatile.c)
 *     IopSafebootDriverLoad @ 0x140892084 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x14089FC28 (PnpNotifyHwProfileChange.c)
 *     PnpFinalizeVetoedRemove @ 0x1408ABE70 (PnpFinalizeVetoedRemove.c)
 *     PipRecordOpenHandleVeto @ 0x1408B922C (PipRecordOpenHandleVeto.c)
 *     MiAllocateSecureImageActivePatch @ 0x1408C8EB8 (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x1408C9DB8 (MiFillActivePatchesQueryBuffer.c)
 *     MiQueryLoadedPatches @ 0x1408CDDB8 (MiQueryLoadedPatches.c)
 *     PopFxRegisterComponentPerfStates @ 0x1408E54E4 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x1408E6CC4 (PopProcessWakeSourceWork.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x140906BAC (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140906C20 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlPcToFilePath @ 0x140919360 (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140921970 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepAddTokenOriginClaim @ 0x140922CB0 (SepAddTokenOriginClaim.c)
 *     AhcCacheQueryHwId @ 0x1409802AC (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409809EC (ObGetSiloRootDirectoryPath.c)
 *     StartFirstUserProcess @ 0x140A4CB74 (StartFirstUserProcess.c)
 *     ExtEnvRegisterIommu @ 0x140A8D9F0 (ExtEnvRegisterIommu.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
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
