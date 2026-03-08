/*
 * XREFs of memcmp @ 0x1403D47D0
 * Callers:
 *     SepMaximumAccessCheck @ 0x140208450 (SepMaximumAccessCheck.c)
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 *     RtlFindAceBySid @ 0x140245DF0 (RtlFindAceBySid.c)
 *     SepPotentialGlobalTableAttribute @ 0x14024799C (SepPotentialGlobalTableAttribute.c)
 *     SepMandatoryIntegrityCheck @ 0x140263A50 (SepMandatoryIntegrityCheck.c)
 *     SeAccessCheckWithHint @ 0x1402653A0 (SeAccessCheckWithHint.c)
 *     SepNormalAccessCheck @ 0x140267220 (SepNormalAccessCheck.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x140297C74 (AuthzBasepFindSecurityAttributeValue.c)
 *     HalpAcpiGetRsdt @ 0x14029C328 (HalpAcpiGetRsdt.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x14029C76C (HalpAcpiIsCachedTableCompromised.c)
 *     RtlAreNamesEqual @ 0x1402B7510 (RtlAreNamesEqual.c)
 *     RtlpOwnerAcesPresent @ 0x1402CBBC0 (RtlpOwnerAcesPresent.c)
 *     RtlSidHashLookup @ 0x1402DFB10 (RtlSidHashLookup.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1402F707C (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlSidDominates @ 0x14030FF10 (RtlSidDominates.c)
 *     SepSidInTokenSidHash @ 0x14033DEA0 (SepSidInTokenSidHash.c)
 *     CompareEventEntry @ 0x14035F404 (CompareEventEntry.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140365D60 (RtlpIsNameInExpressionPrivate.c)
 *     KeUpdateSoftParkRankList @ 0x14038ECCC (KeUpdateSoftParkRankList.c)
 *     HalMatchAcpiOemTableId @ 0x14039C1E0 (HalMatchAcpiOemTableId.c)
 *     IoRaiseInformationalHardError @ 0x140554960 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1405555D4 (IopIsKnownGoodLegacyFsFilter.c)
 *     AsanWrapperMemcmp @ 0x140562D60 (AsanWrapperMemcmp.c)
 *     KiDisplayBlueScreen @ 0x140567D34 (KiDisplayBlueScreen.c)
 *     RtlpComparePropertyEntry @ 0x1405A8980 (RtlpComparePropertyEntry.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1405BE1E0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     MiFindSpecialPurposeMemoryType @ 0x14065DBE8 (MiFindSpecialPurposeMemoryType.c)
 *     MiIdealClusterPage @ 0x140667EB0 (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x14066D030 (AuthzBasepCompareOctetStringOperands.c)
 *     MinCryptCheckCertsAndKeys @ 0x140674F10 (MinCryptCheckCertsAndKeys.c)
 *     MinCryptIsCertPresent @ 0x14067503C (MinCryptIsCertPresent.c)
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x14067DCCC (MincrypK_ParseCertificateChainWithPolicy2.c)
 *     ExpWnfInvalidateDataStores @ 0x14067F77C (ExpWnfInvalidateDataStores.c)
 *     PnpProcessTargetDeviceEvent @ 0x140681D34 (PnpProcessTargetDeviceEvent.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     ObLogSecurityDescriptor @ 0x1406965B0 (ObLogSecurityDescriptor.c)
 *     RtlFindUnicodeSubstring @ 0x1406B8BB0 (RtlFindUnicodeSubstring.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA2A4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406CC044 (PiDmObjectProcessPropertyChange.c)
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1406CFC70 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1406D0A64 (PiDmObjectUpdateCachedObjectProperty.c)
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 *     PopEtAggregateFind @ 0x140702888 (PopEtAggregateFind.c)
 *     RtlpInternEntryMatch @ 0x140703894 (RtlpInternEntryMatch.c)
 *     ExpWnfFindScopeInstance @ 0x14071B968 (ExpWnfFindScopeInstance.c)
 *     SepSidInSidAndAttributes @ 0x1407439F8 (SepSidInSidAndAttributes.c)
 *     ConstraintEval @ 0x140747E38 (ConstraintEval.c)
 *     RtlpNormalizeAcl @ 0x1407594B0 (RtlpNormalizeAcl.c)
 *     PropertyEval @ 0x1407622B0 (PropertyEval.c)
 *     TraitsCompare @ 0x14076B1A4 (TraitsCompare.c)
 *     PiDcCompareUpdateProperties @ 0x140782140 (PiDcCompareUpdateProperties.c)
 *     PfSnEndProcessTrace @ 0x140796460 (PfSnEndProcessTrace.c)
 *     EtwpGenerateFileName @ 0x14079A7F0 (EtwpGenerateFileName.c)
 *     CmpFindMatchingDescriptorCell @ 0x1407A5244 (CmpFindMatchingDescriptorCell.c)
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1407E307C (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1407E4284 (PfSnPrefetchCacheEntryGet.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x140811C80 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1408122E8 (RtlpUpdateDynamicTimeZones.c)
 *     SLQueryLicenseValueInternal @ 0x14081A004 (SLQueryLicenseValueInternal.c)
 *     PopApplyPolicy @ 0x14082A06C (PopApplyPolicy.c)
 *     FsRtlNotifyFilterReportChange @ 0x140848F70 (FsRtlNotifyFilterReportChange.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084C910 (ExpKdPullRemoteFileForUser.c)
 *     SeExamineSacl @ 0x1408A18B0 (SeExamineSacl.c)
 *     EtwpCompareGuid @ 0x1408A3A70 (EtwpCompareGuid.c)
 *     FsRtlIsDbcsInExpression @ 0x14093C0C0 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x14095D1E0 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140964328 (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140977A1C (AlpcpEnterStateChangeEventMessageLog.c)
 *     PfSnAltProfileTreeCompareByProcess @ 0x14097C66C (PfSnAltProfileTreeCompareByProcess.c)
 *     RtlReplaceSidInSd @ 0x1409B94C0 (RtlReplaceSidInSd.c)
 *     SepExamineSaclEx @ 0x1409CB8C4 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x1409CDFE0 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1409CE184 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409ED100 (EtwpUpdateDisallowedGuids.c)
 *     SLUpdateLicenseDataInternal @ 0x1409F78B4 (SLUpdateLicenseDataInternal.c)
 *     MiComputeBadImageHeaderType @ 0x140A2C608 (MiComputeBadImageHeaderType.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4CE9C (SdbpCheckMatchingRegistryValue.c)
 *     BiExportEfiBootManager @ 0x140A5B928 (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x140A5C248 (BiUpdateEfiEntry.c)
 *     I_MinCryptCheckEKU @ 0x140A6C868 (I_MinCryptCheckEKU.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6CBC8 (MinCryptVerifyCertificateWithPolicy2.c)
 *     I_MinCryptHashSearchCompare @ 0x140A6D660 (I_MinCryptHashSearchCompare.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x140A6DAB8 (MinAsn1ParseSingleExtensionValue.c)
 *     I_MinCryptCheckEKURequirements @ 0x140A6DC80 (I_MinCryptCheckEKURequirements.c)
 *     IovpExamineIrpStackForwarding @ 0x140ACA004 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x140AE1C78 (ViCtxEqualExtendedState.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140B57600 (PipCheckSystemFirmwareUpdated.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140B63318 (HalpAcpiDetectMachineSpecificActions.c)
 *     CmpGetBiosDate @ 0x140B9526C (CmpGetBiosDate.c)
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
