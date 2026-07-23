/*
 * XREFs of PopThermalZoneRemove @ 0x1408E7EE0
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x1402394D0 (IoCancelIrp.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     KeDisableTimer2 @ 0x14026DE70 (KeDisableTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14038A574 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14038A704 (PopTraceThermalZoneActiveActivity.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403A8D58 (PopThermalUpdateTelemetryClientCount.c)
 *     PopThermalStandbyNotify @ 0x14056FAAC (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStandbyState @ 0x140573340 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x1405737BC (PopTraceCr3Mitigated.c)
 *     PopTraceZoneCr3Mitigated @ 0x140573D10 (PopTraceZoneCr3Mitigated.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140778838 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x14078E0DC (PopThermalUpdateActiveTimeTracking.c)
 *     PopResetCurrentPolicies @ 0x140793E98 (PopResetCurrentPolicies.c)
 *     PopUpdateOverThrottledCount @ 0x1408E80C4 (PopUpdateOverThrottledCount.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
    --dword_140C22E94;
    PopTraceZoneCr3Mitigated(dword_140C22E98, a1);
    if ( !dword_140C22E94 )
    {
      PopTraceCr3Mitigated();
      if ( HIBYTE(word_140C22E90) == 1 )
      {
        PopThermalStandbyNotify(0);
        HIBYTE(word_140C22E90) = 0;
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
