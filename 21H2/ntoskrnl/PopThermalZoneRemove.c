/*
 * XREFs of PopThermalZoneRemove @ 0x140990740
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeDisableTimer2 @ 0x1402D40E4 (KeDisableTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14038ACD0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14038B198 (PopTraceThermalZoneActiveActivity.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403C0F80 (PopThermalUpdateTelemetryClientCount.c)
 *     PopThermalStandbyNotify @ 0x1405D0668 (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStandbyState @ 0x1405D36C0 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x1405D3D68 (PopTraceCr3Mitigated.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405D44DC (PopTraceZoneCr3Mitigated.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1407FD7A8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopResetCurrentPolicies @ 0x1408193F4 (PopResetCurrentPolicies.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x14081CEB4 (PopThermalUpdateActiveTimeTracking.c)
 *     PopUpdateOverThrottledCount @ 0x140990924 (PopUpdateOverThrottledCount.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PopThermalZoneRemove(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rcx

  *(_BYTE *)(a1 + 66) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 448), Executive, 0, 0, 0LL);
  if ( *(_BYTE *)(a1 + 145) )
  {
    PopThermalUpdatePassiveTimeTracking(a1 + 504, *(_BYTE *)(a1 + 80));
    PopTraceThermalZonePassiveHistogram(a1);
  }
  if ( *(_BYTE *)(a1 + 505) )
  {
    LOBYTE(v2) = *(_BYTE *)(a1 + 69);
    PopThermalUpdateActiveTimeTracking(a1 + 504, v2);
    PopTraceThermalZoneActiveActivity(a1);
  }
  if ( *(_BYTE *)(a1 + 72) )
  {
    PopDiagTraceThermalStandbyState(*(_QWORD *)(a1 + 48), 0LL);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
    --dword_140C22074;
    PopTraceZoneCr3Mitigated(dword_140C22078, a1);
    if ( !dword_140C22074 )
    {
      PopTraceCr3Mitigated();
      if ( HIBYTE(word_140C22070) == 1 )
      {
        PopThermalStandbyNotify(0);
        HIBYTE(word_140C22070) = 0;
      }
    }
    PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  }
  if ( *(_BYTE *)(a1 + 73) )
    PopUpdateOverThrottledCount(a1);
  KeDisableTimer2(a1 + 296, 1, 1, 0LL);
  *(_BYTE *)(a1 + 65) |= 0x80u;
  if ( !--PopThermalZoneCount )
  {
    PopAcquirePolicyLock(v3);
    if ( BYTE13(PopCapabilities) )
    {
      BYTE13(PopCapabilities) = 0;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v5, v4);
  }
  PopThermalUpdateTelemetryClientCount(0);
  v6 = *(void **)(a1 + 1048);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
