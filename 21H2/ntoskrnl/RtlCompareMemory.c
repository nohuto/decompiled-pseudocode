/*
 * XREFs of RtlCompareMemory @ 0x14042A1E0
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x140202D70 (RtlNormalizeSecurityDescriptor.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x140224F04 (PpmPerfCalculateQosClassPolicies.c)
 *     SepIsPackageSid @ 0x14023BDE8 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14023E074 (SepIsCapabilitySid.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402E0740 (IoReportTargetDeviceChangeAsynchronous.c)
 *     SepNormalAccessCheck @ 0x1402FB0E0 (SepNormalAccessCheck.c)
 *     HalpHpetDiscover @ 0x1403BD8C8 (HalpHpetDiscover.c)
 *     HalpGenericErrorSourceRecovery @ 0x14051C090 (HalpGenericErrorSourceRecovery.c)
 *     WheaGetErrPacketFromErrRecord @ 0x14051CD90 (WheaGetErrPacketFromErrRecord.c)
 *     SecureDump_ValidateAmeCertChain @ 0x14055EF20 (SecureDump_ValidateAmeCertChain.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1405E4EC4 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpHpSizeHeap @ 0x1405F3028 (RtlpHpSizeHeap.c)
 *     EtwpGetCrimsonStackKey @ 0x140633B20 (EtwpGetCrimsonStackKey.c)
 *     EtwpTraceStackKey @ 0x1406342C8 (EtwpTraceStackKey.c)
 *     SPCallServerHandleFileIntegrityQuery @ 0x1406605B8 (SPCallServerHandleFileIntegrityQuery.c)
 *     RtlGetAppContainerSidType @ 0x140696D90 (RtlGetAppContainerSidType.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1406B5B9C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     ObpCompareEntryLevel2 @ 0x1406DA120 (ObpCompareEntryLevel2.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1406EB634 (ExCovReadjustUnloadedModuleEntry.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140721FFC (CmpCompareNewValueDataAgainstKCBCache.c)
 *     PipGenerateContainerID @ 0x1407452A0 (PipGenerateContainerID.c)
 *     PnpBusTypeGuidGetIndex @ 0x140747C74 (PnpBusTypeGuidGetIndex.c)
 *     PopArePowerSettingsEqual @ 0x140751840 (PopArePowerSettingsEqual.c)
 *     EtwpTrackDebugIdForSession @ 0x140758ED8 (EtwpTrackDebugIdForSession.c)
 *     IopPnPDispatch @ 0x140763C50 (IopPnPDispatch.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x140772190 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PnpIsNullGuid @ 0x140776274 (PnpIsNullGuid.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078B7C4 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x14078D5D8 (PnpNotifyDeviceClassChange.c)
 *     RtlIsCapabilitySid @ 0x14078EC8C (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x14078ECD8 (RtlIsPackageSid.c)
 *     EtwpCalculateUpdateNotification @ 0x1407900EC (EtwpCalculateUpdateNotification.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140797054 (EtwpClearSessionAndUnreferenceEntry.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1407A96A0 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     sub_1407E2020 @ 0x1407E2020 (sub_1407E2020.c)
 *     IoReportTargetDeviceChange @ 0x1407FB910 (IoReportTargetDeviceChange.c)
 *     PnpCompareInterruptInformation @ 0x14081C1B0 (PnpCompareInterruptInformation.c)
 *     CmpFilterAcpiDockingState @ 0x1408384CC (CmpFilterAcpiDockingState.c)
 *     PopInitializeHeteroProcessors @ 0x140849B04 (PopInitializeHeteroProcessors.c)
 *     EtwpTrackBinaryForSession @ 0x140883C5A (EtwpTrackBinaryForSession.c)
 *     CmpTransUowIsEqual @ 0x1409196EC (CmpTransUowIsEqual.c)
 *     PipMatchPersistentMemory @ 0x140941CFC (PipMatchPersistentMemory.c)
 *     PnpNotifyHwProfileChange @ 0x14094488C (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140944C08 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14095CDBC (PiDrvDbQuerySyncNodesUpdated.c)
 *     MiCompareUserSidHotPatchNodes @ 0x140972C84 (MiCompareUserSidHotPatchNodes.c)
 *     ObpGetTraceIndex @ 0x140985DE4 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14099788C (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x1409B7678 (CompareNamesCaseSensitive.c)
 *     Xp10ReadAndValidateCrc @ 0x1409C4F84 (Xp10ReadAndValidateCrc.c)
 *     SepCheckCapabilities @ 0x1409CC77C (SepCheckCapabilities.c)
 *     SepIsAclEqual @ 0x1409CE5B0 (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x1409DCAD0 (WmipParseSysIdTable.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA6E0 (SLUpdateLicenseDataInternal.c)
 *     ExpCovIsModulePresent @ 0x140A031C4 (ExpCovIsModulePresent.c)
 *     sub_140A0FC24 @ 0x140A0FC24 (sub_140A0FC24.c)
 *     BiUpdateBcdObject @ 0x140A20DF8 (BiUpdateBcdObject.c)
 *     MinCryptDecodeHashAlgorithmIdentifier @ 0x140A31CD8 (MinCryptDecodeHashAlgorithmIdentifier.c)
 *     MinCryptDecodeSignatureAlgorithmIdentifier @ 0x140A31D80 (MinCryptDecodeSignatureAlgorithmIdentifier.c)
 *     I_MinCryptFindIssuerCertificateByName @ 0x140A31EE0 (I_MinCryptFindIssuerCertificateByName.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A32064 (MinCryptVerifyCertificateWithPolicy2.c)
 *     VfUtilEqualUnicodeString @ 0x140A81CF4 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x140A83264 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x140A87B3C (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x140A87C8C (ViCopyBackModifiedBuffer.c)
 *     HalpAuditSlicTables @ 0x140AF8CB4 (HalpAuditSlicTables.c)
 *     PipMigratePnpState @ 0x140B0EC60 (PipMigratePnpState.c)
 *     VhdiInitializeBootDisk @ 0x140B54800 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length)
{
  _BYTE *v3; // rsi
  _BYTE *v4; // rdi
  __int64 v5; // rcx
  bool v6; // zf
  SIZE_T v7; // rcx
  bool v8; // zf
  bool v9; // zf
  SIZE_T v10; // r8
  SIZE_T v11; // rcx
  bool v13; // zf
  SIZE_T v14; // rcx

  v3 = Source1;
  v4 = Source2;
  if ( (((unsigned __int8)Source1 ^ (unsigned __int8)Source2) & 7) != 0 || Length < 8 )
  {
    v13 = Length == 0;
    if ( Length )
    {
      v14 = Length;
      do
      {
        if ( !v14 )
          break;
        v13 = *v3++ == *v4++;
        --v14;
      }
      while ( v13 );
      if ( !v13 )
        Length -= v14 + 1;
    }
    return Length;
  }
  else
  {
    v5 = -(int)Source1 & 7;
    if ( (_DWORD)v5 )
    {
      Length -= (unsigned int)v5;
      v6 = Length == 0;
      do
      {
        if ( !v5 )
          break;
        v6 = *v3++ == *v4++;
        --v5;
      }
      while ( v6 );
      if ( !v6 )
        goto LABEL_19;
    }
    v7 = Length & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (Length & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      Length -= v7;
      v7 >>= 3;
      v8 = v7 == 0;
      do
      {
        if ( !v7 )
          break;
        v8 = *(_QWORD *)v3 == *(_QWORD *)v4;
        v3 += 8;
        v4 += 8;
        --v7;
      }
      while ( v8 );
      if ( !v8 )
      {
        v3 -= 8;
        v4 -= 8;
        v7 = 8 * (v7 + 1);
      }
    }
    v9 = v7 + Length == 0;
    v10 = v7 + Length;
    if ( v10 )
    {
      v11 = v10;
      do
      {
        if ( !v11 )
          break;
        v9 = *v3++ == *v4++;
        --v11;
      }
      while ( v9 );
      if ( !v9 )
LABEL_19:
        --v4;
    }
    return v4 - (_BYTE *)Source2;
  }
}
