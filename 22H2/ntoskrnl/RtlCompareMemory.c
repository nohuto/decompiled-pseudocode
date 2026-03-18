/*
 * XREFs of RtlCompareMemory @ 0x140429160
 * Callers:
 *     SepIsPackageSid @ 0x14022A7CC (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14022A824 (SepIsCapabilitySid.c)
 *     SepNormalAccessCheck @ 0x140233520 (SepNormalAccessCheck.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14031D550 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x14032A788 (PpmPerfCalculateQosClassPolicies.c)
 *     PopWriteBsdPoInfo @ 0x14032B100 (PopWriteBsdPoInfo.c)
 *     HalpHpetDiscover @ 0x140377E30 (HalpHpetDiscover.c)
 *     EtwpTraceStackKey @ 0x140468F10 (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x1405195A0 (WheaGetErrPacketFromErrRecord.c)
 *     HalpGenericErrorSourceRecovery @ 0x140519760 (HalpGenericErrorSourceRecovery.c)
 *     SecureDump_ValidateAmeCertChain @ 0x14055E870 (SecureDump_ValidateAmeCertChain.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1405A9BF4 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpHpSizeHeap @ 0x1405B6848 (RtlpHpSizeHeap.c)
 *     EtwpGetCrimsonStackKey @ 0x140601C7C (EtwpGetCrimsonStackKey.c)
 *     MmReportParkedProcessors @ 0x140655EB8 (MmReportParkedProcessors.c)
 *     MinCryptIsKeyPresent @ 0x14067770C (MinCryptIsKeyPresent.c)
 *     PipGenerateContainerID @ 0x1406850A8 (PipGenerateContainerID.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140696D48 (ExCovReadjustUnloadedModuleEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406BFE90 (EtwpClearSessionAndUnreferenceEntry.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1406D28EC (CmpCompareNewValueDataAgainstKCBCache.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x14073C8D0 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     sub_140762238 @ 0x140762238 (sub_140762238.c)
 *     EtwpTrackDebugIdForSession @ 0x14077E660 (EtwpTrackDebugIdForSession.c)
 *     EtwpCalculateUpdateNotification @ 0x1407819B0 (EtwpCalculateUpdateNotification.c)
 *     PopArePowerSettingsEqual @ 0x140783360 (PopArePowerSettingsEqual.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078386C (PnpNotifyTargetDeviceChange.c)
 *     PnpIsNullGuid @ 0x140786D44 (PnpIsNullGuid.c)
 *     PnpCompareInterruptInformation @ 0x14078F61C (PnpCompareInterruptInformation.c)
 *     PnpNotifyDeviceClassChange @ 0x14078F790 (PnpNotifyDeviceClassChange.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1407978DC (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1407BC7B0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     WbInitializeEncryptionSegment @ 0x1407D2E78 (WbInitializeEncryptionSegment.c)
 *     PnpBusTypeGuidGetIndex @ 0x1407DBF6C (PnpBusTypeGuidGetIndex.c)
 *     ObpCompareEntryLevel2 @ 0x1407DD030 (ObpCompareEntryLevel2.c)
 *     IopPnPDispatch @ 0x1407EB5A0 (IopPnPDispatch.c)
 *     RtlIsCapabilitySid @ 0x1407F3128 (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x1407F33A4 (RtlIsPackageSid.c)
 *     RtlGetAppContainerSidType @ 0x1407F4A10 (RtlGetAppContainerSidType.c)
 *     SPCallServerHandleFileIntegrityQuery @ 0x1407FF708 (SPCallServerHandleFileIntegrityQuery.c)
 *     BiUpdateBcdObject @ 0x140806888 (BiUpdateBcdObject.c)
 *     PopInitializeHeteroProcessors @ 0x14082E9E0 (PopInitializeHeteroProcessors.c)
 *     CmpFilterAcpiDockingState @ 0x14084BD54 (CmpFilterAcpiDockingState.c)
 *     IoReportTargetDeviceChange @ 0x1408821E0 (IoReportTargetDeviceChange.c)
 *     EtwpTrackBinaryForSession @ 0x1408AB730 (EtwpTrackBinaryForSession.c)
 *     PipMatchPersistentMemory @ 0x140953AB8 (PipMatchPersistentMemory.c)
 *     PnpNotifyHwProfileChange @ 0x14095674C (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140956AC8 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140970D90 (PiDrvDbQuerySyncNodesUpdated.c)
 *     ObpGetTraceIndex @ 0x14097CE40 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140992EFC (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x1409BA788 (CompareNamesCaseSensitive.c)
 *     SepCheckCapabilities @ 0x1409CF30C (SepCheckCapabilities.c)
 *     SepIsAclEqual @ 0x1409D1288 (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x1409DFF40 (WmipParseSysIdTable.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA744 (SLUpdateLicenseDataInternal.c)
 *     ExpCovIsModulePresent @ 0x140A0651C (ExpCovIsModulePresent.c)
 *     CmpTransUowIsEqual @ 0x140A1C380 (CmpTransUowIsEqual.c)
 *     MiCompareUserSidHotPatchNodes @ 0x140A366A4 (MiCompareUserSidHotPatchNodes.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140A53B34 (SdbpMergeAreTagValuesEqual.c)
 *     MinCryptDecodeHashAlgorithmIdentifier @ 0x140A6F1E8 (MinCryptDecodeHashAlgorithmIdentifier.c)
 *     MinCryptDecodeSignatureAlgorithmIdentifier @ 0x140A6F290 (MinCryptDecodeSignatureAlgorithmIdentifier.c)
 *     I_MinCryptFindIssuerCertificateByName @ 0x140A6F5E0 (I_MinCryptFindIssuerCertificateByName.c)
 *     I_MinCryptFindRootByName @ 0x140A6F6F8 (I_MinCryptFindRootByName.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6F8C8 (MinCryptVerifyCertificateWithPolicy2.c)
 *     VfUtilEqualUnicodeString @ 0x140AC366C (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x140AC4C04 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x140AC9514 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x140AC9664 (ViCopyBackModifiedBuffer.c)
 *     PipMigratePnpState @ 0x140B4324C (PipMigratePnpState.c)
 *     HalpAuditSlicTables @ 0x140B93538 (HalpAuditSlicTables.c)
 *     VhdiInitializeBootDisk @ 0x140B9BD30 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140B9C180 (CimfsInitializeBootDisk.c)
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
