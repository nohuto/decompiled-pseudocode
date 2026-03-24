/*
 * XREFs of RtlCompareMemory @ 0x1404081B0
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x1402024F0 (RtlNormalizeSecurityDescriptor.c)
 *     SepIsPackageSid @ 0x1402B0B70 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x1402B635C (SepIsCapabilitySid.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402EE5E0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     SepNormalAccessCheck @ 0x1403509D0 (SepNormalAccessCheck.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x1403A2DEC (PpmPerfCalculateQosClassPolicies.c)
 *     HalpGenericErrorSourceRecovery @ 0x1404CFD18 (HalpGenericErrorSourceRecovery.c)
 *     RtlpStdLogCapturedStackTrace @ 0x140586390 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpHpSizeHeap @ 0x140594A84 (RtlpHpSizeHeap.c)
 *     EtwpTraceStackKey @ 0x1405ADDAC (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x1405BB048 (WheaGetErrPacketFromErrRecord.c)
 *     sub_1405D7C64 @ 0x1405D7C64 (sub_1405D7C64.c)
 *     RtlIsPackageSid @ 0x1405DAD60 (RtlIsPackageSid.c)
 *     NtAlpcOpenSenderProcess @ 0x1405DFFA0 (NtAlpcOpenSenderProcess.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1405E87D0 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140665DE8 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     RtlGetAppContainerSidType @ 0x140676500 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x140676B90 (RtlIsCapabilitySid.c)
 *     PopArePowerSettingsEqual @ 0x14067AD38 (PopArePowerSettingsEqual.c)
 *     sub_140687AE4 @ 0x140687AE4 (sub_140687AE4.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140697800 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepCheckCapabilities @ 0x1406A7AE0 (SepCheckCapabilities.c)
 *     EtwpTrackDebugIdForSession @ 0x1406AB078 (EtwpTrackDebugIdForSession.c)
 *     NtAlpcOpenSenderThread @ 0x1406ACA40 (NtAlpcOpenSenderThread.c)
 *     ObpCompareEntryLevel2 @ 0x1406B2CD0 (ObpCompareEntryLevel2.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406E1144 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x1406E4530 (EtwpCalculateUpdateNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x1406E6FA0 (PnpNotifyTargetDeviceChange.c)
 *     PnpIsNullGuid @ 0x1406E76C0 (PnpIsNullGuid.c)
 *     SPCallServerHandleFileIntegrityQuery @ 0x140728024 (SPCallServerHandleFileIntegrityQuery.c)
 *     PnpNotifyDeviceClassChange @ 0x14073D5D8 (PnpNotifyDeviceClassChange.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1407461B0 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     IopPnPDispatch @ 0x14074F750 (IopPnPDispatch.c)
 *     PnpBusTypeGuidGetIndex @ 0x14076CB5C (PnpBusTypeGuidGetIndex.c)
 *     IoReportTargetDeviceChange @ 0x14076D6F0 (IoReportTargetDeviceChange.c)
 *     PipGenerateContainerID @ 0x14076E528 (PipGenerateContainerID.c)
 *     PnpCompareInterruptInformation @ 0x140772BCC (PnpCompareInterruptInformation.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140773640 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopInitSIdle @ 0x14078CAA8 (PopInitSIdle.c)
 *     CmpFilterAcpiDockingState @ 0x1407A5E48 (CmpFilterAcpiDockingState.c)
 *     CmpTransUowIsEqual @ 0x140872DAC (CmpTransUowIsEqual.c)
 *     PnpNotifyHwProfileChange @ 0x14089FAC8 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14089FD98 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B6AF4 (PiDrvDbQuerySyncNodesUpdated.c)
 *     MiCompareUserSidHotPatchNodes @ 0x1408C985C (MiCompareUserSidHotPatchNodes.c)
 *     ObpGetTraceIndex @ 0x1408DE788 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408F07C0 (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x140911AD4 (CompareNamesCaseSensitive.c)
 *     SepIsAclEqual @ 0x140924CD4 (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x140931EEC (WmipParseSysIdTable.c)
 *     EtwpTrackBinaryForSession @ 0x140940F0C (EtwpTrackBinaryForSession.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E290 (SLUpdateLicenseDataInternal.c)
 *     ExpCovIsModulePresent @ 0x140957494 (ExpCovIsModulePresent.c)
 *     BiUpdateBcdObject @ 0x140972E90 (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x1409C6614 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x1409C807C (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x1409CDE50 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x1409CDFA0 (ViCopyBackModifiedBuffer.c)
 *     PipMigratePnpState @ 0x140A51084 (PipMigratePnpState.c)
 *     HalpAuditSlicTables @ 0x140A65410 (HalpAuditSlicTables.c)
 *     VhdiInitializeBootDisk @ 0x140A94990 (VhdiInitializeBootDisk.c)
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
