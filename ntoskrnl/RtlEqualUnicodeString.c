/*
 * XREFs of RtlEqualUnicodeString @ 0x1406EA560
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x140204A10 (RtlDeriveCapabilitySidsFromName.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1402478D0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepEqualUnicodeString @ 0x140297EF8 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403657AC (AuthzBasepCompareUnicodeStringOperands.c)
 *     PnpMultiSzContainsString @ 0x1403C22EC (PnpMultiSzContainsString.c)
 *     PiDrvDbFindNode @ 0x140562C40 (PiDrvDbFindNode.c)
 *     PopEmModuleAddressMatchCallback @ 0x140597600 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x14059C560 (PopEmUpdateDeviceConstraintCallback.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405CCA80 (VfDriverRemoveAllDifVerification.c)
 *     PipFindDeviceOverrideEntry @ 0x14068092C (PipFindDeviceOverrideEntry.c)
 *     EtwpLookupLoggerIdByName @ 0x140692600 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140692AB4 (EtwpAcquireLoggerContextByLoggerName.c)
 *     CmLoadAppKey @ 0x1406BDA5C (CmLoadAppKey.c)
 *     VrpPreOpenOrCreate @ 0x1406C1A34 (VrpPreOpenOrCreate.c)
 *     IopGetDeviceInterfaces @ 0x1406C4A94 (IopGetDeviceInterfaces.c)
 *     _CmIsRootDevice @ 0x1406C7E80 (_CmIsRootDevice.c)
 *     SepIsImageInMinTcbList @ 0x14070E2F8 (SepIsImageInMinTcbList.c)
 *     MiObtainSectionForDriver @ 0x14072EE44 (MiObtainSectionForDriver.c)
 *     VrpPreLoadKey @ 0x140735EB4 (VrpPreLoadKey.c)
 *     VrpCreateNamespaceNode @ 0x140737348 (VrpCreateNamespaceNode.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x140737F24 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     SepGetCachedHandlesEntry @ 0x1407397EC (SepGetCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x1407448F8 (SepValidateReferencedCachedHandles.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1407458FC (EtwpGetLoggerInfoFromContext.c)
 *     ObpLookupDirectoryUsingHash @ 0x14076174C (ObpLookupDirectoryUsingHash.c)
 *     PiFindDevInstMatch @ 0x1407705F4 (PiFindDevInstMatch.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14077F0F0 (IopDeviceInterfaceFilterCallback.c)
 *     IopQueryRegistryKeySystemPath @ 0x140782C0C (IopQueryRegistryKeySystemPath.c)
 *     SepIsNgenImage @ 0x14078E8D4 (SepIsNgenImage.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14078F2C0 (PiUEventQueueBroadcastEventEntry.c)
 *     MiUseLargeDriverPage @ 0x140793D44 (MiUseLargeDriverPage.c)
 *     PspIdentityBasedJobBreakaway @ 0x14079BB70 (PspIdentityBasedJobBreakaway.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 *     KsepCacheDeviceQueryData @ 0x140800E58 (KsepCacheDeviceQueryData.c)
 *     IopIsReportedAlready @ 0x140803270 (IopIsReportedAlready.c)
 *     CmpFindMachineHiveByMountPoint @ 0x140818924 (CmpFindMachineHiveByMountPoint.c)
 *     SLQueryLicenseValueInternal @ 0x14081A004 (SLQueryLicenseValueInternal.c)
 *     PiPnpRtlInit @ 0x14081BE64 (PiPnpRtlInit.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14081DBF0 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140824A50 (_CmDeviceClassesSubkeyCallback.c)
 *     PipQueryBindingResolution @ 0x14083888C (PipQueryBindingResolution.c)
 *     PipAddRequestToEdge @ 0x140838B5C (PipAddRequestToEdge.c)
 *     IopCreateSecureDeviceClassSettings @ 0x14083B634 (IopCreateSecureDeviceClassSettings.c)
 *     AdtpLookupDriveLetter @ 0x14083DCF8 (AdtpLookupDriveLetter.c)
 *     DrvDbFindDatabaseNode @ 0x1408661B4 (DrvDbFindDatabaseNode.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140871408 (PiRemoveDeferredSetInterfaceState.c)
 *     PiDevCfgConfigureDevice @ 0x14087384C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140875198 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1408766D8 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgResolveVariable @ 0x140878210 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveMultiSzValue @ 0x1408784A4 (PiDevCfgResolveMultiSzValue.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14087B034 (RtlpGetNtProductTypeFromRegistry.c)
 *     PipDeleteBindingId @ 0x140951594 (PipDeleteBindingId.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1409579A0 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140959960 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14096E128 (PiDrvDbResolveSystemFilePath.c)
 *     KseHookQueryValueKey @ 0x140975140 (KseHookQueryValueKey.c)
 *     PopBatteryDeviceState @ 0x1409920CC (PopBatteryDeviceState.c)
 *     ExpFindArcName @ 0x1409F9550 (ExpFindArcName.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140A35010 (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     AdtpBuildAccessesString @ 0x140A58C90 (AdtpBuildAccessesString.c)
 *     _PnpCtxFindNode @ 0x140A5DCA8 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x140A62230 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140A62510 (_CmServiceFilterCallback.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140A6FD28 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VfDriverLoadImage @ 0x140AB9ED8 (VfDriverLoadImage.c)
 *     VfDriverLoadSucceeded @ 0x140ABA300 (VfDriverLoadSucceeded.c)
 *     ViIsDriverSuspectForVerifier @ 0x140ABFB4C (ViIsDriverSuspectForVerifier.c)
 *     VfDriverApplyDifVerification @ 0x140AC72D8 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140AC7498 (VfDriverEnableVerifier.c)
 *     VfDriverRemoveDifVerification @ 0x140AC7778 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140AC7934 (ViDriverReApplyVerifierForAll.c)
 *     VfCheckUserHandle @ 0x140AD0CE4 (VfCheckUserHandle.c)
 *     VfSuspectDriversLoadCallback @ 0x140AD7704 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x140AD7AB4 (VfSuspectDriversUnloadCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x140AD7CE0 (ViSuspectDriversLookupEntry.c)
 *     VfAddVerifierEntry @ 0x140ADA630 (VfAddVerifierEntry.c)
 *     VfFilterAttach @ 0x140ADC20C (VfFilterAttach.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 *     CmpFindHiveSubKey @ 0x140B32F34 (CmpFindHiveSubKey.c)
 *     CmpDoSort @ 0x140B34CB0 (CmpDoSort.c)
 *     ViInitSystemPhase0 @ 0x140B49D78 (ViInitSystemPhase0.c)
 *     VfInitBootDriversLoaded @ 0x140B4EE44 (VfInitBootDriversLoaded.c)
 *     CmpCreateHardwareProfiles @ 0x140B50B04 (CmpCreateHardwareProfiles.c)
 *     PpInitGetGroupOrderIndex @ 0x140B591EC (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x140B5935C (PipLookupGroupName.c)
 *     CmGetSystemDriverList @ 0x140B59568 (CmGetSystemDriverList.c)
 *     PnpLoadBootFilterDriver @ 0x140B6936C (PnpLoadBootFilterDriver.c)
 *     ExpPrmInitialization @ 0x140B7157C (ExpPrmInitialization.c)
 *     ViLogAndLoadXdv @ 0x140B93AE4 (ViLogAndLoadXdv.c)
 *     CmpGetKnownHivePathNode @ 0x140B95CEC (CmpGetKnownHivePathNode.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

BOOLEAN __stdcall RtlEqualUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 *v4; // rdx
  char v5; // r8
  unsigned __int16 *v6; // r10
  unsigned __int64 v7; // r9
  struct _LIST_ENTRY *Flink; // rdi
  char *v10; // rax
  _QWORD *v11; // r10
  char *v12; // rbx
  signed __int64 v13; // r10
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r11

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = *v6;
  Flink = CurrentServerSiloGlobals[77].Flink;
  if ( (_DWORD)v7 != *v4 )
    return 0;
  v10 = (char *)*((_QWORD *)v6 + 1);
  v11 = (_QWORD *)*((_QWORD *)v4 + 1);
  v12 = &v10[v7];
  if ( v7 >= 8 )
  {
    do
    {
      if ( *(_QWORD *)v10 != *v11 )
        break;
      LODWORD(v7) = v7 - 8;
      if ( !(_DWORD)v7 )
        return 1;
      v10 += 8;
      ++v11;
    }
    while ( (unsigned int)v7 >= 8 );
  }
  if ( v10 < v12 )
  {
    if ( v5 )
    {
      v13 = (char *)v11 - v10;
      while ( 1 )
      {
        v14 = *(unsigned __int16 *)v10;
        v15 = *(unsigned __int16 *)&v10[v13];
        if ( (_WORD)v14 != (_WORD)v15 )
        {
          if ( (unsigned int)v14 >= 0x61 )
          {
            if ( (unsigned int)v14 > 0x7A )
            {
              if ( Flink && (unsigned __int16)v14 >= 0xC0u )
                LOWORD(v14) = *((_WORD *)&Flink->Flink
                              + (v14 & 0xF)
                              + *((unsigned __int16 *)&Flink->Flink
                                + ((unsigned __int8)v14 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v14 >> 8))))
                            + v14;
            }
            else
            {
              LOWORD(v14) = v14 - 32;
            }
          }
          if ( (unsigned int)v15 >= 0x61 )
          {
            if ( (unsigned int)v15 > 0x7A )
            {
              if ( Flink )
              {
                if ( (unsigned __int16)v15 >= 0xC0u )
                  LOWORD(v15) = *((_WORD *)&Flink->Flink
                                + (v15 & 0xF)
                                + *((unsigned __int16 *)&Flink->Flink
                                  + ((unsigned __int8)v15 >> 4)
                                  + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v15 >> 8))))
                              + v15;
              }
            }
            else
            {
              LOWORD(v15) = v15 - 32;
            }
          }
          if ( (_WORD)v14 != (_WORD)v15 )
            break;
        }
        v10 += 2;
        if ( v10 >= v12 )
          return 1;
      }
    }
    else
    {
      while ( *(_WORD *)v10 == *(_WORD *)v11 )
      {
        v10 += 2;
        v11 = (_QWORD *)((char *)v11 + 2);
        if ( v10 >= v12 )
          return 1;
      }
    }
    return 0;
  }
  return 1;
}
