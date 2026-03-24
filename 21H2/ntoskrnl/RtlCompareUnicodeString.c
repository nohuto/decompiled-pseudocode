/*
 * XREFs of RtlCompareUnicodeString @ 0x1405EE320
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14024F520 (AuthzBasepCompareUnicodeStringOperands.c)
 *     FsRtlCompareNodeAndKey @ 0x14029FEA8 (FsRtlCompareNodeAndKey.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14037E8D4 (PopFxFindAcpiDeviceByUniqueId.c)
 *     KsepCacheHwIdEqual @ 0x140381710 (KsepCacheHwIdEqual.c)
 *     IopEliminateBogusConflict @ 0x140510680 (IopEliminateBogusConflict.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140596450 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     CmpDoCompareKeyName @ 0x1405EE600 (CmpDoCompareKeyName.c)
 *     CmpCheckLexicographicalOrder @ 0x1405F2E10 (CmpCheckLexicographicalOrder.c)
 *     CmpFindNameInListCellWithStatus @ 0x140666030 (CmpFindNameInListCellWithStatus.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140675E78 (SepCaptureTokenSecurityAttributesInformation.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406A67B4 (RtlpProcessIFEOKeyFilter.c)
 *     PnpCompareInstancePath @ 0x1406A7EE0 (PnpCompareInstancePath.c)
 *     PopAvlComparePowerRequestKeys @ 0x1406BE780 (PopAvlComparePowerRequestKeys.c)
 *     PiDevCfgConfigureDevice @ 0x140742E20 (PiDevCfgConfigureDevice.c)
 *     PiCompareDDBCacheEntries @ 0x14076A8B0 (PiCompareDDBCacheEntries.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x140770830 (PiSwBusRelationsCompareInstancePath.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140773640 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopConnectToPolicyDevice @ 0x1407C4368 (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x1407D1990 (KsepCacheDeviceEqual.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x14087BA10 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5E04 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A8110 (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x1408B8B44 (IopExecuteHardwareProfileChange.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140913C6C (RtlpCapabilityCheckSystemCapability.c)
 *     SepAdtStagingEvent @ 0x140920200 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140920980 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x140924BF0 (SepRmGlobalSaclFind.c)
 *     ExpCovIsModulePresent @ 0x140957494 (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x140957570 (ExpCovQueryHypervisorInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A594A0 (CmpSetSystemBiosInformation.c)
 *     IopInitializeBootDrivers @ 0x140A5DB88 (IopInitializeBootDrivers.c)
 *     KiHwPolicyFindDriverImage @ 0x140A652D8 (KiHwPolicyFindDriverImage.c)
 * Callees:
 *     NLS_UPCASE @ 0x140206AF0 (NLS_UPCASE.c)
 */

LONG __stdcall RtlCompareUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  unsigned __int16 *Buffer; // r9
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int16 *v7; // rbx
  char *v8; // r11
  int v10; // r8d
  unsigned __int64 v11; // r10
  int v12; // eax
  int v13; // ecx
  char *v14; // r8

  Buffer = String1->Buffer;
  v4 = (unsigned __int64)String1->Length >> 1;
  v5 = (unsigned __int64)String2->Length >> 1;
  v6 = v4;
  if ( v4 > v5 )
    v6 = (unsigned __int64)String2->Length >> 1;
  v7 = &Buffer[v6];
  if ( Buffer >= v7 )
    return v4 - v5;
  if ( CaseInSensitive )
  {
    v8 = (char *)((char *)String2->Buffer - (char *)Buffer);
    while ( 1 )
    {
      if ( *Buffer != *(unsigned __int16 *)((char *)Buffer + (_QWORD)v8) )
      {
        v10 = NLS_UPCASE(*Buffer);
        if ( (unsigned int)v11 >= 0x61 )
        {
          if ( (unsigned int)v11 > 0x7A )
          {
            if ( Nls844UnicodeUpcaseTable )
            {
              if ( (unsigned __int16)v11 >= 0xC0u )
                LOWORD(v11) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                       + 2
                                       * ((v11 & 0xF)
                                        + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                              + 2LL
                                                              * (((unsigned __int8)v11 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v11 >> 8))))))
                            + v11;
            }
          }
          else
          {
            LOWORD(v11) = v11 - 32;
          }
        }
        if ( (_WORD)v10 != (_WORD)v11 )
          break;
      }
      if ( ++Buffer >= v7 )
        return v4 - v5;
    }
    v12 = (unsigned __int16)v11;
    v13 = v10;
  }
  else
  {
    v14 = (char *)((char *)String2->Buffer - (char *)Buffer);
    while ( 1 )
    {
      v13 = *Buffer;
      v12 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v14);
      if ( (_WORD)v13 != (_WORD)v12 )
        break;
      if ( ++Buffer >= v7 )
        return v4 - v5;
    }
  }
  return v13 - v12;
}
