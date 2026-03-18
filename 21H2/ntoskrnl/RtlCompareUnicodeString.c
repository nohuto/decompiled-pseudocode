/*
 * XREFs of RtlCompareUnicodeString @ 0x1407CAA80
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140218F84 (AuthzBasepCompareUnicodeStringOperands.c)
 *     FsRtlCompareNodeAndKey @ 0x14021D7F0 (FsRtlCompareNodeAndKey.c)
 *     ApiSetQuerySchemaInfo @ 0x140251458 (ApiSetQuerySchemaInfo.c)
 *     KsepCacheHwIdEqual @ 0x14025D250 (KsepCacheHwIdEqual.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14025E12C (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1403BA6E0 (PopFxFindAcpiDeviceByUniqueId.c)
 *     IopEliminateBogusConflict @ 0x140564E78 (IopEliminateBogusConflict.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140660EF4 (RtlpCapabilityCheckSystemCapability.c)
 *     CmpCheckLexicographicalOrder @ 0x14069B700 (CmpCheckLexicographicalOrder.c)
 *     PnpCompareInstancePath @ 0x1406BBFA0 (PnpCompareInstancePath.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406C2EE8 (RtlpProcessIFEOKeyFilter.c)
 *     PiCompareDDBCacheEntries @ 0x1406DAD90 (PiCompareDDBCacheEntries.c)
 *     PopPowerRequestStatsDatabaseCompare @ 0x1406E0600 (PopPowerRequestStatsDatabaseCompare.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x1406E65D0 (PiSwBusRelationsCompareInstancePath.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1406EB634 (ExCovReadjustUnloadedModuleEntry.c)
 *     CmpFindNameInListCellWithStatus @ 0x140722280 (CmpFindNameInListCellWithStatus.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140754108 (SepCaptureTokenSecurityAttributesInformation.c)
 *     PiDevCfgConfigureDevice @ 0x1407702BC (PiDevCfgConfigureDevice.c)
 *     CmpCompareInIndex @ 0x1407C4180 (CmpCompareInIndex.c)
 *     CmpDoCompareKeyName @ 0x1407C4460 (CmpDoCompareKeyName.c)
 *     CmpFindSubKeyInRoot @ 0x1407C5F80 (CmpFindSubKeyInRoot.c)
 *     PiDevCfgResolveVariableExpression @ 0x140804350 (PiDevCfgResolveVariableExpression.c)
 *     CmpLoadSystemVersionData @ 0x140836AA4 (CmpLoadSystemVersionData.c)
 *     PopConnectToPolicyDevice @ 0x140858D04 (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x140861700 (KsepCacheDeviceEqual.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140882966 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x140882B96 (SepRmGlobalSaclFind.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140921EA0 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14094B864 (PiDevCfgFindDeviceMigrationNode.c)
 *     IopExecuteHardwareProfileChange @ 0x14095E13C (IopExecuteHardwareProfileChange.c)
 *     SepAdtStagingEvent @ 0x1409C9C64 (SepAdtStagingEvent.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1409DC2AC (WmipCheckSMBiosSysInfoString.c)
 *     ExpCovIsModulePresent @ 0x140A031C4 (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x140A032A0 (ExpCovQueryHypervisorInformation.c)
 *     KiHwPolicyFindDriverImage @ 0x140AFACD8 (KiHwPolicyFindDriverImage.c)
 *     IopInitializeBootDrivers @ 0x140B114E8 (IopInitializeBootDrivers.c)
 *     CmpSetSystemBiosInformation @ 0x140B17BA4 (CmpSetSystemBiosInformation.c)
 * Callees:
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

LONG __stdcall RtlCompareUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // rbx
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  char v7; // r8
  unsigned __int16 *v8; // r10
  unsigned __int64 v9; // rax
  unsigned __int16 *v10; // rdi
  signed __int64 v11; // rbx
  int v13; // r8d
  unsigned __int64 v14; // r11
  int v15; // ecx
  int v16; // eax

  Buffer = String2->Buffer;
  v4 = (unsigned __int64)String2->Length >> 1;
  v5 = (unsigned __int64)String1->Length >> 1;
  v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 154);
  v9 = v5;
  if ( v5 > v4 )
    v9 = v4;
  v10 = &v8[v9];
  if ( v8 >= v10 )
    return v5 - v4;
  v11 = (char *)Buffer - (char *)v8;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( *v8 != *(unsigned __int16 *)((char *)v8 + v11) )
      {
        v13 = NLS_UPCASE(v6, *v8);
        if ( (unsigned int)v14 >= 0x61 )
        {
          if ( (unsigned int)v14 > 0x7A )
          {
            if ( v6 )
            {
              if ( (unsigned __int16)v14 >= 0xC0u )
                LOWORD(v14) = *(_WORD *)(v6
                                       + 2
                                       * ((v14 & 0xF)
                                        + *(unsigned __int16 *)(v6
                                                              + 2LL
                                                              * (((unsigned __int8)v14 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(v6 + 2 * (v14 >> 8))))))
                            + v14;
            }
          }
          else
          {
            LOWORD(v14) = v14 - 32;
          }
        }
        if ( (_WORD)v13 != (_WORD)v14 )
          break;
      }
      if ( ++v8 >= v10 )
        return v5 - v4;
    }
    v15 = (unsigned __int16)v14;
    v16 = v13;
  }
  else
  {
    while ( 1 )
    {
      v16 = *v8;
      v15 = *(unsigned __int16 *)((char *)v8 + v11);
      if ( (_WORD)v16 != (_WORD)v15 )
        break;
      if ( ++v8 >= v10 )
        return v5 - v4;
    }
  }
  return v16 - v15;
}
