void __fastcall ACPIBuildDeviceDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 *v6; // rdx
  __int64 **v7; // rax
  __int64 v8; // rax
  __int64 *v9; // r8
  int v10; // r9d
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned __int32 v14; // eax
  __int64 (__fastcall *v15)(PVOID); // rdx
  signed __int32 v16; // ebx
  __int64 v17; // rdi
  char v18; // bp
  __int64 v19; // rsi
  unsigned __int32 v20; // eax
  void (__fastcall *v21)(__int64); // rdx
  signed __int32 v22; // ebx
  __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned __int32 v25; // eax
  __int64 (__fastcall *v26)(PVOID); // rdx
  signed __int32 v27; // ebx
  __int64 v28; // rdi
  __int64 v29; // rsi
  unsigned __int32 v30; // eax
  void (__fastcall *v31)(__int64); // rdx
  signed __int32 v32; // ebx
  char v33; // bp
  __int64 v34; // rsi
  unsigned __int32 v35; // eax
  __int64 (__fastcall *v36)(PVOID); // rdx
  signed __int32 v37; // ebx
  int v38; // ebx

  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v4 = AcpiBuildDpcFlags;
  if ( (AcpiBuildDpcFlags & 2) == 0 )
    goto LABEL_80;
  do
  {
    v5 = AcpiBuildQueueList;
    AcpiBuildDpcFlags = v4 & 0xFFFFFFFD;
    if ( (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
    {
      do
      {
        v6 = *(__int64 **)v5;
        if ( (*(_DWORD *)(v5 + 20) & 0x40) == 0 )
        {
          if ( v6[1] != v5
            || (v7 = *(__int64 ***)(v5 + 8), *v7 != (__int64 *)v5)
            || (*v7 = v6, v6[1] = (__int64)v7, v8 = *(_QWORD *)(v5 + 128), v9 = *(__int64 **)(v8 + 8), *v9 != v8) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)v5 = v8;
          *(_QWORD *)(v5 + 8) = v9;
          *v9 = v5;
          *(_QWORD *)(v8 + 8) = v5;
          *(_DWORD *)(v5 + 20) &= ~0x1000u;
          *(_QWORD *)(v5 + 128) = 0LL;
        }
        v5 = (__int64)v6;
      }
      while ( v6 != &AcpiBuildQueueList );
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
    v11 = AcpiBuildRunMethodList;
    if ( (__int64 *)AcpiBuildRunMethodList != &AcpiBuildRunMethodList )
    {
      v33 = 1;
      while ( 1 )
      {
        v34 = *(_QWORD *)v11;
        v35 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 24), 1, 1);
        if ( v35 >= 0xA )
          goto LABEL_82;
        v36 = AcpiBuildRunMethodDispatch[v35];
        if ( v36 )
        {
          if ( v35 != 2 )
            *(_DWORD *)(v11 + 28) = v35;
          v37 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 24), 1, v35);
          v36((PVOID)v11);
          if ( (v37 & 0xFFFFFFFD) != 0 )
            goto LABEL_73;
        }
        else
        {
          v33 = 0;
        }
        v11 = v34;
LABEL_73:
        if ( (__int64 *)v11 == &AcpiBuildRunMethodList )
        {
          if ( v33 )
            v38 = 0;
          else
            v38 = 259;
          KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
          if ( v38 != 259 )
            AcpiBuildDpcFlags |= 2u;
          goto LABEL_79;
        }
      }
    }
    v12 = AcpiBuildOperationRegionList;
    if ( (__int64 *)AcpiBuildOperationRegionList != &AcpiBuildOperationRegionList )
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)v12;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 24), 1, 1);
        if ( v14 >= 4 )
          break;
        v15 = AcpiBuildOperationRegionDispatch[v14];
        if ( !v15 )
          goto LABEL_16;
        if ( v14 != 2 )
          *(_DWORD *)(v12 + 28) = v14;
        v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 24), 1, v14);
        v15((PVOID)v12);
        if ( (v16 & 0xFFFFFFFD) == 0 )
LABEL_16:
          v12 = v13;
        if ( (__int64 *)v12 == &AcpiBuildOperationRegionList )
          goto LABEL_18;
      }
LABEL_82:
      KeBugCheckEx(0xA3u, 1uLL, 0x102124uLL, 0LL, 0LL);
    }
