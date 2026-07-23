/*
 * XREFs of RtlCompareUnicodeString @ 0x1406DDA80
 * Callers:
 *     FsRtlCompareNodeAndKey @ 0x14021D428 (FsRtlCompareNodeAndKey.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1402F3D70 (AuthzBasepCompareUnicodeStringOperands.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14037E424 (PopFxFindAcpiDeviceByUniqueId.c)
 *     KsepCacheHwIdEqual @ 0x140381260 (KsepCacheHwIdEqual.c)
 *     IopEliminateBogusConflict @ 0x1405108C0 (IopEliminateBogusConflict.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140596680 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140600F9C (SepCaptureTokenSecurityAttributesInformation.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406043E4 (RtlpProcessIFEOKeyFilter.c)
 *     PnpCompareInstancePath @ 0x140605960 (PnpCompareInstancePath.c)
 *     PopAvlComparePowerRequestKeys @ 0x14061DA20 (PopAvlComparePowerRequestKeys.c)
 *     CmpFindNameInListCellWithStatus @ 0x14065AE50 (CmpFindNameInListCellWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1406DDD60 (CmpDoCompareKeyName.c)
 *     CmpCheckLexicographicalOrder @ 0x1406E2570 (CmpCheckLexicographicalOrder.c)
 *     PiDevCfgConfigureDevice @ 0x140742FE0 (PiDevCfgConfigureDevice.c)
 *     PiCompareDDBCacheEntries @ 0x14076AA70 (PiCompareDDBCacheEntries.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x1407709F0 (PiSwBusRelationsCompareInstancePath.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140773800 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopConnectToPolicyDevice @ 0x1407C4888 (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x1407D1B00 (KsepCacheDeviceEqual.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x14087BB70 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5F64 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A8270 (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x1408B8CA4 (IopExecuteHardwareProfileChange.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140913DCC (RtlpCapabilityCheckSystemCapability.c)
 *     SepAdtStagingEvent @ 0x140920360 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140920AE0 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x140924D50 (SepRmGlobalSaclFind.c)
 *     ExpCovIsModulePresent @ 0x140957664 (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x140957740 (ExpCovQueryHypervisorInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A5A4A0 (CmpSetSystemBiosInformation.c)
 *     IopInitializeBootDrivers @ 0x140A5EB88 (IopInitializeBootDrivers.c)
 *     KiHwPolicyFindDriverImage @ 0x140A662D8 (KiHwPolicyFindDriverImage.c)
 * Callees:
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
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
