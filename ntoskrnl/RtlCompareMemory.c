/*
 * XREFs of RtlCompareMemory @ 0x140420DD0
 * Callers:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140204780 (IoReportTargetDeviceChangeAsynchronous.c)
 *     SepIsPackageSid @ 0x140208A9C (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x140208AF4 (SepIsCapabilitySid.c)
 *     SepNormalAccessCheck @ 0x140267220 (SepNormalAccessCheck.c)
 *     PopWriteBsdPoInfo @ 0x1402B9F3C (PopWriteBsdPoInfo.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x1402D2278 (PpmPerfCalculateQosClassPolicies.c)
 *     HalpHpetDiscover @ 0x140372BE0 (HalpHpetDiscover.c)
 *     EtwpTraceStackKey @ 0x140461010 (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x140517070 (WheaGetErrPacketFromErrRecord.c)
 *     HalpGenericErrorSourceRecovery @ 0x140517230 (HalpGenericErrorSourceRecovery.c)
 *     SecureDump_ValidateAmeCertChain @ 0x14055C3D0 (SecureDump_ValidateAmeCertChain.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1405A7764 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpHpSizeHeap @ 0x1405B4398 (RtlpHpSizeHeap.c)
 *     EtwpGetCrimsonStackKey @ 0x1405FF81C (EtwpGetCrimsonStackKey.c)
 *     MmReportParkedProcessors @ 0x140653870 (MmReportParkedProcessors.c)
 *     MinCryptIsKeyPresent @ 0x1406750BC (MinCryptIsKeyPresent.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1406874DC (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PnpIsNullGuid @ 0x140689294 (PnpIsNullGuid.c)
 *     PnpNotifyTargetDeviceChange @ 0x14068C820 (PnpNotifyTargetDeviceChange.c)
 *     PopArePowerSettingsEqual @ 0x14068D3F8 (PopArePowerSettingsEqual.c)
 *     EtwpCalculateUpdateNotification @ 0x140690658 (EtwpCalculateUpdateNotification.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140695580 (EtwpClearSessionAndUnreferenceEntry.c)
 *     PnpCompareInterruptInformation @ 0x1406F4E64 (PnpCompareInterruptInformation.c)
 *     PnpNotifyDeviceClassChange @ 0x1406F5818 (PnpNotifyDeviceClassChange.c)
 *     PipGenerateContainerID @ 0x140733C8C (PipGenerateContainerID.c)
 *     RtlIsCapabilitySid @ 0x140740828 (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x140740AA4 (RtlIsPackageSid.c)
 *     RtlGetAppContainerSidType @ 0x1407414C0 (RtlGetAppContainerSidType.c)
 *     WbInitializeEncryptionSegment @ 0x140752A00 (WbInitializeEncryptionSegment.c)
 *     sub_140754450 @ 0x140754450 (sub_140754450.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14076AA40 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     EtwpTrackDebugIdForSession @ 0x1407756FC (EtwpTrackDebugIdForSession.c)
 *     PnpBusTypeGuidGetIndex @ 0x14078CC74 (PnpBusTypeGuidGetIndex.c)
 *     ObpCompareEntryLevel2 @ 0x14078DD60 (ObpCompareEntryLevel2.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1407A8E68 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1407CE2D0 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1407F6CC8 (ExCovReadjustUnloadedModuleEntry.c)
 *     IopPnPDispatch @ 0x1407F7890 (IopPnPDispatch.c)
 *     SPCallServerHandleFileIntegrityQuery @ 0x1407FAA78 (SPCallServerHandleFileIntegrityQuery.c)
 *     CmpFilterAcpiDockingState @ 0x1408144C0 (CmpFilterAcpiDockingState.c)
 *     PopInitializeHeteroProcessors @ 0x140826970 (PopInitializeHeteroProcessors.c)
 *     BiUpdateBcdObject @ 0x14082DA80 (BiUpdateBcdObject.c)
 *     IoReportTargetDeviceChange @ 0x14087D430 (IoReportTargetDeviceChange.c)
 *     EtwpTrackBinaryForSession @ 0x1408A68C0 (EtwpTrackBinaryForSession.c)
 *     PipMatchPersistentMemory @ 0x140950A98 (PipMatchPersistentMemory.c)
 *     PnpNotifyHwProfileChange @ 0x14095372C (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140953AA8 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14096DD70 (PiDrvDbQuerySyncNodesUpdated.c)
 *     ObpGetTraceIndex @ 0x140979D90 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14098FE4C (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x1409B7868 (CompareNamesCaseSensitive.c)
 *     SepCheckCapabilities @ 0x1409CC46C (SepCheckCapabilities.c)
 *     SepIsAclEqual @ 0x1409CE3E8 (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x1409DD0A0 (WmipParseSysIdTable.c)
 *     SLUpdateLicenseDataInternal @ 0x1409F78B4 (SLUpdateLicenseDataInternal.c)
 *     ExpCovIsModulePresent @ 0x140A0382C (ExpCovIsModulePresent.c)
 *     CmpTransUowIsEqual @ 0x140A19630 (CmpTransUowIsEqual.c)
 *     MiCompareUserSidHotPatchNodes @ 0x140A33974 (MiCompareUserSidHotPatchNodes.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140A50E64 (SdbpMergeAreTagValuesEqual.c)
 *     MinCryptDecodeHashAlgorithmIdentifier @ 0x140A6C4E8 (MinCryptDecodeHashAlgorithmIdentifier.c)
 *     MinCryptDecodeSignatureAlgorithmIdentifier @ 0x140A6C590 (MinCryptDecodeSignatureAlgorithmIdentifier.c)
 *     I_MinCryptFindIssuerCertificateByName @ 0x140A6C8E0 (I_MinCryptFindIssuerCertificateByName.c)
 *     I_MinCryptFindRootByName @ 0x140A6C9F8 (I_MinCryptFindRootByName.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6CBC8 (MinCryptVerifyCertificateWithPolicy2.c)
 *     VfUtilEqualUnicodeString @ 0x140ABF66C (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x140AC0C04 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x140AC5514 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x140AC5664 (ViCopyBackModifiedBuffer.c)
 *     PipMigratePnpState @ 0x140B5AC14 (PipMigratePnpState.c)
 *     HalpAuditSlicTables @ 0x140B8F318 (HalpAuditSlicTables.c)
 *     VhdiInitializeBootDisk @ 0x140B97B20 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140B97F70 (CimfsInitializeBootDisk.c)
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
