/*
 * XREFs of ACPIDeviceCancelWaitWakeIrp @ 0x1C001C150
 * Callers:
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C001E2A0 (ACPIDeviceIrpWaitWakeRequestPending.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C000518C (ACPIWakeRemoveDevicesAndUpdate.c)
 *     WPP_RECORDER_SF_qqqss @ 0x1C000A12C (WPP_RECORDER_SF_qqqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000A374 (WPP_RECORDER_SF_qqss.c)
 *     ACPIWakeEmulationDisable @ 0x1C0045254 (ACPIWakeEmulationDisable.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0045348 (ACPIWakeEnableDisableAsync.c)
 */

void __fastcall ACPIDeviceCancelWaitWakeIrp(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  char v4; // bp
  const char *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  const char *v8; // r8
  const char *v9; // rcx
  __int64 v10; // rax
  __int64 i; // rsi
  const char *v12; // rax
  __int64 v13; // rcx
  char v14; // dl
  const char *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 *v18; // rax
  void (__fastcall *v19)(__int64, __int64, __int64); // rbx
  __int64 v20; // rcx
  __int64 v21; // [rsp+90h] [rbp+18h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = 0;
  v5 = (const char *)&unk_1C00622D0;
  v6 = DeviceExtension;
  LOBYTE(v7) = 0;
  v8 = (const char *)&unk_1C00622D0;
  v9 = (const char *)&unk_1C00622D0;
  if ( DeviceExtension )
  {
    v7 = DeviceExtension;
    v10 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v7 + 608);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v7 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xAu,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a2,
      v7,
      v8,
      v9);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  for ( i = AcpiPowerWaitWakeList; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &AcpiPowerWaitWakeList )
    {
      v12 = (const char *)&unk_1C00622D0;
      if ( v6 )
      {
        v13 = *(_QWORD *)(v6 + 8);
        v4 = v6;
        if ( (v13 & 0x200000000000LL) != 0 )
        {
          v5 = *(const char **)(v6 + 608);
          if ( (v13 & 0x400000000000LL) != 0 )
            v12 = *(const char **)(v6 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0xCu,
          (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
          a2,
          v4,
          v5,
          v12);
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      IoReleaseCancelSpinLock(*(_BYTE *)(a2 + 69));
      return;
    }
    if ( *(_QWORD *)(i + 40) == v6 && *(_QWORD *)(i + 200) == a2 )
      break;
  }
  v14 = 0;
  v15 = (const char *)&unk_1C00622D0;
  if ( v6 )
  {
    v16 = *(_QWORD *)(v6 + 8);
    v14 = v6;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(v6 + 608);
      if ( (v16 & 0x400000000000LL) != 0 )
        v15 = *(const char **)(v6 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0xBu,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a2,
      i,
      v14,
      v5,
      v15);
  v17 = *(_QWORD *)i;
  if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || (v18 = *(__int64 **)(i + 8), *v18 != i) )
    __fastfail(3u);
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
  ACPIWakeRemoveDevicesAndUpdate(0LL, 0LL);
  *(_DWORD *)(i + 108) |= 4u;
  v19 = *(void (__fastcall **)(__int64, __int64, __int64))(i + 192);
  *(_DWORD *)(i + 256) = -1073741536;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  IoReleaseCancelSpinLock(*(_BYTE *)(a2 + 69));
  v19(v6, a2, 3221225760LL);
  if ( _bittest64((const signed __int64 *)(v6 + 1008), 0x20u) )
    ACPIWakeEmulationDisable(i);
  if ( _bittest64((const signed __int64 *)(v6 + 1008), 0x26u) )
  {
    v20 = *(_QWORD *)(v6 + 992);
    v21 = *(unsigned int *)(v6 + 976);
    (*(void (__fastcall **)(__int64, __int64 *))(v6 + 984))(v20, &v21);
  }
  ACPIWakeEnableDisableAsync(v6, 0LL, &ACPIDeviceCancelWaitWakeIrpCallBack, i);
}
