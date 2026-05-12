/*
 * XREFs of RaidAdapterDeleteAsyncCallbacks @ 0x1C002C1D8
 * Callers:
 *     RaidAdapterReleaseResources @ 0x1C0078E14 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C007914C (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterCancelPauseTimer @ 0x1C002B760 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDisConnectMSIInterrupt @ 0x1C0078124 (RaidAdapterDisConnectMSIInterrupt.c)
 *     RaidAdapterDisConnectNonMSIInterrupt @ 0x1C0078170 (RaidAdapterDisConnectNonMSIInterrupt.c)
 */

void __fastcall RaidAdapterDeleteAsyncCallbacks(__int64 a1)
{
  KIRQL v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  void *v5; // rcx
  __int64 v6; // rcx
  unsigned int i; // ebx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  char v11; // al

  KeCancelTimer((PKTIMER)(a1 + 1728));
  if ( *(_DWORD *)(a1 + 5656) )
    KeCancelTimer((PKTIMER)(a1 + 5520));
  v2 = KfRaiseIrql(2u);
  RaidAdapterCancelPauseTimer(a1, (struct _KTIMER *)(a1 + 1920));
  RaidAdapterCancelPauseTimer(a1, (struct _KTIMER *)(a1 + 4280));
  KeLowerIrql(v2);
  KeFlushQueuedDpcs();
  if ( *(_BYTE *)(a1 + 4513) )
  {
    RaidAdapterDisConnectMSIInterrupt(a1);
    *(_BYTE *)(a1 + 4513) = 0;
    *(_QWORD *)(a1 + 4496) = 0LL;
  }
  else if ( *(_QWORD *)(a1 + 696) )
  {
    RaidAdapterDisConnectNonMSIInterrupt(a1);
  }
  v5 = *(void **)(a1 + 5096);
  if ( v5 )
  {
    PoUnregisterPowerSettingCallback(v5);
    *(_QWORD *)(a1 + 5096) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 5112);
  if ( v6 )
  {
    PoUnregisterCoalescingCallback(v6, v3, v4);
    *(_QWORD *)(a1 + 5112) = 0LL;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 4944); ++i )
    PoUnregisterPowerSettingCallback(*(PVOID *)(*(_QWORD *)(a1 + 4960) + 8LL * i));
  v8 = *(void **)(a1 + 4952);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_DWORD *)(a1 + 4944) = 0;
    *(_QWORD *)(a1 + 4952) = 0LL;
    *(_QWORD *)(a1 + 4960) = 0LL;
  }
  v9 = *(void **)(a1 + 5120);
  if ( v9 )
  {
    PoUnregisterPowerSettingCallback(v9);
    *(_QWORD *)(a1 + 5120) = 0LL;
  }
  v10 = *(void **)(a1 + 5912);
  if ( v10 )
  {
    PoUnregisterPowerSettingCallback(v10);
    *(_QWORD *)(a1 + 5912) = 0LL;
  }
  v11 = *(_BYTE *)(a1 + 109);
  if ( (v11 & 8) != 0 )
  {
    *(_BYTE *)(a1 + 109) = v11 & 0xF7;
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 5128), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5128));
  }
}
