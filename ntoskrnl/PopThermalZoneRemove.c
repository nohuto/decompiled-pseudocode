/*
 * XREFs of PopThermalZoneRemove @ 0x140988010
 * Callers:
 *     <none>
 * Callees:
 *     KeDisableTimer2 @ 0x140204028 (KeDisableTimer2.c)
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x1402E4F50 (IoCancelIrp.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403901F8 (PopThermalUpdateTelemetryClientCount.c)
 *     PopThermalStandbyNotify @ 0x14058D750 (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStandbyState @ 0x14059277C (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x140592E58 (PopTraceCr3Mitigated.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405938C0 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140593A94 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x140593C1C (PopTraceZoneCr3Mitigated.c)
 *     PopResetCurrentPolicies @ 0x140829F88 (PopResetCurrentPolicies.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140846CC0 (PopThermalUpdateActiveTimeTracking.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140987FC0 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopUpdateOverThrottledCount @ 0x1409881F8 (PopUpdateOverThrottledCount.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopThermalZoneRemove(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  void *v7; // rcx

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
    --dword_140C3C454;
    PopTraceZoneCr3Mitigated(dword_140C3C458, a1);
    if ( !dword_140C3C454 )
    {
      PopTraceCr3Mitigated();
      if ( HIBYTE(word_140C3C450) == 1 )
      {
        PopThermalStandbyNotify(0);
        HIBYTE(word_140C3C450) = 0;
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
    PopReleasePolicyLock(v5, v4, v6);
  }
  PopThermalUpdateTelemetryClientCount(0);
  v7 = *(void **)(a1 + 1048);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
