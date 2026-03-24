/*
 * XREFs of memcmp @ 0x1403D22E0
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x14024F290 (RtlpIsNameInExpressionPrivate.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14024F9DC (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x140250528 (AuthzBasepFindSecurityAttributeValue.c)
 *     RtlSidDominates @ 0x1402520F0 (RtlSidDominates.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1402CE470 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepMandatoryIntegrityCheck @ 0x1402CEFB0 (SepMandatoryIntegrityCheck.c)
 *     SepNormalAccessCheck @ 0x1402D1160 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1402D1A30 (SepMaximumAccessCheck.c)
 *     RtlAreNamesEqual @ 0x1402E0BE0 (RtlAreNamesEqual.c)
 *     HalpAcpiGetRsdt @ 0x1402E7690 (HalpAcpiGetRsdt.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x1402E79EC (HalpAcpiIsCachedTableCompromised.c)
 *     RtlpOwnerAcesPresent @ 0x1402F43F0 (RtlpOwnerAcesPresent.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x14031FEF0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     RtlEqualSid @ 0x1403459F0 (RtlEqualSid.c)
 *     RtlSidHashLookup @ 0x140347670 (RtlSidHashLookup.c)
 *     RtlFindAceBySid @ 0x140347920 (RtlFindAceBySid.c)
 *     SepPotentialGlobalTableAttribute @ 0x1403482B4 (SepPotentialGlobalTableAttribute.c)
 *     CompareEventEntry @ 0x14036DB14 (CompareEventEntry.c)
 *     HalMatchAcpiOemTableId @ 0x1403CE4C0 (HalMatchAcpiOemTableId.c)
 *     IoRaiseInformationalHardError @ 0x140505BB0 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x140506798 (IopIsKnownGoodLegacyFsFilter.c)
 *     KiDisplayBlueScreen @ 0x140518000 (KiDisplayBlueScreen.c)
 *     MiIdealClusterPage @ 0x140555D54 (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1405C1B84 (AuthzBasepCompareOctetStringOperands.c)
 *     SepSidInSidAndAttributes @ 0x1405DA558 (SepSidInSidAndAttributes.c)
 *     RtlFindUnicodeSubstring @ 0x1405ED870 (RtlFindUnicodeSubstring.c)
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     ExpWnfFindScopeInstance @ 0x14061089C (ExpWnfFindScopeInstance.c)
 *     PopEtAggregateFind @ 0x14061A604 (PopEtAggregateFind.c)
 *     PfSnEndProcessTrace @ 0x14062E760 (PfSnEndProcessTrace.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1406320EC (PfSnPrefetchCacheEntryGet.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406746F0 (FsRtlNotifyFilterReportChange.c)
 *     TraitsCompare @ 0x1406799E0 (TraitsCompare.c)
 *     RtlpInternEntryMatch @ 0x14067CE08 (RtlpInternEntryMatch.c)
 *     EtwpGenerateFileName @ 0x14068EAAC (EtwpGenerateFileName.c)
 *     ConstraintEval @ 0x1406A710C (ConstraintEval.c)
 *     PropertyEval @ 0x1406A8F84 (PropertyEval.c)
 *     PiPnpRtlCmActionCallback @ 0x1406AE700 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1406AF1F0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1406AFE2C (PiDmObjectUpdateCachedObjectProperty.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406B558C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     ObLogSecurityDescriptor @ 0x1406D8C70 (ObLogSecurityDescriptor.c)
 *     CmpFindMatchingDescriptorCell @ 0x1406E6978 (CmpFindMatchingDescriptorCell.c)
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140709EBC (PfSnPrefetchCacheEntryUpdate.c)
 *     EtwpStartLogger @ 0x140711A40 (EtwpStartLogger.c)
 *     PiDmObjectProcessPropertyChange @ 0x1407468F4 (PiDmObjectProcessPropertyChange.c)
 *     PnpProcessTargetDeviceEvent @ 0x1407475C0 (PnpProcessTargetDeviceEvent.c)
 *     PiDcCompareUpdateProperties @ 0x1407680E0 (PiDcCompareUpdateProperties.c)
 *     PopApplyPolicy @ 0x14079CC2C (PopApplyPolicy.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1407AA58C (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1407AA8CC (RtlpCheckDynamicTimeZoneInformation.c)
 *     SLQueryLicenseValueInternal @ 0x1407AB444 (SLQueryLicenseValueInternal.c)
 *     FsRtlIsDbcsInExpression @ 0x14088C660 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A8160 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1408AE95C (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408C2C24 (AlpcpEnterStateChangeEventMessageLog.c)
 *     MiComputeBadImageHeaderType @ 0x1408C7508 (MiComputeBadImageHeaderType.c)
 *     RtlReplaceSidInSd @ 0x140913990 (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x140921470 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140921DA0 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x140924680 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x140924804 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     EtwpCompareGuid @ 0x140941670 (EtwpCompareGuid.c)
 *     EtwpUpdateDisallowedGuids @ 0x14094168C (EtwpUpdateDisallowedGuids.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E2E0 (SLUpdateLicenseDataInternal.c)
 *     ExpKdPullRemoteFileForUser @ 0x14095BA1C (ExpKdPullRemoteFileForUser.c)
 *     SdbpCheckMatchingRegistryValue @ 0x14096489C (SdbpCheckMatchingRegistryValue.c)
 *     BiExportEfiBootManager @ 0x140971C10 (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x1409731BC (BiUpdateEfiEntry.c)
 *     IovpExamineIrpStackForwarding @ 0x1409D0B84 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x1409E4450 (ViCtxEqualExtendedState.c)
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
