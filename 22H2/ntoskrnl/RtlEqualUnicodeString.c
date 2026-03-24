/*
 * XREFs of RtlEqualUnicodeString @ 0x140601410
 * Callers:
 *     AuthzBasepEqualUnicodeString @ 0x14024D520 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14024E560 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14024EE90 (AuthzBasepCompareUnicodeStringOperands.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x140360020 (RtlDeriveCapabilitySidsFromName.c)
 *     PnpMultiSzContainsString @ 0x140392700 (PnpMultiSzContainsString.c)
 *     PiDrvDbFindNode @ 0x1405100BC (PiDrvDbFindNode.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x140573E00 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x1405790D0 (PopEmModuleAddressMatchCallback.c)
 *     PopPlLookupDevicePowerProfile @ 0x14057E468 (PopPlLookupDevicePowerProfile.c)
 *     VrpCreateNamespaceNode @ 0x1405D34B4 (VrpCreateNamespaceNode.c)
 *     VrpPreOpenOrCreate @ 0x1405D4868 (VrpPreOpenOrCreate.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1405D683C (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     PspIdentityBasedJobBreakaway @ 0x1405D9294 (PspIdentityBasedJobBreakaway.c)
 *     ObpLookupDirectoryUsingHash @ 0x140601F48 (ObpLookupDirectoryUsingHash.c)
 *     SepIsImageInMinTcbList @ 0x140602224 (SepIsImageInMinTcbList.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406024C8 (EtwpAcquireLoggerContextByLoggerName.c)
 *     DrvDbFindDatabaseNode @ 0x14060258C (DrvDbFindDatabaseNode.c)
 *     SepIsNgenImage @ 0x140603AA8 (SepIsNgenImage.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14068FCA0 (IopDeviceInterfaceFilterCallback.c)
 *     _CmIsRootDevice @ 0x140693D04 (_CmIsRootDevice.c)
 *     IopGetDeviceInterfaces @ 0x1406B32E8 (IopGetDeviceInterfaces.c)
 *     CmSetValueKey @ 0x1406DD4B0 (CmSetValueKey.c)
 *     CmLoadAppKey @ 0x1406E8CDC (CmLoadAppKey.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x14070F048 (SepFindMatchingCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x14070F440 (SepValidateReferencedCachedHandles.c)
 *     EtwpLookupLoggerIdByName @ 0x140711184 (EtwpLookupLoggerIdByName.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1407129F4 (EtwpGetLoggerInfoFromContext.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140735DF8 (IopCreateSecureDeviceClassSettings.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140737538 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgFindDeviceDriver @ 0x1407381B0 (PiDevCfgFindDeviceDriver.c)
 *     PiFindDevInstMatch @ 0x14073C2C4 (PiFindDevInstMatch.c)
 *     IopQueryRegistryKeySystemPath @ 0x14073D480 (IopQueryRegistryKeySystemPath.c)
 *     PiDevCfgConfigureDevice @ 0x14073F2C0 (PiDevCfgConfigureDevice.c)
 *     MiObtainSectionForDriver @ 0x14075BB48 (MiObtainSectionForDriver.c)
 *     MiResolveImageReferences @ 0x14075C9FC (MiResolveImageReferences.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14075FFC0 (PiPnpRtlServiceFilterCallback.c)
 *     PipFindDeviceOverrideEntry @ 0x14076381C (PipFindDeviceOverrideEntry.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14076BA48 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14076BAB8 (PiUEventQueueBroadcastEventEntry.c)
 *     MiUseLargeDriverPage @ 0x140770B48 (MiUseLargeDriverPage.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14077A904 (RtlpGetNtProductTypeFromRegistry.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14077B23C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14077B470 (PiDevCfgResolveVariable.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x14078136C (PiRemoveDeferredSetInterfaceState.c)
 *     CmpFindMachineHiveByMountPoint @ 0x140799EF0 (CmpFindMachineHiveByMountPoint.c)
 *     SLQueryLicenseValueInternal @ 0x1407AB444 (SLQueryLicenseValueInternal.c)
 *     IopIsReportedAlready @ 0x1407AF208 (IopIsReportedAlready.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1407B1440 (_CmDeviceClassesSubkeyCallback.c)
 *     PipQueryBindingResolution @ 0x1407B67B8 (PipQueryBindingResolution.c)
 *     AdtpLookupDriveLetter @ 0x1407B938C (AdtpLookupDriveLetter.c)
 *     KsepCacheDeviceQueryData @ 0x1407C7B58 (KsepCacheDeviceQueryData.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1408830A0 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpPreLoadKey @ 0x1408833DC (VrpPreLoadKey.c)
 *     PipAddRequestToEdge @ 0x14089D9AC (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x14089DC24 (PipDeleteBindingId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A4F6C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B7208 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408B7B0C (PiDrvDbResolveSystemFilePath.c)
 *     KseHookQueryValueKey @ 0x1408C1B30 (KseHookQueryValueKey.c)
 *     PopBatteryDeviceState @ 0x1408ECF68 (PopBatteryDeviceState.c)
 *     ExpFindArcName @ 0x14094FF64 (ExpFindArcName.c)
 *     AdtpBuildAccessesString @ 0x14096E308 (AdtpBuildAccessesString.c)
 *     _PnpCtxFindNode @ 0x140974748 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x140976F00 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140977290 (_CmServiceFilterCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x1409C2584 (ViSuspectDriversLookupEntry.c)
 *     VfUtilIsProtectedDriver @ 0x1409C689C (VfUtilIsProtectedDriver.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C6CF0 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x1409C8630 (VfDriverEnableVerifier.c)
 *     ViDriverReApplyVerifierForAll @ 0x1409C8B18 (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x1409D9BA8 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x1409D9FCC (VfSuspectDriversUnloadCallback.c)
 *     VfCheckUserHandle @ 0x1409DA194 (VfCheckUserHandle.c)
 *     VfFilterAttach @ 0x1409E4F04 (VfFilterAttach.c)
 *     VfAddVerifierEntry @ 0x1409EC9E8 (VfAddVerifierEntry.c)
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
