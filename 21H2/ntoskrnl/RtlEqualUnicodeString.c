/*
 * XREFs of RtlEqualUnicodeString @ 0x140601410
 * Callers:
 *     AuthzBasepEqualUnicodeString @ 0x14024DBB0 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14024EBF0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14024F520 (AuthzBasepCompareUnicodeStringOperands.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1402ED600 (RtlDeriveCapabilitySidsFromName.c)
 *     PnpMultiSzContainsString @ 0x140392E00 (PnpMultiSzContainsString.c)
 *     PiDrvDbFindNode @ 0x14051017C (PiDrvDbFindNode.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x140573EC0 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x140579190 (PopEmModuleAddressMatchCallback.c)
 *     PopPlLookupDevicePowerProfile @ 0x14057E528 (PopPlLookupDevicePowerProfile.c)
 *     VrpCreateNamespaceNode @ 0x1405D34B4 (VrpCreateNamespaceNode.c)
 *     VrpPreOpenOrCreate @ 0x1405D4868 (VrpPreOpenOrCreate.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1405D683C (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     PspIdentityBasedJobBreakaway @ 0x1405D9294 (PspIdentityBasedJobBreakaway.c)
 *     ObpLookupDirectoryUsingHash @ 0x140601F48 (ObpLookupDirectoryUsingHash.c)
 *     SepIsImageInMinTcbList @ 0x140602224 (SepIsImageInMinTcbList.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406024C8 (EtwpAcquireLoggerContextByLoggerName.c)
 *     DrvDbFindDatabaseNode @ 0x14060258C (DrvDbFindDatabaseNode.c)
 *     SepIsNgenImage @ 0x140603AA8 (SepIsNgenImage.c)
 *     IopGetDeviceInterfaces @ 0x14063A508 (IopGetDeviceInterfaces.c)
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 *     CmLoadAppKey @ 0x14066FEEC (CmLoadAppKey.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1406ACCF0 (IopDeviceInterfaceFilterCallback.c)
 *     _CmIsRootDevice @ 0x1406B0B44 (_CmIsRootDevice.c)
 *     EtwpLookupLoggerIdByName @ 0x1406DD8EC (EtwpLookupLoggerIdByName.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406DF154 (EtwpGetLoggerInfoFromContext.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x140717EA8 (SepFindMatchingCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x1407182A0 (SepValidateReferencedCachedHandles.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140739950 (IopCreateSecureDeviceClassSettings.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073B090 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgFindDeviceDriver @ 0x14073BD08 (PiDevCfgFindDeviceDriver.c)
 *     PiFindDevInstMatch @ 0x14073FE24 (PiFindDevInstMatch.c)
 *     IopQueryRegistryKeySystemPath @ 0x140740FE0 (IopQueryRegistryKeySystemPath.c)
 *     PiDevCfgConfigureDevice @ 0x140742E20 (PiDevCfgConfigureDevice.c)
 *     MiObtainSectionForDriver @ 0x14075C358 (MiObtainSectionForDriver.c)
 *     MiResolveImageReferences @ 0x14075D20C (MiResolveImageReferences.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1407609A0 (PiPnpRtlServiceFilterCallback.c)
 *     PipFindDeviceOverrideEntry @ 0x1407641FC (PipFindDeviceOverrideEntry.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14076C27C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14076C2EC (PiUEventQueueBroadcastEventEntry.c)
 *     MiUseLargeDriverPage @ 0x140770E88 (MiUseLargeDriverPage.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14077AA04 (RtlpGetNtProductTypeFromRegistry.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14077B33C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14077B570 (PiDevCfgResolveVariable.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x14078146C (PiRemoveDeferredSetInterfaceState.c)
 *     CmpFindMachineHiveByMountPoint @ 0x14078F4F0 (CmpFindMachineHiveByMountPoint.c)
 *     SLQueryLicenseValueInternal @ 0x1407AB014 (SLQueryLicenseValueInternal.c)
 *     IopIsReportedAlready @ 0x1407AEDC8 (IopIsReportedAlready.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1407B1000 (_CmDeviceClassesSubkeyCallback.c)
 *     PipQueryBindingResolution @ 0x1407B4BF8 (PipQueryBindingResolution.c)
 *     AdtpLookupDriveLetter @ 0x1407B8BCC (AdtpLookupDriveLetter.c)
 *     KsepCacheDeviceQueryData @ 0x1407C7C38 (KsepCacheDeviceQueryData.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140883050 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpPreLoadKey @ 0x14088338C (VrpPreLoadKey.c)
 *     PipAddRequestToEdge @ 0x14089D95C (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x14089DBD4 (PipDeleteBindingId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A4F1C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B71B8 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408B7ABC (PiDrvDbResolveSystemFilePath.c)
 *     KseHookQueryValueKey @ 0x1408C1AE0 (KseHookQueryValueKey.c)
 *     PopBatteryDeviceState @ 0x1408ECF18 (PopBatteryDeviceState.c)
 *     ExpFindArcName @ 0x14094FF14 (ExpFindArcName.c)
 *     AdtpBuildAccessesString @ 0x14096E2B8 (AdtpBuildAccessesString.c)
 *     _PnpCtxFindNode @ 0x1409746F8 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x140976EB0 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140977240 (_CmServiceFilterCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x1409C2574 (ViSuspectDriversLookupEntry.c)
 *     VfUtilIsProtectedDriver @ 0x1409C688C (VfUtilIsProtectedDriver.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C6CE0 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x1409C8620 (VfDriverEnableVerifier.c)
 *     ViDriverReApplyVerifierForAll @ 0x1409C8B08 (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x1409D9B98 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x1409D9FBC (VfSuspectDriversUnloadCallback.c)
 *     VfCheckUserHandle @ 0x1409DA184 (VfCheckUserHandle.c)
 *     VfFilterAttach @ 0x1409E4EF4 (VfFilterAttach.c)
 *     VfAddVerifierEntry @ 0x1409EC9D8 (VfAddVerifierEntry.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 *     VfInitBootDriversLoaded @ 0x140A4ED74 (VfInitBootDriversLoaded.c)
 *     CmpCreateHardwareProfiles @ 0x140A58540 (CmpCreateHardwareProfiles.c)
 *     PnpLoadBootFilterDriver @ 0x140A5B5A0 (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x140A5EC00 (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x140A5ED70 (PipLookupGroupName.c)
 *     CmGetSystemDriverList @ 0x140A5F174 (CmGetSystemDriverList.c)
 *     CmpFindHiveSubKey @ 0x140A5F704 (CmpFindHiveSubKey.c)
 *     CmpDoSort @ 0x140A605D8 (CmpDoSort.c)
 *     ViInitSystemPhase0 @ 0x140A6FAB8 (ViInitSystemPhase0.c)
 *     CmpGetKnownHivePathNode @ 0x140A8EBCC (CmpGetKnownHivePathNode.c)
 *     ViLogAndLoadXdv @ 0x140A938F4 (ViLogAndLoadXdv.c)
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
