/*
 * XREFs of RtlCompareMemory @ 0x140408390
 * Callers:
 *     SepIsPackageSid @ 0x14022EED0 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14023453C (SepIsCapabilitySid.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1402A6E80 (RtlNormalizeSecurityDescriptor.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402F9330 (IoReportTargetDeviceChangeAsynchronous.c)
 *     SepNormalAccessCheck @ 0x14035B720 (SepNormalAccessCheck.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x1403A2F3C (PpmPerfCalculateQosClassPolicies.c)
 *     HalpGenericErrorSourceRecovery @ 0x1404CFF58 (HalpGenericErrorSourceRecovery.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1405865C0 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpHpSizeHeap @ 0x140594CB4 (RtlpHpSizeHeap.c)
 *     EtwpTraceStackKey @ 0x1405ADFDC (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x1405BB278 (WheaGetErrPacketFromErrRecord.c)
 *     sub_1405D7C64 @ 0x1405D7C64 (sub_1405D7C64.c)
 *     sub_1405E6C44 @ 0x1405E6C44 (sub_1405E6C44.c)
 *     SepCheckCapabilities @ 0x140605560 (SepCheckCapabilities.c)
 *     EtwpTrackDebugIdForSession @ 0x140609768 (EtwpTrackDebugIdForSession.c)
 *     NtAlpcOpenSenderThread @ 0x14060B130 (NtAlpcOpenSenderThread.c)
 *     ObpCompareEntryLevel2 @ 0x140611D90 (ObpCompareEntryLevel2.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14065AC08 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     RtlGetAppContainerSidType @ 0x140669BD0 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x14066A260 (RtlIsCapabilitySid.c)
 *     PopArePowerSettingsEqual @ 0x14066E478 (PopArePowerSettingsEqual.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1406941A8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406B8424 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x1406BB810 (EtwpCalculateUpdateNotification.c)
 *     RtlIsPackageSid @ 0x1406CA4E0 (RtlIsPackageSid.c)
 *     NtAlpcOpenSenderProcess @ 0x1406CF700 (NtAlpcOpenSenderProcess.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1406D7F30 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     PnpNotifyTargetDeviceChange @ 0x1406FE380 (PnpNotifyTargetDeviceChange.c)
 *     PnpIsNullGuid @ 0x1406FEAA0 (PnpIsNullGuid.c)
 *     SPCallServerHandleFileIntegrityQuery @ 0x1407284D4 (SPCallServerHandleFileIntegrityQuery.c)
 *     PnpNotifyDeviceClassChange @ 0x14073D798 (PnpNotifyDeviceClassChange.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x140746370 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     IopPnPDispatch @ 0x14074F910 (IopPnPDispatch.c)
 *     PnpBusTypeGuidGetIndex @ 0x14076CD1C (PnpBusTypeGuidGetIndex.c)
 *     IoReportTargetDeviceChange @ 0x14076D8B0 (IoReportTargetDeviceChange.c)
 *     PipGenerateContainerID @ 0x14076E6E8 (PipGenerateContainerID.c)
 *     PnpCompareInterruptInformation @ 0x140772D8C (PnpCompareInterruptInformation.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140773800 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopInitSIdle @ 0x14078CC68 (PopInitSIdle.c)
 *     CmpFilterAcpiDockingState @ 0x1407A6048 (CmpFilterAcpiDockingState.c)
 *     CmpTransUowIsEqual @ 0x140872F0C (CmpTransUowIsEqual.c)
 *     PnpNotifyHwProfileChange @ 0x14089FC28 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14089FEF8 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B6C54 (PiDrvDbQuerySyncNodesUpdated.c)
 *     MiCompareUserSidHotPatchNodes @ 0x1408C99BC (MiCompareUserSidHotPatchNodes.c)
 *     ObpGetTraceIndex @ 0x1408DE8E8 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408F0920 (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x140911C34 (CompareNamesCaseSensitive.c)
 *     SepIsAclEqual @ 0x140924E34 (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x14093204C (WmipParseSysIdTable.c)
 *     EtwpTrackBinaryForSession @ 0x1409410DC (EtwpTrackBinaryForSession.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E460 (SLUpdateLicenseDataInternal.c)
 *     ExpCovIsModulePresent @ 0x140957664 (ExpCovIsModulePresent.c)
 *     BiUpdateBcdObject @ 0x140973070 (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x1409C7614 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x1409C907C (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x1409CEE50 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x1409CEFA0 (ViCopyBackModifiedBuffer.c)
 *     PipMigratePnpState @ 0x140A52084 (PipMigratePnpState.c)
 *     HalpAuditSlicTables @ 0x140A66410 (HalpAuditSlicTables.c)
 *     VhdiInitializeBootDisk @ 0x140A95990 (VhdiInitializeBootDisk.c)
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
