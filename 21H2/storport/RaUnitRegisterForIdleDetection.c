/*
 * XREFs of RaUnitRegisterForIdleDetection @ 0x1C0075884
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B1E8 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0005E64 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C0005F3C (RaidUnitPoFxSetDeviceIdleTimeout.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006380 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x1C00063B0 (RaidIsUnitControlSupported.c)
 *     RaidAllocatePool @ 0x1C000BDB0 (RaidAllocatePool.c)
 *     RaCallMiniportUnitControl @ 0x1C00190AC (RaCallMiniportUnitControl.c)
 *     RaidSetD3Cold @ 0x1C001ACB0 (RaidSetD3Cold.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     memset @ 0x1C0020540 (memset.c)
 *     RaidAdapterIsRegisteredForIdleDetection @ 0x1C002D344 (RaidAdapterIsRegisteredForIdleDetection.c)
 *     McTemplateK0pquuudttqqttq_EtwWriteTransfer @ 0x1C003DAC8 (McTemplateK0pquuudttqqttq_EtwWriteTransfer.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C003F118 (RaidRegisterForRuntimePowerManagement.c)
 */

__int64 __fastcall RaUnitRegisterForIdleDetection(unsigned __int8 *Context, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // edi
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // r8
  int v9; // edx
  unsigned __int8 v10; // al
  char v11; // r12
  SIZE_T v12; // rdi
  _QWORD *Pool; // rax
  _QWORD *v14; // rsi
  unsigned int v15; // ecx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v16; // rcx
  int v17; // eax
  __int64 v18; // r8
  _DWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r15
  int v26; // r12d
  int v27; // esi
  int v28; // r13d
  __int64 v29; // r8
  __int64 *v30; // rcx
  PVOID *Handle; // [rsp+20h] [rbp-79h]
  unsigned int v33; // [rsp+48h] [rbp-51h]
  int v34; // [rsp+80h] [rbp-19h]
  int v35; // [rsp+84h] [rbp-15h]

  v2 = *((_QWORD *)Context + 3);
  v3 = 0;
  v35 = 0;
  v34 = -1;
  if ( !v2 || (*(_BYTE *)(v2 + 109) & 4) != 0 || *((_DWORD *)Context + 454) == 1 )
    goto LABEL_47;
  if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
  {
    v6 = *((_QWORD *)Context + 218);
    v7 = *(_DWORD *)(a2 + 12);
    if ( v7 != *(_DWORD *)(v6 + 20) )
    {
      *(_DWORD *)(v6 + 20) = v7;
      if ( (*(_DWORD *)(*((_QWORD *)Context + 218) + 32LL) & 0x100) != 0 )
        RaidUnitAdaptiveIdleTimeout((__int64)Context);
      else
        RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12), 0);
    }
    v8 = *((_QWORD *)Context + 218);
    v9 = *(_DWORD *)(a2 + 8) & 1;
    if ( v9 != (*(_DWORD *)(v8 + 32) & 1) )
      *(_DWORD *)(v8 + 32) = v9 | *(_DWORD *)(v8 + 32) & 0xFFFFFFFE;
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 217));
    goto LABEL_48;
  }
  if ( (Context[449] & 0x80u) != 0 )
  {
    v3 = -1073741738;
    goto LABEL_48;
  }
  v10 = _interlockedbittestandset((volatile signed __int32 *)Context + 114, 0);
  v35 = v10;
  if ( v10 )
  {
LABEL_47:
    v3 = -1073741823;
    goto LABEL_48;
  }
  Context[449] ^= (Context[449] ^ (4 * (*(_DWORD *)(a2 + 8) >> 1))) & 4;
  if ( RaidIsUnitControlSupported((__int64)Context, 4) )
    v3 = RaCallMiniportUnitControl(*((_QWORD *)Context + 3) + 320LL);
  if ( !*((_QWORD *)Context + 218) )
  {
    if ( (*(_BYTE *)(v2 + 104) & 0x20) != 0 || *(char *)(v2 + 110) < 0 )
    {
      v11 = 0;
      v12 = 224LL;
      if ( *(char *)(v2 + 110) < 0
        && RaidAdapterIsRegisteredForIdleDetection(v2)
        && (*(_DWORD *)(*(_QWORD *)(v2 + 5088) + 20LL) & 0x100) == 0 )
      {
        v11 = 1;
        v12 = 256LL;
      }
      Pool = RaidAllocatePool(NonPagedPoolNx, v12, 0x4F506152u, *((_QWORD *)Context + 1));
      v14 = Pool;
      if ( !Pool )
      {
        v3 = -1073741670;
        goto LABEL_33;
      }
      memset(Pool, 0, v12);
      v15 = v14[4] & 0xFFFFFFF1 | 0xA;
      *((_DWORD *)v14 + 4) = 0;
      *((_DWORD *)v14 + 8) = v15;
      v14[10] = v14 + 9;
      v14[9] = v14 + 9;
      KeInitializeSpinLock(v14 + 11);
      v14[1] = v14 + 18;
      *((_DWORD *)v14 + 37) = 16;
      *((_DWORD *)v14 + 36) = 1;
      *((_DWORD *)v14 + 38) = 1;
      *((_DWORD *)v14 + 42) = 1;
      *((_DWORD *)v14 + 40) = 1;
      *((_DWORD *)v14 + 41) = 32;
      *((_OWORD *)v14 + 11) = xmmword_1C005D3A0;
      *((_DWORD *)v14 + 48) = 1;
      *((_DWORD *)v14 + 49) = 32;
      v14[25] = 0LL;
      v14[26] = 0LL;
      *((_DWORD *)v14 + 54) = -1;
      if ( v11 )
      {
        *((_DWORD *)v14 + 39) |= 0x100u;
        v14[29] = 0LL;
        v14[30] = 0LL;
        *((_DWORD *)v14 + 42) = 2;
        *((_DWORD *)v14 + 56) = 1;
        *((_DWORD *)v14 + 57) = 32;
        *((_DWORD *)v14 + 62) = -1;
        *((_DWORD *)v14 + 8) |= 0x1000u;
      }
      v3 = RaidRegisterForRuntimePowerManagement(
             *((_QWORD *)Context + 1),
             (int *)v14 + 36,
             (__int64)Context,
             (__int64)v14);
      if ( v3 >= 0 )
      {
        if ( *v14 )
        {
          PoFxSetComponentLatency(*v14, 0LL, -1LL);
          PoFxSetComponentResidency(*v14, 0LL, -1LL);
          v16 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)Context + 217);
          *((_QWORD *)Context + 218) = v14;
          ExReInitializeRundownProtectionCacheAware(v16);
          Context[449] |= 0x80u;
          goto LABEL_33;
        }
        v3 = -1073741823;
      }
      ExFreePoolWithTag(v14, 0x4F506152u);
      goto LABEL_33;
    }
    v3 = -1073741637;
  }
