/*
 * XREFs of memcmp @ 0x1403D29E0
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x14024F920 (RtlpIsNameInExpressionPrivate.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14025017C (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x140250EDC (AuthzBasepFindSecurityAttributeValue.c)
 *     RtlSidDominates @ 0x140252890 (RtlSidDominates.c)
 *     RtlEqualSid @ 0x14027C9E0 (RtlEqualSid.c)
 *     RtlSidHashLookup @ 0x14027E660 (RtlSidHashLookup.c)
 *     RtlFindAceBySid @ 0x14027E910 (RtlFindAceBySid.c)
 *     SepPotentialGlobalTableAttribute @ 0x14027F2A4 (SepPotentialGlobalTableAttribute.c)
 *     RtlAreNamesEqual @ 0x14028ACA0 (RtlAreNamesEqual.c)
 *     HalpAcpiGetRsdt @ 0x140294540 (HalpAcpiGetRsdt.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x14029489C (HalpAcpiIsCachedTableCompromised.c)
 *     RtlpOwnerAcesPresent @ 0x14029C4D0 (RtlpOwnerAcesPresent.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1402C6A90 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x14034DCE0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepMandatoryIntegrityCheck @ 0x14034E820 (SepMandatoryIntegrityCheck.c)
 *     SepNormalAccessCheck @ 0x1403509D0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1403512A0 (SepMaximumAccessCheck.c)
 *     CompareEventEntry @ 0x14037646C (CompareEventEntry.c)
 *     HalMatchAcpiOemTableId @ 0x1403CEBC0 (HalMatchAcpiOemTableId.c)
 *     IoRaiseInformationalHardError @ 0x140505F30 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x140506B18 (IopIsKnownGoodLegacyFsFilter.c)
 *     KiDisplayBlueScreen @ 0x1405180C0 (KiDisplayBlueScreen.c)
 *     MiIdealClusterPage @ 0x140555E14 (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1405C1C44 (AuthzBasepCompareOctetStringOperands.c)
 *     SepSidInSidAndAttributes @ 0x1405DA558 (SepSidInSidAndAttributes.c)
 *     RtlFindUnicodeSubstring @ 0x1405ED870 (RtlFindUnicodeSubstring.c)
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     ExpWnfFindScopeInstance @ 0x14061043C (ExpWnfFindScopeInstance.c)
 *     PopEtAggregateFind @ 0x14061A1A4 (PopEtAggregateFind.c)
 *     ConstraintEval @ 0x14062E324 (ConstraintEval.c)
 *     PropertyEval @ 0x1406301A4 (PropertyEval.c)
 *     PiPnpRtlCmActionCallback @ 0x140635920 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x140636410 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14063704C (PiDmObjectUpdateCachedObjectProperty.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14063C7AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     ObLogSecurityDescriptor @ 0x14065FEB0 (ObLogSecurityDescriptor.c)
 *     CmpFindMatchingDescriptorCell @ 0x14066DB88 (CmpFindMatchingDescriptorCell.c)
 *     FsRtlNotifyFilterReportChange @ 0x14068FB50 (FsRtlNotifyFilterReportChange.c)
 *     TraitsCompare @ 0x1406955C0 (TraitsCompare.c)
 *     RtlpInternEntryMatch @ 0x1406989E8 (RtlpInternEntryMatch.c)
 *     EtwpGenerateFileName @ 0x1406ABAFC (EtwpGenerateFileName.c)
 *     PfSnEndProcessTrace @ 0x1406BA3DC (PfSnEndProcessTrace.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1406C9FB4 (PfSnPrefetchCacheEntryGet.c)
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1406DC5EC (PfSnPrefetchCacheEntryUpdate.c)
 *     EtwpStartLogger @ 0x1406DE1A0 (EtwpStartLogger.c)
 *     PiDmObjectProcessPropertyChange @ 0x14074A454 (PiDmObjectProcessPropertyChange.c)
 *     PnpProcessTargetDeviceEvent @ 0x14074B120 (PnpProcessTargetDeviceEvent.c)
 *     PiDcCompareUpdateProperties @ 0x140768AC0 (PiDcCompareUpdateProperties.c)
 *     PopApplyPolicy @ 0x1407929CC (PopApplyPolicy.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1407AA15C (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1407AA49C (RtlpCheckDynamicTimeZoneInformation.c)
 *     SLQueryLicenseValueInternal @ 0x1407AB014 (SLQueryLicenseValueInternal.c)
 *     FsRtlIsDbcsInExpression @ 0x14088C610 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A8110 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1408AE90C (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408C2BD4 (AlpcpEnterStateChangeEventMessageLog.c)
 *     MiComputeBadImageHeaderType @ 0x1408C74B8 (MiComputeBadImageHeaderType.c)
 *     RtlReplaceSidInSd @ 0x140913940 (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x140921420 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140921D50 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x140924630 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1409247B4 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     EtwpCompareGuid @ 0x140941620 (EtwpCompareGuid.c)
 *     EtwpUpdateDisallowedGuids @ 0x14094163C (EtwpUpdateDisallowedGuids.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E290 (SLUpdateLicenseDataInternal.c)
 *     ExpKdPullRemoteFileForUser @ 0x14095B9CC (ExpKdPullRemoteFileForUser.c)
 *     SdbpCheckMatchingRegistryValue @ 0x14096484C (SdbpCheckMatchingRegistryValue.c)
 *     BiExportEfiBootManager @ 0x140971BC0 (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x14097316C (BiUpdateEfiEntry.c)
 *     IovpExamineIrpStackForwarding @ 0x1409D0B74 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x1409E4440 (ViCtxEqualExtendedState.c)
 *     CmpGetBiosDate @ 0x140A59980 (CmpGetBiosDate.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A5CA78 (PipCheckSystemFirmwareUpdated.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140A64E3C (HalpAcpiDetectMachineSpecificActions.c)
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
