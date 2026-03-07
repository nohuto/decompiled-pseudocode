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
    byte_140C3C431 = 1;
  if ( v3 )
    byte_140C3C433 = 1;
  PopReleaseRwLock((ULONG_PTR)&PopThermalStateTransitionContext);
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
      if ( ++dword_140C3C454 == 1 )
      {
        byte_140C3C45C = 1;
        ++dword_140C3C458;
        PopTraceCr3Tripped();
      }
      PopTraceZoneCr3Tripped((unsigned int)dword_140C3C458, a1);
    }
    else
    {
      PopTraceZoneCr3Mitigated((unsigned int)dword_140C3C458, a1);
      --dword_140C3C454;
    }
    if ( dword_140C3C454 )
    {
      v13 = 1;
    }
    else
    {
      v13 = 0;
      PopThermalStandbyEndTracking(0LL);
      PopTraceCr3Mitigated((unsigned int)dword_140C3C458);
      if ( HIBYTE(word_140C3C450) )
      {
        PopThermalStandbyNotify(0LL);
        HIBYTE(word_140C3C450) = 0;
LABEL_37:
        PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
        return;
      }
    }
    if ( !v4 && v13 && (_BYTE)word_140C3C450 && !HIBYTE(word_140C3C450) )
    {
      LOBYTE(v12) = 1;
      PopThermalStandbyNotify(v12);
      word_140C3C450 = 256;
    }
    goto LABEL_37;
  }
}
