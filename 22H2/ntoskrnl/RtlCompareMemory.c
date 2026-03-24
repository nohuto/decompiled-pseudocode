/*
 * XREFs of RtlCompareMemory @ 0x140407830
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x1402024F0 (RtlNormalizeSecurityDescriptor.c)
 *     SepNormalAccessCheck @ 0x1402D1160 (SepNormalAccessCheck.c)
 *     SepIsPackageSid @ 0x1403082C0 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14030DAAC (SepIsCapabilitySid.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140360A10 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x1403A26EC (PpmPerfCalculateQosClassPolicies.c)
 *     HalpGenericErrorSourceRecovery @ 0x1404CFC58 (HalpGenericErrorSourceRecovery.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1405862D0 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpHpSizeHeap @ 0x1405949C4 (RtlpHpSizeHeap.c)
 *     EtwpTraceStackKey @ 0x1405ADCEC (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x1405BAF88 (WheaGetErrPacketFromErrRecord.c)
 *     sub_1405D7C64 @ 0x1405D7C64 (sub_1405D7C64.c)
 *     RtlIsPackageSid @ 0x1405DAD60 (RtlIsPackageSid.c)
 *     NtAlpcOpenSenderProcess @ 0x1405DFFA0 (NtAlpcOpenSenderProcess.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1405E87D0 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     PnpIsNullGuid @ 0x140634DDC (PnpIsNullGuid.c)
 *     sub_1406677A4 @ 0x1406677A4 (sub_1406677A4.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14067BC20 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepCheckCapabilities @ 0x14068AA90 (SepCheckCapabilities.c)
 *     EtwpTrackDebugIdForSession @ 0x14068E028 (EtwpTrackDebugIdForSession.c)
 *     NtAlpcOpenSenderThread @ 0x14068F9F0 (NtAlpcOpenSenderThread.c)
 *     ObpCompareEntryLevel2 @ 0x140695D50 (ObpCompareEntryLevel2.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1406DEBD8 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     RtlGetAppContainerSidType @ 0x1406EF2F0 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x1406EF980 (RtlIsCapabilitySid.c)
 *     PopArePowerSettingsEqual @ 0x1406F3B28 (PopArePowerSettingsEqual.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1407149E4 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x140717DD0 (EtwpCalculateUpdateNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x14071AD38 (PnpNotifyTargetDeviceChange.c)
 *     SPCallServerHandleFileIntegrityQuery @ 0x140728EE4 (SPCallServerHandleFileIntegrityQuery.c)
 *     PnpNotifyDeviceClassChange @ 0x140739A78 (PnpNotifyDeviceClassChange.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x140742650 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     IopPnPDispatch @ 0x14074EF40 (IopPnPDispatch.c)
 *     PnpBusTypeGuidGetIndex @ 0x14076C32C (PnpBusTypeGuidGetIndex.c)
 *     IoReportTargetDeviceChange @ 0x14076CEC0 (IoReportTargetDeviceChange.c)
 *     PipGenerateContainerID @ 0x14076DBF8 (PipGenerateContainerID.c)
 *     PnpCompareInterruptInformation @ 0x14077288C (PnpCompareInterruptInformation.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1407733E0 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopInitSIdle @ 0x14078C9A8 (PopInitSIdle.c)
 *     CmpFilterAcpiDockingState @ 0x1407A6278 (CmpFilterAcpiDockingState.c)
 *     CmpTransUowIsEqual @ 0x140872DFC (CmpTransUowIsEqual.c)
 *     PnpNotifyHwProfileChange @ 0x14089FB18 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14089FDE8 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B6B44 (PiDrvDbQuerySyncNodesUpdated.c)
 *     MiCompareUserSidHotPatchNodes @ 0x1408C98AC (MiCompareUserSidHotPatchNodes.c)
 *     ObpGetTraceIndex @ 0x1408DE7D8 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408F0810 (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x140911B24 (CompareNamesCaseSensitive.c)
 *     SepIsAclEqual @ 0x140924D24 (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x140931F3C (WmipParseSysIdTable.c)
 *     EtwpTrackBinaryForSession @ 0x140940F5C (EtwpTrackBinaryForSession.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E2E0 (SLUpdateLicenseDataInternal.c)
 *     ExpCovIsModulePresent @ 0x1409574E4 (ExpCovIsModulePresent.c)
 *     BiUpdateBcdObject @ 0x140972EE0 (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x1409C6624 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x1409C808C (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x1409CDE60 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x1409CDFB0 (ViCopyBackModifiedBuffer.c)
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
