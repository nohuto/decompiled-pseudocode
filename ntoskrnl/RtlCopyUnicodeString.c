/*
 * XREFs of RtlCopyUnicodeString @ 0x14030E970
 * Callers:
 *     PnpAllocateWatchdog @ 0x140203B14 (PnpAllocateWatchdog.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1402976E0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x1402979A0 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1402E7660 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     HalpInterruptRegisterController @ 0x140373AE4 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x140373EB4 (HalpTimerRegister.c)
 *     IoQueryFullDriverPath @ 0x1403A19C0 (IoQueryFullDriverPath.c)
 *     RtlPcToFileName @ 0x1403A4E70 (RtlPcToFileName.c)
 *     HalpRegisterDmaController @ 0x1405150F4 (HalpRegisterDmaController.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14060D930 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     PnpConcatenateUnicodeStrings @ 0x140683298 (PnpConcatenateUnicodeStrings.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14069A700 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     IopCheckTopDeviceHint @ 0x1406B4EC0 (IopCheckTopDeviceHint.c)
 *     VrpBuildKeyPath @ 0x1406C286C (VrpBuildKeyPath.c)
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 *     IopBootLog @ 0x14072A928 (IopBootLog.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140739C2C (SepAllocateAndInitializeCachedHandleEntry.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1407458FC (EtwpGetLoggerInfoFromContext.c)
 *     RtlConvertSidToUnicodeString @ 0x1407479E0 (RtlConvertSidToUnicodeString.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140752810 (FsRtlFindInTunnelCacheEx.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1407715F8 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     IopQueryRegistryKeySystemPath @ 0x140782C0C (IopQueryRegistryKeySystemPath.c)
 *     SepAddTokenOriginClaim @ 0x140794680 (SepAddTokenOriginClaim.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14079F418 (SdbMakeIndexKeyFromStringEx.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IoReportRootDevice @ 0x140802F20 (IoReportRootDevice.c)
 *     PsRegisterSiloMonitor @ 0x14080C7C0 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x14080CB20 (ObCreateObjectTypeEx.c)
 *     CmpMergeVersionDescriptors @ 0x14081323C (CmpMergeVersionDescriptors.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 *     AdtpObjsInitialize @ 0x140841808 (AdtpObjsInitialize.c)
 *     PopConnectToPolicyDevice @ 0x14084A820 (PopConnectToPolicyDevice.c)
 *     PnpCopyDeviceInstancePath @ 0x140861B34 (PnpCopyDeviceInstancePath.c)
 *     PnpProcessRelation @ 0x140861E18 (PnpProcessRelation.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 *     PiDeferSetInterfaceState @ 0x14086FD40 (PiDeferSetInterfaceState.c)
 *     IopSymlinkUpdateECP @ 0x14087BDFC (IopSymlinkUpdateECP.c)
 *     PiUEventHandleVetoEvent @ 0x14087E074 (PiUEventHandleVetoEvent.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14087F880 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14087FA04 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     RtlPcToFilePath @ 0x1408A16F0 (RtlPcToFilePath.c)
 *     IopSafebootDriverLoad @ 0x1409426D4 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x14095372C (PnpNotifyHwProfileChange.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1409561C8 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpFinalizeVetoedRemove @ 0x14096125C (PnpFinalizeVetoedRemove.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 *     PipRecordOpenHandleVeto @ 0x14096ECA4 (PipRecordOpenHandleVeto.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14096EEA8 (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PopFxRegisterComponentPerfStates @ 0x140982948 (PopFxRegisterComponentPerfStates.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1409AA748 (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AA7BC (PspSiloInitializeSystemRootSymlink.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB370 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     ExRaiseHardError @ 0x1409FDD30 (ExRaiseHardError.c)
 *     CmpLoadHiveVolatile @ 0x140A096F0 (CmpLoadHiveVolatile.c)
 *     CmpGetVirtualizationID @ 0x140A1709C (CmpGetVirtualizationID.c)
 *     MiAllocateSecureImageActivePatch @ 0x140A31B5C (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x140A33DC0 (MiFillActivePatchesQueryBuffer.c)
 *     MiQueryLoadedPatches @ 0x140A38650 (MiQueryLoadedPatches.c)
 *     MiQuerySingleLoadedPatch @ 0x140A38EEC (MiQuerySingleLoadedPatch.c)
 *     AhcCacheQueryHwId @ 0x140A6F0BC (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A711B4 (ObGetSiloRootDirectoryPath.c)
 *     PopProcessWakeSourceWork @ 0x140A9E248 (PopProcessWakeSourceWork.c)
 *     ExtEnvRegisterIommu @ 0x140B3CFD4 (ExtEnvRegisterIommu.c)
 *     StartFirstUserProcess @ 0x140B662B4 (StartFirstUserProcess.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
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
