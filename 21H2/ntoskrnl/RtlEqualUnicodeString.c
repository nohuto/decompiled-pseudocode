/*
 * XREFs of RtlEqualUnicodeString @ 0x1406F0B70
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x14029E950 (RtlDeriveCapabilitySidsFromName.c)
 *     AuthzBasepEqualUnicodeString @ 0x1402F2400 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1402F3440 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1402F3D70 (AuthzBasepCompareUnicodeStringOperands.c)
 *     PnpMultiSzContainsString @ 0x140392F50 (PnpMultiSzContainsString.c)
 *     PiDrvDbFindNode @ 0x1405103BC (PiDrvDbFindNode.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x140574100 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x1405793D0 (PopEmModuleAddressMatchCallback.c)
 *     PopPlLookupDevicePowerProfile @ 0x14057E768 (PopPlLookupDevicePowerProfile.c)
 *     VrpCreateNamespaceNode @ 0x1405D34B4 (VrpCreateNamespaceNode.c)
 *     VrpPreOpenOrCreate @ 0x1405D4868 (VrpPreOpenOrCreate.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1405D683C (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     PspIdentityBasedJobBreakaway @ 0x1405D9294 (PspIdentityBasedJobBreakaway.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14060B3E0 (IopDeviceInterfaceFilterCallback.c)
 *     _CmIsRootDevice @ 0x14060FAF4 (_CmIsRootDevice.c)
 *     IopGetDeviceInterfaces @ 0x14062F318 (IopGetDeviceInterfaces.c)
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 *     EtwpLookupLoggerIdByName @ 0x1406B4BCC (EtwpLookupLoggerIdByName.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406B6434 (EtwpGetLoggerInfoFromContext.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x1406C64F8 (SepFindMatchingCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x1406C68F0 (SepValidateReferencedCachedHandles.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406F16A8 (ObpLookupDirectoryUsingHash.c)
 *     SepIsImageInMinTcbList @ 0x1406F1984 (SepIsImageInMinTcbList.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406F1C28 (EtwpAcquireLoggerContextByLoggerName.c)
 *     DrvDbFindDatabaseNode @ 0x1406F1CEC (DrvDbFindDatabaseNode.c)
 *     SepIsNgenImage @ 0x1406F31D8 (SepIsNgenImage.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140739B10 (IopCreateSecureDeviceClassSettings.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073B250 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgFindDeviceDriver @ 0x14073BEC8 (PiDevCfgFindDeviceDriver.c)
 *     PiFindDevInstMatch @ 0x14073FFE4 (PiFindDevInstMatch.c)
 *     IopQueryRegistryKeySystemPath @ 0x1407411A0 (IopQueryRegistryKeySystemPath.c)
 *     PiDevCfgConfigureDevice @ 0x140742FE0 (PiDevCfgConfigureDevice.c)
 *     MiObtainSectionForDriver @ 0x14075C518 (MiObtainSectionForDriver.c)
 *     MiResolveImageReferences @ 0x14075D3CC (MiResolveImageReferences.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140760B60 (PiPnpRtlServiceFilterCallback.c)
 *     PipFindDeviceOverrideEntry @ 0x1407643BC (PipFindDeviceOverrideEntry.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14076C43C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14076C4AC (PiUEventQueueBroadcastEventEntry.c)
 *     MiUseLargeDriverPage @ 0x140771048 (MiUseLargeDriverPage.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14077ABC4 (RtlpGetNtProductTypeFromRegistry.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14077B4FC (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14077B730 (PiDevCfgResolveVariable.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x14078162C (PiRemoveDeferredSetInterfaceState.c)
 *     CmpFindMachineHiveByMountPoint @ 0x140790AA0 (CmpFindMachineHiveByMountPoint.c)
 *     SLQueryLicenseValueInternal @ 0x1407AB214 (SLQueryLicenseValueInternal.c)
 *     IopIsReportedAlready @ 0x1407AEFC8 (IopIsReportedAlready.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1407B11A0 (_CmDeviceClassesSubkeyCallback.c)
 *     PipQueryBindingResolution @ 0x1407B6518 (PipQueryBindingResolution.c)
 *     AdtpLookupDriveLetter @ 0x1407B90EC (AdtpLookupDriveLetter.c)
 *     KsepCacheDeviceQueryData @ 0x1407C7F58 (KsepCacheDeviceQueryData.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1408831B0 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpPreLoadKey @ 0x1408834EC (VrpPreLoadKey.c)
 *     PipAddRequestToEdge @ 0x14089DABC (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x14089DD34 (PipDeleteBindingId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A507C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B7318 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408B7C1C (PiDrvDbResolveSystemFilePath.c)
 *     KseHookQueryValueKey @ 0x1408C1C40 (KseHookQueryValueKey.c)
 *     PopBatteryDeviceState @ 0x1408ED078 (PopBatteryDeviceState.c)
 *     ExpFindArcName @ 0x1409500E4 (ExpFindArcName.c)
 *     AdtpBuildAccessesString @ 0x14096E498 (AdtpBuildAccessesString.c)
 *     _PnpCtxFindNode @ 0x1409748D8 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x140977090 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140977420 (_CmServiceFilterCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x1409C3574 (ViSuspectDriversLookupEntry.c)
 *     VfUtilIsProtectedDriver @ 0x1409C788C (VfUtilIsProtectedDriver.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C7CE0 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x1409C9620 (VfDriverEnableVerifier.c)
 *     ViDriverReApplyVerifierForAll @ 0x1409C9B08 (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x1409DAB98 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x1409DAFBC (VfSuspectDriversUnloadCallback.c)
 *     VfCheckUserHandle @ 0x1409DB184 (VfCheckUserHandle.c)
 *     VfFilterAttach @ 0x1409E5EF4 (VfFilterAttach.c)
 *     VfAddVerifierEntry @ 0x1409ED9D8 (VfAddVerifierEntry.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 *     VfInitBootDriversLoaded @ 0x140A4FD74 (VfInitBootDriversLoaded.c)
 *     CmpCreateHardwareProfiles @ 0x140A59540 (CmpCreateHardwareProfiles.c)
 *     PnpLoadBootFilterDriver @ 0x140A5C5A0 (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x140A5FC00 (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x140A5FD70 (PipLookupGroupName.c)
 *     CmGetSystemDriverList @ 0x140A60174 (CmGetSystemDriverList.c)
 *     CmpFindHiveSubKey @ 0x140A60704 (CmpFindHiveSubKey.c)
 *     CmpDoSort @ 0x140A615D8 (CmpDoSort.c)
 *     ViInitSystemPhase0 @ 0x140A70AB8 (ViInitSystemPhase0.c)
 *     CmpGetKnownHivePathNode @ 0x140A8FBCC (CmpGetKnownHivePathNode.c)
 *     ViLogAndLoadXdv @ 0x140A948F4 (ViLogAndLoadXdv.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlEqualUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  wchar_t *Buffer; // rax
  wchar_t *v6; // r10
  wchar_t *i; // rbx
  signed __int64 v8; // r10
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r11

  Length = String1->Length;
  if ( (_DWORD)Length != String2->Length )
    return 0;
  Buffer = String1->Buffer;
  v6 = String2->Buffer;
  for ( i = (wchar_t *)((char *)Buffer + Length); (unsigned int)Length >= 8; v6 += 4 )
  {
    if ( *(_QWORD *)Buffer != *(_QWORD *)v6 )
      break;
    LODWORD(Length) = Length - 8;
    if ( !(_DWORD)Length )
      return 1;
    Buffer += 4;
  }
  if ( Buffer < i )
  {
    if ( CaseInSensitive )
    {
      v8 = (char *)v6 - (char *)Buffer;
      while ( 1 )
      {
        v9 = *Buffer;
        v10 = *(wchar_t *)((char *)Buffer + v8);
        if ( (_WORD)v9 != (_WORD)v10 )
        {
          if ( (unsigned int)v9 >= 0x61 )
          {
            if ( (unsigned int)v9 > 0x7A )
            {
              if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v9 >= 0xC0u )
                LOWORD(v9) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                      + 2
                                      * ((v9 & 0xF)
                                       + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                             + 2LL
                                                             * (((unsigned __int8)v9 >> 4)
                                                              + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                                  + 2 * (v9 >> 8))))))
                           + v9;
            }
            else
            {
              LOWORD(v9) = v9 - 32;
            }
          }
          if ( (unsigned int)v10 >= 0x61 )
          {
            if ( (unsigned int)v10 > 0x7A )
            {
              if ( Nls844UnicodeUpcaseTable )
              {
                if ( (unsigned __int16)v10 >= 0xC0u )
                  LOWORD(v10) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                         + 2
                                         * ((v10 & 0xF)
                                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                + 2LL
                                                                * (((unsigned __int8)v10 >> 4)
                                                                 + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v10 >> 8))))))
                              + v10;
              }
            }
            else
            {
              LOWORD(v10) = v10 - 32;
            }
          }
          if ( (_WORD)v9 != (_WORD)v10 )
            break;
        }
        if ( ++Buffer >= i )
          return 1;
      }
    }
    else
    {
      while ( *Buffer == *v6 )
      {
        ++Buffer;
        ++v6;
        if ( Buffer >= i )
          return 1;
      }
    }
    return 0;
  }
  return 1;
}
