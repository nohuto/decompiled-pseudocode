/*
 * XREFs of memcmp @ 0x1403D9CF0
 * Callers:
 *     CompareEventEntry @ 0x1402134E4 (CompareEventEntry.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x140225924 (AuthzBasepFindSecurityAttributeValue.c)
 *     RtlSidDominates @ 0x140226A50 (RtlSidDominates.c)
 *     RtlFindAceBySid @ 0x140227990 (RtlFindAceBySid.c)
 *     SepMaximumAccessCheck @ 0x14022A180 (SepMaximumAccessCheck.c)
 *     RtlEqualSid @ 0x14022A790 (RtlEqualSid.c)
 *     SepPotentialGlobalTableAttribute @ 0x14022CE74 (SepPotentialGlobalTableAttribute.c)
 *     SeAccessCheckWithHint @ 0x1402316A0 (SeAccessCheckWithHint.c)
 *     SepNormalAccessCheck @ 0x140233520 (SepNormalAccessCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B5E70 (SepMandatoryIntegrityCheck.c)
 *     SepSidInTokenSidHash @ 0x1402B6650 (SepSidInTokenSidHash.c)
 *     RtlpIsNameInExpressionPrivate @ 0x14030C470 (RtlpIsNameInExpressionPrivate.c)
 *     RtlAreNamesEqual @ 0x140324660 (RtlAreNamesEqual.c)
 *     HalpAcpiGetRsdt @ 0x140336C28 (HalpAcpiGetRsdt.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140337078 (HalpAcpiIsCachedTableCompromised.c)
 *     RtlpOwnerAcesPresent @ 0x140337480 (RtlpOwnerAcesPresent.c)
 *     RtlSidHashLookup @ 0x14034A4E0 (RtlSidHashLookup.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140361A30 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     KeUpdateSoftParkRankList @ 0x14039116C (KeUpdateSoftParkRankList.c)
 *     HalMatchAcpiOemTableId @ 0x1403A0C90 (HalMatchAcpiOemTableId.c)
 *     IoRaiseInformationalHardError @ 0x140556E00 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x140557A74 (IopIsKnownGoodLegacyFsFilter.c)
 *     AsanWrapperMemcmp @ 0x140565200 (AsanWrapperMemcmp.c)
 *     KiDisplayBlueScreen @ 0x14056A1D4 (KiDisplayBlueScreen.c)
 *     RtlpComparePropertyEntry @ 0x1405AAE30 (RtlpComparePropertyEntry.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1405C0690 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     MiFindSpecialPurposeMemoryType @ 0x140660238 (MiFindSpecialPurposeMemoryType.c)
 *     MiIdealClusterPage @ 0x14066A500 (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x14066F680 (AuthzBasepCompareOctetStringOperands.c)
 *     MinCryptCheckCertsAndKeys @ 0x140677560 (MinCryptCheckCertsAndKeys.c)
 *     MinCryptIsCertPresent @ 0x14067768C (MinCryptIsCertPresent.c)
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x1406810AC (MincrypK_ParseCertificateChainWithPolicy2.c)
 *     ExpWnfInvalidateDataStores @ 0x140682B5C (ExpWnfInvalidateDataStores.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA46C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiPnpRtlObjectActionCallback @ 0x1406D6560 (PiPnpRtlObjectActionCallback.c)
 *     RtlFindUnicodeSubstring @ 0x1406D93E0 (RtlFindUnicodeSubstring.c)
 *     sub_1406EF620 @ 0x1406EF620 (sub_1406EF620.c)
 *     CmpFindMatchingDescriptorCell @ 0x14070D99C (CmpFindMatchingDescriptorCell.c)
 *     ExpWnfFindScopeInstance @ 0x140714878 (ExpWnfFindScopeInstance.c)
 *     ObLogSecurityDescriptor @ 0x140728D30 (ObLogSecurityDescriptor.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x14074DCA0 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnPrefetchCacheEntryGet @ 0x14074E814 (PfSnPrefetchCacheEntryGet.c)
 *     NtSetSystemInformation @ 0x14075F340 (NtSetSystemInformation.c)
 *     PiPnpRtlCmActionCallback @ 0x140789030 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectProcessPropertyChange @ 0x140789C4C (PiDmObjectProcessPropertyChange.c)
 *     PropertyEval @ 0x14078A2F0 (PropertyEval.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14078D7DC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PnpProcessTargetDeviceEvent @ 0x1407948AC (PnpProcessTargetDeviceEvent.c)
 *     RtlpNormalizeAcl @ 0x1407AD3B0 (RtlpNormalizeAcl.c)
 *     PopEtAggregateFind @ 0x1407B2DF8 (PopEtAggregateFind.c)
 *     RtlpInternEntryMatch @ 0x1407B38B4 (RtlpInternEntryMatch.c)
 *     TraitsCompare @ 0x1407BD0EC (TraitsCompare.c)
 *     PiDcCompareUpdateProperties @ 0x1407D10E0 (PiDcCompareUpdateProperties.c)
 *     PfSnEndProcessTrace @ 0x1407E58A0 (PfSnEndProcessTrace.c)
 *     EtwpGenerateFileName @ 0x1407E9820 (EtwpGenerateFileName.c)
 *     SepSidInSidAndAttributes @ 0x1407F3FA0 (SepSidInSidAndAttributes.c)
 *     ConstraintEval @ 0x1407FB848 (ConstraintEval.c)
 *     SLQueryLicenseValueInternal @ 0x140811814 (SLQueryLicenseValueInternal.c)
 *     PopApplyPolicy @ 0x14082513C (PopApplyPolicy.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1408410A8 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140841710 (RtlpUpdateDynamicTimeZones.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084C6F0 (FsRtlNotifyFilterReportChange.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084FCC0 (ExpKdPullRemoteFileForUser.c)
 *     SeExamineSacl @ 0x1408A6730 (SeExamineSacl.c)
 *     EtwpCompareGuid @ 0x1408A8930 (EtwpCompareGuid.c)
 *     FsRtlIsDbcsInExpression @ 0x14093F0E0 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x140960200 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140967348 (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14097AAC0 (AlpcpEnterStateChangeEventMessageLog.c)
 *     PfSnAltProfileTreeCompareByProcess @ 0x14097F71C (PfSnAltProfileTreeCompareByProcess.c)
 *     RtlReplaceSidInSd @ 0x1409BC3E0 (RtlReplaceSidInSd.c)
 *     SepExamineSaclEx @ 0x1409CE764 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x1409D0E80 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1409D1024 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409EFF90 (EtwpUpdateDisallowedGuids.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA744 (SLUpdateLicenseDataInternal.c)
 *     MiComputeBadImageHeaderType @ 0x140A2F358 (MiComputeBadImageHeaderType.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4FB6C (SdbpCheckMatchingRegistryValue.c)
 *     BiAreBootEntriesEqual @ 0x140A5DA70 (BiAreBootEntriesEqual.c)
 *     BiExportEfiBootManager @ 0x140A5E63C (BiExportEfiBootManager.c)
 *     I_MinCryptCheckEKU @ 0x140A6F568 (I_MinCryptCheckEKU.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6F8C8 (MinCryptVerifyCertificateWithPolicy2.c)
 *     I_MinCryptHashSearchCompare @ 0x140A70360 (I_MinCryptHashSearchCompare.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x140A707B8 (MinAsn1ParseSingleExtensionValue.c)
 *     I_MinCryptCheckEKURequirements @ 0x140A70980 (I_MinCryptCheckEKURequirements.c)
 *     IovpExamineIrpStackForwarding @ 0x140ACE004 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x140AE5C78 (ViCtxEqualExtendedState.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140B3FC3C (PipCheckSystemFirmwareUpdated.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140B66F88 (HalpAcpiDetectMachineSpecificActions.c)
 *     CmpGetBiosDate @ 0x140B9947C (CmpGetBiosDate.c)
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
