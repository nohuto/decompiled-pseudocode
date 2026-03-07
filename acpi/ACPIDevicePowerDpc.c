void __fastcall ACPIDevicePowerDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // edx
  int v5; // eax
  __int64 v6; // r9
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 *v11; // rcx
  __int64 *v12; // rax
  int v13; // eax
  PVOID **v14; // rcx
  PVOID *v15; // rbx
  PVOID Entry[2]; // [rsp+30h] [rbp-10h] BYREF

  Entry[1] = Entry;
  Entry[0] = Entry;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  v5 = AcpiPowerDpcFlags;
  if ( (AcpiPowerDpcFlags & 2) != 0 )
  {
    while ( 1 )
    {
      AcpiPowerDpcFlags = v5 & 0xFFFFFFFD;
      if ( (__int64 *)AcpiPowerQueueList != &AcpiPowerQueueList )
        ACPIInternalMovePowerList(&AcpiPowerQueueList, Entry);
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
      if ( (__int64 *)AcpiPowerPhase3List == &AcpiPowerPhase3List )
      {
        if ( (__int64 *)AcpiPowerBlockedOnPhase3List != &AcpiPowerBlockedOnPhase3List )
          ACPIInternalMovePowerList(&AcpiPowerBlockedOnPhase3List, Entry);
      }
      else if ( Entry[0] != Entry )
      {
        ACPIDeviceRecordBlockedOnPhase3List(Entry);
      }
      if ( Entry[0] != Entry )
      {
        ACPIDeviceRecordDependencies(Entry);
        ACPIInternalMovePowerList(Entry, &AcpiPowerPhase0List);
      }
      if ( (__int64 *)AcpiPowerBlockedOnDependencyList != &AcpiPowerBlockedOnDependencyList )
        ACPIDevicePowerProcessBlockedItems();
      if ( (__int64 *)AcpiPowerPhase0List != &AcpiPowerPhase0List )
      {
        v7 = ACPIDevicePowerProcessGenericPhase(&AcpiPowerPhase0List, &AcpiDevicePowerProcessPhase0Dispatch, 5LL, 0LL);
        if ( v7 >= 0 && v7 != 259 )
          ACPIInternalMovePowerList(&AcpiPowerPhase0List, &AcpiPowerPhase1List);
      }
      if ( (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List )
        goto LABEL_22;
      if ( (__int64 *)AcpiPowerPhase0List == &AcpiPowerPhase0List )
        break;
LABEL_39:
      if ( AcpiPowerPhase4List != &AcpiPowerPhase4List )
      {
        v13 = ACPIDevicePowerProcessPhase4();
        if ( v13 >= 0 && v13 != 259 )
          ACPIInternalMovePowerList(&AcpiPowerPhase4List, &AcpiPowerPhase5List);
      }
      if ( (__int64 *)AcpiPowerPhase5List != &AcpiPowerPhase5List )
      {
        LOBYTE(v6) = 1;
        ACPIDevicePowerProcessGenericPhase(&AcpiPowerPhase5List, &AcpiDevicePowerProcessPhase5Dispatch, 9LL, v6);
      }
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
      v5 = AcpiPowerDpcFlags;
      if ( (AcpiPowerDpcFlags & 2) == 0 )
        goto LABEL_46;
    }
    v8 = ACPIDevicePowerProcessGenericPhase(&AcpiPowerPhase1List, &AcpiDevicePowerProcessPhase1Dispatch, 7LL, 0LL);
    if ( v8 >= 0 && v8 != 259 )
      ACPIInternalMovePowerList(&AcpiPowerPhase1List, &AcpiPowerPhase2List);
LABEL_22:
    if ( (__int64 *)AcpiPowerPhase0List == &AcpiPowerPhase0List )
    {
      if ( (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
        && (__int64 *)AcpiPowerPhase2List != &AcpiPowerPhase2List )
      {
        v9 = ACPIDevicePowerProcessGenericPhase(&AcpiPowerPhase2List, &AcpiDevicePowerProcessPhase2Dispatch, 7LL, 0LL);
        if ( v9 >= 0 && v9 != 259 )
          ACPIInternalMovePowerList(&AcpiPowerPhase2List, &AcpiPowerPhase3List);
      }
      if ( (__int64 *)AcpiPowerPhase0List == &AcpiPowerPhase0List
        && (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
        && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List
        && (__int64 *)AcpiPowerPhase3List != &AcpiPowerPhase3List )
      {
        v10 = ACPIDevicePowerProcessPhase3();
        if ( v10 >= 0 )
        {
          if ( v10 == 259 )
          {
            if ( (unsigned __int8)ACPIIsPhase3ListEmptyOfUnblockedItems() )
            {
              ACPIMovePowerListUnblockedItems(&AcpiPowerPhase3List);
              v11 = (__int64 *)AcpiPowerPhase3List;
              while ( v11 != &AcpiPowerPhase3List )
              {
                v12 = v11;
                v11 = (__int64 *)*v11;
                *((_DWORD *)v12 + 14) &= 0xEEFFFFFF;
              }
            }
          }
          else
          {
            ACPIInternalMovePowerList(&AcpiPowerPhase3List, &AcpiPowerPhase4List);
          }
        }
      }
    }
    goto LABEL_39;
  }
LABEL_46:
  if ( (__int64 *)AcpiPowerBlockedOnDependencyList == &AcpiPowerBlockedOnDependencyList
    && (__int64 *)AcpiPowerPhase0List == &AcpiPowerPhase0List
    && (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
    && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List
    && (__int64 *)AcpiPowerPhase3List == &AcpiPowerPhase3List
    && AcpiPowerPhase4List == &AcpiPowerPhase4List
    && (__int64 *)AcpiPowerPhase5List == &AcpiPowerPhase5List )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        10,
        51,
        (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids);
    }
    if ( (__int64 *)AcpiPowerSynchronizeList != &AcpiPowerSynchronizeList )
      ACPIInternalMovePowerList(&AcpiPowerSynchronizeList, Entry);
  }
  AcpiPowerDpcFlags &= ~1u;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  v14 = (PVOID **)Entry[0];
  if ( Entry[0] != Entry )
  {
    do
    {
      v15 = *v14;
      ACPIDeviceCompleteRequest(v14);
      v14 = (PVOID **)v15;
    }
    while ( v15 != Entry );
  }
}
