/*
 * XREFs of RtlCompareUnicodeString @ 0x1406EA3B0
 * Callers:
 *     FsRtlCompareNodeAndKey @ 0x1402C1AA8 (FsRtlCompareNodeAndKey.c)
 *     ApiSetQuerySchemaInfo @ 0x1402F3630 (ApiSetQuerySchemaInfo.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140302D18 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403657AC (AuthzBasepCompareUnicodeStringOperands.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140393420 (PopFxFindAcpiDeviceByUniqueId.c)
 *     KsepCacheHwIdEqual @ 0x1403C0CD0 (KsepCacheHwIdEqual.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140742D6C (SepCaptureTokenSecurityAttributesInformation.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1407445E8 (RtlpCapabilityCheckSystemCapability.c)
 *     PnpCompareInstancePath @ 0x14076B1E0 (PnpCompareInstancePath.c)
 *     RtlpProcessIFEOKeyFilter @ 0x14077F000 (RtlpProcessIFEOKeyFilter.c)
 *     PiCompareDDBCacheEntries @ 0x140785D10 (PiCompareDDBCacheEntries.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x140791080 (PiSwBusRelationsCompareInstancePath.c)
 *     PopPowerRequestStatsDatabaseCompare @ 0x140797850 (PopPowerRequestStatsDatabaseCompare.c)
 *     CmpDoCompareKeyName @ 0x1407AE420 (CmpDoCompareKeyName.c)
 *     CmpCheckLexicographicalOrder @ 0x1407B0610 (CmpCheckLexicographicalOrder.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 *     CmpFindNameInListCellWithStatus @ 0x1407B3CA0 (CmpFindNameInListCellWithStatus.c)
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1407F6CC8 (ExCovReadjustUnloadedModuleEntry.c)
 *     CmpLoadSystemVersionData @ 0x14081469C (CmpLoadSystemVersionData.c)
 *     PopConnectToPolicyDevice @ 0x14084A820 (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x14085DD00 (KsepCacheDeviceEqual.c)
 *     PiGetServiceNameInfo @ 0x140870010 (PiGetServiceNameInfo.c)
 *     PiDevCfgConfigureDevice @ 0x14087384C (PiDevCfgConfigureDevice.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408A1798 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x1408A1C12 (SepRmGlobalSaclFind.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095AB1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x14095D1E0 (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x14096E634 (IopExecuteHardwareProfileChange.c)
 *     SepAdtStagingEvent @ 0x1409CA0F4 (SepAdtStagingEvent.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1409DC878 (WmipCheckSMBiosSysInfoString.c)
 *     ExpCovIsModulePresent @ 0x140A0382C (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x140A03908 (ExpCovQueryHypervisorInformation.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A227E0 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 *     KiHwPolicyFindDriverImage @ 0x140B60CB8 (KiHwPolicyFindDriverImage.c)
 *     CmpSetSystemBiosInformation @ 0x140B9565C (CmpSetSystemBiosInformation.c)
 * Callees:
 *     NLS_UPCASE @ 0x140267AD0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

LONG __stdcall RtlCompareUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  struct _LIST_ENTRY *Flink; // rsi
  char v6; // r8
  unsigned __int16 *v7; // r9
  __int64 v8; // r11
  unsigned __int64 v9; // rax
  unsigned __int16 *v10; // rbx
  __int64 v11; // r11
  int v13; // r8d
  unsigned __int64 v14; // r10
  int v15; // ecx
  int v16; // eax

  v3 = (unsigned __int64)String2->Length >> 1;
  v4 = (unsigned __int64)String1->Length >> 1;
  Flink = PsGetCurrentServerSiloGlobals()[77].Flink;
  v9 = v4;
  if ( v4 > v3 )
    v9 = v3;
  v10 = &v7[v9];
  if ( v7 >= v10 )
    return v4 - v3;
  v11 = v8 - (_QWORD)v7;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( *v7 != *(unsigned __int16 *)((char *)v7 + v11) )
      {
        v13 = NLS_UPCASE((__int64)Flink, *v7);
        if ( (unsigned int)v14 >= 0x61 )
        {
          if ( (unsigned int)v14 > 0x7A )
          {
            if ( Flink )
            {
              if ( (unsigned __int16)v14 >= 0xC0u )
                LOWORD(v14) = *((_WORD *)&Flink->Flink
                              + (v14 & 0xF)
                              + *((unsigned __int16 *)&Flink->Flink
                                + ((unsigned __int8)v14 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v14 >> 8))))
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
      if ( ++v7 >= v10 )
        return v4 - v3;
    }
    v15 = (unsigned __int16)v14;
    v16 = v13;
  }
  else
  {
    while ( 1 )
    {
      v16 = *v7;
      v15 = *(unsigned __int16 *)((char *)v7 + v11);
      if ( (_WORD)v16 != (_WORD)v15 )
        break;
      if ( ++v7 >= v10 )
        return v4 - v3;
    }
  }
  return v16 - v15;
}