LABEL_33:
  if ( v3 < 0 )
  {
    Context[449] &= ~4u;
  }
  else
  {
    *(_DWORD *)(*((_QWORD *)Context + 218) + 32LL) ^= (*(_DWORD *)(*((_QWORD *)Context + 218) + 32LL) ^ *(_DWORD *)(a2 + 8)) & 1;
    v17 = *((_DWORD *)Context + 455);
    v18 = *((_QWORD *)Context + 218);
    if ( v17 == -1 )
    {
      v19 = *(_DWORD **)(v18 + 8);
      if ( *v19 >= 2u && (v19[3] & 0x10) != 0 )
      {
        v17 = v19[4];
      }
      else if ( *v19 >= 3u && (v19[3] & 0x20) != 0 )
      {
        v17 = 0;
      }
      else
      {
        v17 = 300000;
      }
    }
    *(_DWORD *)(v18 + 24) = v17;
    *(_DWORD *)(*((_QWORD *)Context + 218) + 20LL) = *(_DWORD *)(a2 + 12);
    RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12), 1);
    PoFxStartDevicePowerManagement(**((_QWORD **)Context + 218));
    v21 = *((_QWORD *)Context + 218);
    if ( (*(_DWORD *)(v21 + 32) & 0x100) != 0 )
    {
      LOBYTE(v20) = 1;
      PoRegisterCoalescingCallback(RaidUnitIoCoalescingCallback, v20, v21 + 96, Context);
      PoRegisterPowerSettingCallback(
        *((PDEVICE_OBJECT *)Context + 1),
        &GUID_ACDC_POWER_SOURCE,
        (PPOWER_SETTING_CALLBACK)RaidUnitPowerSettingCallback,
        Context,
        (PVOID *)(*((_QWORD *)Context + 218) + 104LL));
      *(_QWORD *)(*((_QWORD *)Context + 218) + 112LL) = ExAllocateTimer(RaidUnitPowerCycleCheck, Context, 0LL, v22);
      *(_QWORD *)(*((_QWORD *)Context + 218) + 120LL) = ExAllocateTimer(RaidUnitEndMaintenanceTime, Context, 0LL, v23);
    }
  }
  RaidSetD3Cold(*((struct _DEVICE_OBJECT **)Context + 1), (Context[449] & 4) != 0);
LABEL_48:
  if ( StorEtwLoggingEnabled )
  {
    v24 = *((_QWORD *)Context + 3);
    v25 = 0LL;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    if ( v24 )
      v34 = *(_DWORD *)(v24 + 56);
    if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
    {
      v30 = (__int64 *)*((_QWORD *)Context + 218);
      v25 = *v30;
      v27 = v30[4] & 1;
      v28 = *((_DWORD *)v30 + 5);
      v26 = *(_DWORD *)(v30[1] + 24);
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 217));
    }
    if ( (byte_1C0069841 & 1) != 0 )
    {
      v33 = (*(_DWORD *)(a2 + 8) >> 1) & 1;
      LODWORD(Handle) = v34;
      McTemplateK0pquuudttqqttq_EtwWriteTransfer(
        *(_DWORD *)(a2 + 8) & 1,
        v33,
        v29,
        v25,
        Handle,
        Context[96],
        Context[97],
        Context[98],
        v3,
        v33,
        *(_DWORD *)(a2 + 8) & 1,
        *(_DWORD *)(a2 + 12),
        v26,
        (Context[449] >> 2) & 1,
        v27,
        v28);
    }
  }
  if ( !v35 )
    *((_DWORD *)Context + 114) &= ~1u;
  return (unsigned int)v3;
}
