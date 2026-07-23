/*
 * XREFs of memcmp @ 0x1403D2B50
 * Callers:
 *     RtlAreNamesEqual @ 0x140207E40 (RtlAreNamesEqual.c)
 *     RtlpOwnerAcesPresent @ 0x140214630 (RtlpOwnerAcesPresent.c)
 *     HalpAcpiGetRsdt @ 0x140216204 (HalpAcpiGetRsdt.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x14021655C (HalpAcpiIsCachedTableCompromised.c)
 *     SepPotentialGlobalTableAttribute @ 0x140241AF4 (SepPotentialGlobalTableAttribute.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140245270 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     RtlEqualSid @ 0x14026A980 (RtlEqualSid.c)
 *     RtlSidHashLookup @ 0x14026C600 (RtlSidHashLookup.c)
 *     RtlFindAceBySid @ 0x14026C8B0 (RtlFindAceBySid.c)
 *     RtlSidDominates @ 0x140285740 (RtlSidDominates.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1402F4170 (RtlpIsNameInExpressionPrivate.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1402F49CC (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1402F56EC (AuthzBasepFindSecurityAttributeValue.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140358A30 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepMandatoryIntegrityCheck @ 0x140359570 (SepMandatoryIntegrityCheck.c)
 *     SepNormalAccessCheck @ 0x14035B720 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x14035BFF0 (SepMaximumAccessCheck.c)
 *     CompareEventEntry @ 0x140375FBC (CompareEventEntry.c)
 *     HalMatchAcpiOemTableId @ 0x1403CED30 (HalMatchAcpiOemTableId.c)
 *     IoRaiseInformationalHardError @ 0x140505EB0 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x140506A98 (IopIsKnownGoodLegacyFsFilter.c)
 *     KiDisplayBlueScreen @ 0x140518300 (KiDisplayBlueScreen.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1405C1E74 (AuthzBasepCompareOctetStringOperands.c)
 *     FsRtlNotifyFilterReportChange @ 0x1405EF9C0 (FsRtlNotifyFilterReportChange.c)
 *     TraitsCompare @ 0x1405F4B10 (TraitsCompare.c)
 *     RtlpInternEntryMatch @ 0x1405F76E0 (RtlpInternEntryMatch.c)
 *     EtwpGenerateFileName @ 0x14060A1EC (EtwpGenerateFileName.c)
 *     PfSnEndProcessTrace @ 0x14061954C (PfSnEndProcessTrace.c)
 *     ConstraintEval @ 0x1406233AC (ConstraintEval.c)
 *     PropertyEval @ 0x140625224 (PropertyEval.c)
 *     PiPnpRtlCmActionCallback @ 0x14062A730 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x14062B220 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14062BE5C (PiDmObjectUpdateCachedObjectProperty.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406315BC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     ObLogSecurityDescriptor @ 0x140654CD0 (ObLogSecurityDescriptor.c)
 *     CmpFindMatchingDescriptorCell @ 0x1406629A8 (CmpFindMatchingDescriptorCell.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1406788A4 (PfSnPrefetchCacheEntryGet.c)
 *     PopEtAggregateFind @ 0x140683E04 (PopEtAggregateFind.c)
 *     ExpWnfFindScopeInstance @ 0x14069FEEC (ExpWnfFindScopeInstance.c)
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1406B38CC (PfSnPrefetchCacheEntryUpdate.c)
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 *     SepSidInSidAndAttributes @ 0x1406C8448 (SepSidInSidAndAttributes.c)
 *     RtlFindUnicodeSubstring @ 0x1406DCFD0 (RtlFindUnicodeSubstring.c)
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 *     PiDmObjectProcessPropertyChange @ 0x14074A614 (PiDmObjectProcessPropertyChange.c)
 *     PnpProcessTargetDeviceEvent @ 0x14074B2E0 (PnpProcessTargetDeviceEvent.c)
 *     PiDcCompareUpdateProperties @ 0x140768C80 (PiDcCompareUpdateProperties.c)
 *     PopApplyPolicy @ 0x140793F7C (PopApplyPolicy.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1407AA35C (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1407AA69C (RtlpCheckDynamicTimeZoneInformation.c)
 *     SLQueryLicenseValueInternal @ 0x1407AB214 (SLQueryLicenseValueInternal.c)
 *     FsRtlIsDbcsInExpression @ 0x14088C770 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A8270 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1408AEA6C (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408C2D34 (AlpcpEnterStateChangeEventMessageLog.c)
 *     MiComputeBadImageHeaderType @ 0x1408C7618 (MiComputeBadImageHeaderType.c)
 *     RtlReplaceSidInSd @ 0x140913AA0 (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x140921580 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140921EB0 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x140924790 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x140924914 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     EtwpCompareGuid @ 0x1409417F0 (EtwpCompareGuid.c)
 *     EtwpUpdateDisallowedGuids @ 0x14094180C (EtwpUpdateDisallowedGuids.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E460 (SLUpdateLicenseDataInternal.c)
 *     ExpKdPullRemoteFileForUser @ 0x14095BB9C (ExpKdPullRemoteFileForUser.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140964A2C (SdbpCheckMatchingRegistryValue.c)
 *     BiExportEfiBootManager @ 0x140971DA0 (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x14097334C (BiUpdateEfiEntry.c)
 *     IovpExamineIrpStackForwarding @ 0x1409D1B74 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x1409E5440 (ViCtxEqualExtendedState.c)
 *     CmpGetBiosDate @ 0x140A5A980 (CmpGetBiosDate.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A5DA78 (PipCheckSystemFirmwareUpdated.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140A65E3C (HalpAcpiDetectMachineSpecificActions.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
