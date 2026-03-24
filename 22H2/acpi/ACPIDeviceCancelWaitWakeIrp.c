/*
 * XREFs of ACPIDeviceCancelWaitWakeIrp @ 0x1C00502C0
 * Callers:
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C00255F0 (ACPIDeviceIrpWaitWakeRequestPending.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001E288 (WPP_RECORDER_SF_qqss.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0026398 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002F564 (ACPIWakeEnableDisableAsync.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qqqss @ 0x1C004AC64 (WPP_RECORDER_SF_qqqss.c)
 *     ACPIWakeEmulationDisable @ 0x1C0061DEC (ACPIWakeEmulationDisable.c)
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
  const char *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rdx
  void (__fastcall *v19)(__int64, __int64, __int64); // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // [rsp+90h] [rbp+18h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = 0;
  v5 = (const char *)&unk_1C00701BA;
  v6 = DeviceExtension;
  LOBYTE(v7) = 0;
  v8 = (const char *)&unk_1C00701BA;
  v9 = (const char *)&unk_1C00701BA;
  if ( DeviceExtension )
  {
    v7 = DeviceExtension;
    v10 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v7 + 568);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v7 + 576);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xAu,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      a2,
      v7,
      v8,
      v9);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  for ( i = AcpiPowerWaitWakeList; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &AcpiPowerWaitWakeList )
    {
      v12 = (const char *)&unk_1C00701BA;
      if ( v6 )
      {
        v13 = *(_QWORD *)(v6 + 8);
        v4 = v6;
        if ( (v13 & 0x200000000000LL) != 0 )
        {
          v5 = *(const char **)(v6 + 568);
          if ( (v13 & 0x400000000000LL) != 0 )
            v12 = *(const char **)(v6 + 576);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0xCu,
          (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
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
  v15 = (const char *)&unk_1C00701BA;
  if ( v6 )
  {
    v16 = *(_QWORD *)(v6 + 8);
    v14 = v6;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(v6 + 568);
      if ( (v16 & 0x400000000000LL) != 0 )
        v15 = *(const char **)(v6 + 576);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0xBu,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
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
  v20 = *(_QWORD *)(v6 + 960);
  if ( (v20 & 0x100000000LL) != 0 )
  {
    ACPIWakeEmulationDisable(i);
    v20 = *(_QWORD *)(v6 + 960);
  }
  if ( (v20 & 0x4000000000LL) != 0 )
  {
    v21 = *(_QWORD *)(v6 + 952);
    v22 = *(unsigned int *)(v6 + 936);
    (*(void (__fastcall **)(__int64, __int64 *))(v6 + 944))(v21, &v22);
  }
  ACPIWakeEnableDisableAsync(
    v6,
    0,
    (__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))&ACPIDeviceCancelWaitWakeIrpCallBack,
    i);
}
