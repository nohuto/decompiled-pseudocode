/*
 * XREFs of PopCheckAndHandleThermalConditions @ 0x140373610
 * Callers:
 *     PopThermalWorker @ 0x140801D90 (PopThermalWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140302A88 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x14058FC28 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x14058FC80 (PopThermalStandbyNotify.c)
 *     PopThermalWriteShutdownToRegistry @ 0x1405901B0 (PopThermalWriteShutdownToRegistry.c)
 *     PopDiagTraceThermalStateChange @ 0x140594CB4 (PopDiagTraceThermalStateChange.c)
 *     PopTraceCr3Mitigated @ 0x140595374 (PopTraceCr3Mitigated.c)
 *     PopTraceCr3Tripped @ 0x140595410 (PopTraceCr3Tripped.c)
 *     PopTraceZoneCr3Mitigated @ 0x140596138 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140596260 (PopTraceZoneCr3Tripped.c)
 *     PopIsHibernateSupported @ 0x140873AD4 (PopIsHibernateSupported.c)
 *     PopUpdateOverThrottledCount @ 0x14098B2A8 (PopUpdateOverThrottledCount.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x140992288 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x14099237C (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalShutdown @ 0x1409A0EC8 (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x1409A0EEC (PopSqmThermalHibernate.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

void __fastcall PopCheckAndHandleThermalConditions(__int64 a1)
{
  __int64 v1; // rbp
  char v3; // si
  bool v4; // bl
  char v5; // dl
  char IsHibernateSupported; // bl
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v8; // rbp
  __int64 v9; // r8
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // rcx
  char v13; // di

  v1 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  if ( *(_BYTE *)(a1 + 210) && !*(_BYTE *)(a1 + 71) )
  {
    v3 = 1;
    PopSqmThermalCriticalShutdown();
    PopDiagTraceZoneCriticalTripPointExceeded(a1 + 112, v1);
    *(_BYTE *)(a1 + 71) = 1;
  }
  if ( *(_BYTE *)(a1 + 209) )
  {
    PopDiagTraceZoneS4TripPointExceeded(a1 + 112, v1);
    PopSqmThermalHibernate(a1);
    PopAcquirePolicyLock();
    IsHibernateSupported = PopIsHibernateSupported(&PopCapabilities);
    if ( !IsHibernateSupported )
      v3 = 1;
    PopReleasePolicyLock();
    v4 = IsHibernateSupported != 0;
    if ( !v3 )
      goto LABEL_20;
  }
  else
  {
    v4 = 0;
    if ( !v3 )
      goto LABEL_4;
  }
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v1, 0x6D546F50u);
  v8 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v9 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v9 = 0LL;
  v10 = a1 + 128;
  if ( *(_BYTE *)(a1 + 228) )
    v10 = 0LL;
  PopThermalWriteShutdownToRegistry((v9 + 128) & -(__int64)(v9 != 0), v10, -v9);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x6D546F50u);
LABEL_20:
  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
  if ( v4 )
    byte_140C3C811 = 1;
  if ( v3 )
    byte_140C3C813 = 1;
  PopReleaseRwLock(&PopThermalStateTransitionContext);
  PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
LABEL_4:
  v5 = *(_BYTE *)(a1 + 224) != 0;
  if ( *(_BYTE *)(a1 + 73) != v5 )
  {
    *(_BYTE *)(a1 + 73) = v5;
    PopUpdateOverThrottledCount(a1);
  }
  if ( *(_BYTE *)(a1 + 72) != *(_BYTE *)(a1 + 211) )
  {
    PopDiagTraceThermalStateChange(
      *(_QWORD *)(a1 + 48),
      *(unsigned __int8 *)(a1 + 211),
      POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
    v11 = *(_BYTE *)(a1 + 211);
    *(_BYTE *)(a1 + 72) = v11;
    if ( v11 )
    {
      if ( ++dword_140C3C834 == 1 )
      {
        byte_140C3C83C = 1;
        ++dword_140C3C838;
        PopTraceCr3Tripped();
      }
      PopTraceZoneCr3Tripped((unsigned int)dword_140C3C838, a1);
    }
    else
    {
      PopTraceZoneCr3Mitigated((unsigned int)dword_140C3C838, a1);
      --dword_140C3C834;
    }
    if ( dword_140C3C834 )
    {
      v13 = 1;
    }
    else
    {
      v13 = 0;
      PopThermalStandbyEndTracking(0LL);
      PopTraceCr3Mitigated((unsigned int)dword_140C3C838);
      if ( HIBYTE(word_140C3C830) )
      {
        PopThermalStandbyNotify(0LL);
        HIBYTE(word_140C3C830) = 0;
LABEL_37:
        PopReleaseRwLock(&PopSystemThermalInfo);
        return;
      }
    }
    if ( !v4 && v13 && (_BYTE)word_140C3C830 && !HIBYTE(word_140C3C830) )
    {
      LOBYTE(v12) = 1;
      PopThermalStandbyNotify(v12);
      word_140C3C830 = 256;
    }
    goto LABEL_37;
  }
}