LABEL_18:
    v17 = AcpiBuildPowerResourceList;
    if ( (__int64 *)AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList )
      goto LABEL_30;
    v18 = 1;
    do
    {
      v19 = *(_QWORD *)v17;
      v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 24), 1, 1);
      if ( v20 >= 7 )
        goto LABEL_82;
      v21 = (void (__fastcall *)(__int64))*(&AcpiBuildPowerResourceDispatch + v20);
      if ( !v21 )
      {
        v18 = 0;
LABEL_27:
        v17 = v19;
        continue;
      }
      if ( v20 != 2 )
        *(_DWORD *)(v17 + 28) = v20;
      v22 = _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 24), 1, v20);
      v21(v17);
      if ( (v22 & 0xFFFFFFFD) == 0 )
        goto LABEL_27;
    }
    while ( (__int64 *)v17 != &AcpiBuildPowerResourceList );
    if ( v18 )
    {
LABEL_30:
      v23 = AcpiBuildDelayedDependencyList;
      if ( (__int64 *)AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
      {
        do
        {
          v24 = *(_QWORD *)v23;
          v25 = _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 24), 1, 1);
          if ( v25 >= 5 )
            goto LABEL_82;
          v26 = AcpiBuildDelayedDependencyDispatch[v25];
          if ( v26 )
          {
            if ( v25 != 2 )
              *(_DWORD *)(v23 + 28) = v25;
            v27 = _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 24), 1, v25);
            v26((PVOID)v23);
            if ( (v27 & 0xFFFFFFFD) != 0 )
              continue;
          }
          v23 = v24;
        }
        while ( (__int64 *)v23 != &AcpiBuildDelayedDependencyList );
        if ( (__int64 *)AcpiBuildDelayedDependencyList == &AcpiBuildDelayedDependencyList
          && (AcpiOverrideAttributes & 0x80000) != 0 )
        {
          ACPIBuildSynchronizationRequestInternal(
            RootDeviceExtension,
            (unsigned int)ACPIBuildIssueNotifyInvalidateRelations,
            RootDeviceExtension,
            v10,
            0);
        }
      }
      if ( (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList )
        ACPIBuildProcessGenericList(&AcpiBuildDeviceList, &AcpiBuildDeviceDispatch, 34LL);
      v28 = AcpiBuildThermalZoneList;
      while ( (__int64 *)v28 != &AcpiBuildThermalZoneList )
      {
        v29 = *(_QWORD *)v28;
        v30 = _InterlockedCompareExchange((volatile signed __int32 *)(v28 + 24), 1, 1);
        if ( v30 >= 8 )
          goto LABEL_82;
        v31 = (void (__fastcall *)(__int64))*(&AcpiBuildThermalZoneDispatch + v30);
        if ( v31 )
        {
          if ( v30 != 2 )
            *(_DWORD *)(v28 + 28) = v30;
          v32 = _InterlockedCompareExchange((volatile signed __int32 *)(v28 + 24), 1, v30);
          v31(v28);
          if ( (v32 & 0xFFFFFFFD) != 0 )
            continue;
        }
        v28 = v29;
      }
      if ( (__int64 *)AcpiBuildDeviceList == &AcpiBuildDeviceList
        && (__int64 *)AcpiBuildOperationRegionList == &AcpiBuildOperationRegionList
        && (__int64 *)AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList
        && (__int64 *)AcpiBuildRunMethodList == &AcpiBuildRunMethodList
        && (__int64 *)AcpiBuildThermalZoneList == &AcpiBuildThermalZoneList )
      {
        KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
        if ( (__int64 *)AcpiPowerDelayedQueueList != &AcpiPowerDelayedQueueList )
        {
          ACPIInternalMoveList(&AcpiPowerDelayedQueueList, &AcpiPowerQueueList);
          ACPIPowerScheduleDpc();
        }
        KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
      }
      if ( AcpiBuildSynchronizationList != &AcpiBuildSynchronizationList )
        ACPIBuildProcessSynchronizationList();
      if ( AcpiBuildSpecialSynchronizationList != &AcpiBuildSpecialSynchronizationList )
        ACPIBuildProcessSpecialSynchronizationList();
    }
    KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
LABEL_79:
    v4 = AcpiBuildDpcFlags;
  }
  while ( (AcpiBuildDpcFlags & 2) != 0 );
LABEL_80:
  AcpiBuildDpcFlags = v4 & 0xFFFFFFFE;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
}
