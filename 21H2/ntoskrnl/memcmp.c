/*
 * XREFs of memcmp @ 0x1403E1D90
 * Callers:
 *     AuthzBasepFindSecurityAttributeValue @ 0x140205030 (AuthzBasepFindSecurityAttributeValue.c)
 *     RtlAreNamesEqual @ 0x140212760 (RtlAreNamesEqual.c)
 *     HalpAcpiGetRsdt @ 0x140213908 (HalpAcpiGetRsdt.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140213C5C (HalpAcpiIsCachedTableCompromised.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140219EC0 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpOwnerAcesPresent @ 0x14022A380 (RtlpOwnerAcesPresent.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140253C50 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     CompareEventEntry @ 0x1402A1F74 (CompareEventEntry.c)
 *     RtlFindAceBySid @ 0x1402A47B0 (RtlFindAceBySid.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     SepPotentialGlobalTableAttribute @ 0x1402D6A64 (SepPotentialGlobalTableAttribute.c)
 *     RtlSidDominates @ 0x1402ED880 (RtlSidDominates.c)
 *     SepMaximumAccessCheck @ 0x1402F9680 (SepMaximumAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     SepNormalAccessCheck @ 0x1402FB0E0 (SepNormalAccessCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x1402FB7E0 (SepMandatoryIntegrityCheck.c)
 *     RtlSidHashLookup @ 0x1402FD710 (RtlSidHashLookup.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140394DD0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     HalMatchAcpiOemTableId @ 0x1403D24A0 (HalMatchAcpiOemTableId.c)
 *     IoRaiseInformationalHardError @ 0x140557960 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x140558320 (IopIsKnownGoodLegacyFsFilter.c)
 *     KiDisplayBlueScreen @ 0x140567874 (KiDisplayBlueScreen.c)
 *     MiFindSpecialPurposeMemoryType @ 0x140599E60 (MiFindSpecialPurposeMemoryType.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 *     RtlpComparePropertyEntry @ 0x1405E7BE0 (RtlpComparePropertyEntry.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x14064AD1C (AuthzBasepCompareOctetStringOperands.c)
 *     RtlpInternEntryMatch @ 0x14067474C (RtlpInternEntryMatch.c)
 *     RtlFindUnicodeSubstring @ 0x140678510 (RtlFindUnicodeSubstring.c)
 *     SepSidInSidAndAttributes @ 0x1406A28A8 (SepSidInSidAndAttributes.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406AA510 (FsRtlNotifyFilterReportChange.c)
 *     PropertyEval @ 0x1406B074C (PropertyEval.c)
 *     TraitsCompare @ 0x1406B4704 (TraitsCompare.c)
 *     PiDcCompareUpdateProperties @ 0x1406D75C0 (PiDcCompareUpdateProperties.c)
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 *     CmpFindMatchingDescriptorCell @ 0x140719180 (CmpFindMatchingDescriptorCell.c)
 *     ObLogSecurityDescriptor @ 0x140724E60 (ObLogSecurityDescriptor.c)
 *     SeDefaultObjectMethod @ 0x140725080 (SeDefaultObjectMethod.c)
 *     PnpProcessTargetDeviceEvent @ 0x14076C3C0 (PnpProcessTargetDeviceEvent.c)
 *     ConstraintEval @ 0x1407731E8 (ConstraintEval.c)
 *     PiDmObjectProcessPropertyChange @ 0x1407783C4 (PiDmObjectProcessPropertyChange.c)
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x14077AA70 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14077B6F4 (PiDmObjectUpdateCachedObjectProperty.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14078600C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     ExpWnfFindScopeInstance @ 0x1407915C4 (ExpWnfFindScopeInstance.c)
 *     PopEtAggregateFind @ 0x1407A53A0 (PopEtAggregateFind.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1407D79B4 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnEndProcessTrace @ 0x1407D936C (PfSnEndProcessTrace.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1407DD6F0 (PfSnPrefetchCacheEntryGet.c)
 *     EtwpGenerateFileName @ 0x1407FC710 (EtwpGenerateFileName.c)
 *     PiDevCfgResolveVariableExpression @ 0x140804350 (PiDevCfgResolveVariableExpression.c)
 *     PopApplyPolicy @ 0x1408194D8 (PopApplyPolicy.c)
 *     SLQueryLicenseValueInternal @ 0x14082D870 (SLQueryLicenseValueInternal.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140836228 (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1408365F8 (RtlpCheckDynamicTimeZoneInformation.c)
 *     ExpKdPullRemoteFileForUser @ 0x1408536D4 (ExpKdPullRemoteFileForUser.c)
 *     EtwpCompareGuid @ 0x140883930 (EtwpCompareGuid.c)
 *     FsRtlIsDbcsInExpression @ 0x14092F040 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgConfigurePropertyMatchCallback @ 0x14094B7C0 (PiDevCfgConfigurePropertyMatchCallback.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x14095353C (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140966A84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     MiComputeBadImageHeaderType @ 0x14096BC08 (MiComputeBadImageHeaderType.c)
 *     RtlReplaceSidInSd @ 0x1409B92B0 (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x1409CAE50 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1409CB770 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x1409CE110 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1409CE294 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409EDE68 (EtwpUpdateDisallowedGuids.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA6E0 (SLUpdateLicenseDataInternal.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A111BC (SdbpCheckMatchingRegistryValue.c)
 *     BiExportEfiBootManager @ 0x140A1FB1C (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x140A210D4 (BiUpdateEfiEntry.c)
 *     I_MinCryptCheckEKU @ 0x140A31E68 (I_MinCryptCheckEKU.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A32064 (MinCryptVerifyCertificateWithPolicy2.c)
 *     MincrypK_ParseCertificateChainWithPolicy @ 0x140A32934 (MincrypK_ParseCertificateChainWithPolicy.c)
 *     I_MinCryptHashSearchCompare @ 0x140A32B30 (I_MinCryptHashSearchCompare.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x140A32F88 (MinAsn1ParseSingleExtensionValue.c)
 *     IovpExamineIrpStackForwarding @ 0x140A8C740 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x140AA1D34 (ViCtxEqualExtendedState.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140AFA7A8 (HalpAcpiDetectMachineSpecificActions.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140B10490 (PipCheckSystemFirmwareUpdated.c)
 *     CmpGetBiosDate @ 0x140B18084 (CmpGetBiosDate.c)
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
