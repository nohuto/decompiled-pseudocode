/*
 * XREFs of StorpAdapterInitializePoFxPower @ 0x1C003A84C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000F680 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BD40 (RaidAllocatePool.c)
 *     RaidGetStorPoFxComponent @ 0x1C0013B74 (RaidGetStorPoFxComponent.c)
 *     RaidSetD3Cold @ 0x1C001AC40 (RaidSetD3Cold.c)
 *     McTemplateK0pqtqqt_EtwWriteTransfer @ 0x1C001D66C (McTemplateK0pqtqqt_EtwWriteTransfer.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x1C001E570 (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     RaidInitPoFxPlaceHolderMode @ 0x1C001E738 (RaidInitPoFxPlaceHolderMode.c)
 *     memmove @ 0x1C00201C0 (memmove.c)
 *     memset @ 0x1C0020480 (memset.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C0037E98 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C0037F60 (RaidStorPoFxComponentVersionAndSizeIsValid.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C0037F90 (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C003F0F8 (RaidRegisterForRuntimePowerManagement.c)
 */

__int64 __fastcall StorpAdapterInitializePoFxPower(__int64 a1, int *a2, bool *a3)
{
  __int64 v5; // rbx
  char v6; // al
  __int64 v8; // rdx
  int *StorPoFxComponent; // rax
  int *v10; // rsi
  __int64 v11; // rdx
  unsigned int TotalStorPoFxDeviceSize; // eax
  size_t v13; // r13
  SIZE_T v14; // rbp
  _QWORD *Pool; // rax
  _QWORD *v16; // r15
  __int64 v17; // rax
  int v18; // eax
  char v19; // cl
  int v20; // eax
  char v21; // cl
  int v22; // eax
  char v23; // al
  __int64 v24; // r8
  unsigned int v25; // edx
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned int v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+88h] [rbp+10h] BYREF

  *a3 = 0;
  if ( !a2 )
    return 3238002694LL;
  v5 = **(_QWORD **)(a1 - 16);
  if ( !v5 )
    return 3238002694LL;
  v6 = *(_BYTE *)(v5 + 108);
  if ( (v6 & 0x10) != 0 )
    return 3221225473LL;
  if ( *(_QWORD *)(v5 + 5088) )
  {
    *a3 = (v6 & 8) != 0;
    return 0LL;
  }
  if ( !RaidStorPoFxDeviceVersionAndSizeIsValid(a2) )
    return 3238002694LL;
  if ( *(_DWORD *)(v8 + 8) != 1 )
    return 3238002694LL;
  StorPoFxComponent = (int *)RaidGetStorPoFxComponent(a2, 0);
  v10 = StorPoFxComponent;
  if ( !StorPoFxComponent
    || !RaidStorPoFxComponentVersionAndSizeIsValid(StorPoFxComponent)
    || (unsigned int)(v10[2] - 1) > 7
    || *((_QWORD *)v10 + 2) != 0x481F895FDCAF9C10LL
    || *((_QWORD *)v10 + 3) != 0x3356F5D2CED492A4LL )
  {
    return 3238002694LL;
  }
  v29 &= v11;
  if ( (int)RaidRegisterForRuntimePowerManagement(*(_QWORD *)(v5 + 8), a2, v5, &v29) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize(a2);
  v13 = TotalStorPoFxDeviceSize;
  v14 = TotalStorPoFxDeviceSize + 80;
  Pool = RaidAllocatePool(NonPagedPoolNx, v14, 0x4F506152u, *(_QWORD *)(v5 + 8));
  v16 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v14);
    v17 = v29;
    *((_DWORD *)v16 + 4) = 0;
    *v16 = v17;
    v18 = *((_DWORD *)v16 + 5) | 3;
    *((_DWORD *)v16 + 5) = v18;
    if ( v10[2] == 1 )
      *((_DWORD *)v16 + 5) = v18 | 0x100;
    v16[1] = v16 + 10;
    memmove(v16 + 10, a2, v13);
    v19 = *(_BYTE *)(v5 + 108);
    if ( (v19 & 4) != 0
      && (a2[3] & 4) != 0
      && (v20 = RaidSetD3Cold(*(struct _DEVICE_OBJECT **)(v5 + 8), 1), v19 = *(_BYTE *)(v5 + 108), v20 >= 0) )
    {
      *(_BYTE *)(v5 + 108) = v19 | 8;
      *a3 = 1;
      v21 = *(_BYTE *)(v5 + 108);
    }
    else
    {
      v21 = v19 & 0xF7;
      *(_BYTE *)(v5 + 108) = v21;
    }
    v22 = a2[3];
    if ( (v22 & 8) != 0 )
    {
      *(_BYTE *)(v5 + 108) = v21 | 0x20;
      v22 = a2[3];
    }
    if ( (v22 & 0x200) != 0 )
      *(_BYTE *)(v5 + 109) |= 0x40u;
    RaidInitPoFxPlaceHolderMode(v5, a2[3] & 0x40);
    if ( (a2[3] & 0x40) != 0 )
      *(_BYTE *)(v5 + 109) |= 4u;
    if ( *(char *)(v5 + 110) < 0 )
    {
      v23 = *(_BYTE *)(v5 + 109);
      if ( (v23 & 4) != 0 )
        *(_BYTE *)(v5 + 109) = v23 & 0xFB;
    }
    if ( (a2[3] & 0x400) != 0 )
      *(_BYTE *)(v5 + 109) |= 0x80u;
    PoFxSetComponentLatency(*v16, 0LL, -1LL);
    PoFxSetComponentResidency(*v16, 0LL, -1LL);
    if ( (*(_BYTE *)(v5 + 108) & 0x40) == 0 && (unsigned int)*a2 >= 2 && (a2[3] & 0x10) != 0 )
      *(_DWORD *)(v5 + 5104) = a2[4];
    v25 = *(_DWORD *)(v5 + 5104);
    *(_QWORD *)(v5 + 5088) = v16;
    RaidAdapterPoFxSetDeviceIdleTimeout(v5, v25, v24, 0);
    if ( StorEtwLoggingEnabled )
    {
      v27 = *(unsigned int *)(v5 + 56);
      if ( (_DWORD)v27 != -1 && (byte_1C0069841 & 1) != 0 )
      {
        v28 = (*(unsigned __int8 *)(v5 + 108) >> 3) & 1;
        McTemplateK0pqtqqt_EtwWriteTransfer(
          v28,
          v27,
          v26,
          **(_QWORD **)(v5 + 5088),
          v27,
          v28,
          *(_DWORD *)(v5 + 5104),
          v10[2],
          *(unsigned __int8 *)(v5 + 110) >> 7);
      }
    }
    PoFxStartDevicePowerManagement(**(_QWORD **)(v5 + 5088));
    return 0LL;
  }
  PoFxUnregisterDevice(v29);
  return 3238002691LL;
}
