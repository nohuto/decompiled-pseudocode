/*
 * XREFs of RtlCopyUnicodeString @ 0x1403534C0
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1402525B0 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403560E0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     IoQueryFullDriverPath @ 0x1403A6DE0 (IoQueryFullDriverPath.c)
 *     HalpInterruptRegisterController @ 0x1403AB844 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x1403ABC00 (HalpTimerRegister.c)
 *     RtlPcToFileName @ 0x1403CC630 (RtlPcToFileName.c)
 *     HalpRegisterDmaController @ 0x1404CF4F4 (HalpRegisterDmaController.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1405BAB90 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     VrpBuildKeyPath @ 0x1405D5420 (VrpBuildKeyPath.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405ECE20 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1406066E8 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     CmpGetVirtualizationID @ 0x140672C94 (CmpGetVirtualizationID.c)
 *     RtlConvertSidToUnicodeString @ 0x1406745A0 (RtlConvertSidToUnicodeString.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1406889F0 (FsRtlFindInTunnelCacheEx.c)
 *     IopCheckTopDeviceHint @ 0x140697C8C (IopCheckTopDeviceHint.c)
 *     IopSymlinkUpdateECP @ 0x14069E24C (IopSymlinkUpdateECP.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406DF154 (EtwpGetLoggerInfoFromContext.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140715FB4 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14073286C (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407341FC (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140736914 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessRelation @ 0x1407374AC (PnpProcessRelation.c)
 *     IopQueryRegistryKeySystemPath @ 0x140740FE0 (IopQueryRegistryKeySystemPath.c)
 *     PipProcessDevNodeTree @ 0x140741204 (PipProcessDevNodeTree.c)
 *     PnpConcatenateUnicodeStrings @ 0x140749024 (PnpConcatenateUnicodeStrings.c)
 *     PiDeferSetInterfaceState @ 0x14074B780 (PiDeferSetInterfaceState.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14075A4D0 (SdbMakeIndexKeyFromStringEx.c)
 *     PiUEventHandleVetoEvent @ 0x14076E718 (PiUEventHandleVetoEvent.c)
 *     IopBootLog @ 0x140771A20 (IopBootLog.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14077C6B8 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077C850 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PsRegisterSiloMonitor @ 0x140795740 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x1407958F0 (ObCreateObjectTypeEx.c)
 *     AdtpObjsInitialize @ 0x14079E4C0 (AdtpObjsInitialize.c)
 *     PnpCopyDeviceInstancePath @ 0x1407A51E4 (PnpCopyDeviceInstancePath.c)
 *     PopGenerateDeviceFriendlyName @ 0x1407BDE58 (PopGenerateDeviceFriendlyName.c)
 *     PopConnectToPolicyDevice @ 0x1407C4368 (PopConnectToPolicyDevice.c)
 *     IoReportRootDevice @ 0x1407C7E60 (IoReportRootDevice.c)
 *     CmpLoadHiveVolatile @ 0x14087CF5C (CmpLoadHiveVolatile.c)
 *     IopSafebootDriverLoad @ 0x140891F24 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x14089FAC8 (PnpNotifyHwProfileChange.c)
 *     PnpFinalizeVetoedRemove @ 0x1408ABD10 (PnpFinalizeVetoedRemove.c)
 *     PipRecordOpenHandleVeto @ 0x1408B90CC (PipRecordOpenHandleVeto.c)
 *     MiAllocateSecureImageActivePatch @ 0x1408C8D58 (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x1408C9C58 (MiFillActivePatchesQueryBuffer.c)
 *     MiQueryLoadedPatches @ 0x1408CDC58 (MiQueryLoadedPatches.c)
 *     PopFxRegisterComponentPerfStates @ 0x1408E5384 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x1408E6B64 (PopProcessWakeSourceWork.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x140906A4C (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140906AC0 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlPcToFilePath @ 0x140919200 (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140921810 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepAddTokenOriginClaim @ 0x140922B50 (SepAddTokenOriginClaim.c)
 *     AhcCacheQueryHwId @ 0x1409800CC (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x14098080C (ObGetSiloRootDirectoryPath.c)
 *     StartFirstUserProcess @ 0x140A4BB74 (StartFirstUserProcess.c)
 *     ExtEnvRegisterIommu @ 0x140A8C9F0 (ExtEnvRegisterIommu.c)
 * Callees:
 *     memmove @ 0x140413F40 (memmove.c)
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
