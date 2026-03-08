/*
 * XREFs of SmmInitializeDmaDevices @ 0x1C020CC94
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x1C020A220 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C00205A8 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1C00205BC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0024530 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03D1160 (-SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 */

__int64 __fastcall SmmInitializeDmaDevices(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // r14d
  _QWORD *v4; // rsi
  __int64 v5; // r9
  __int128 *v6; // rcx
  int v7; // eax
  __int128 **v8; // rdx
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // r14
  __int128 *v14; // [rsp+50h] [rbp-29h] BYREF
  __int128 *v15; // [rsp+58h] [rbp-21h]
  int v16; // [rsp+60h] [rbp-19h]
  __int64 v17; // [rsp+64h] [rbp-15h]
  int v18; // [rsp+6Ch] [rbp-Dh]
  __int128 v19; // [rsp+70h] [rbp-9h] BYREF
  __int128 v20; // [rsp+80h] [rbp+7h]
  __int128 v21; // [rsp+90h] [rbp+17h] BYREF
  __int128 v22; // [rsp+A0h] [rbp+27h]

  v2 = 0;
  if ( !dword_1C013BBF8 )
  {
    WdLogSingleEntry1(3LL, a1);
    return v2;
  }
  v3 = 0;
  if ( !*(_DWORD *)(a1 + 24) )
  {
LABEL_21:
    *(_DWORD *)(a1 + 20) |= 4u;
    return v2;
  }
  while ( 1 )
  {
    v4 = (_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL * v3);
    if ( *v4 )
    {
      WdLogSingleEntry1(1LL, 243LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pPhysicalAdapter->DmaDevice == nullptr",
        243LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( SmmUseIommuV3Interface() )
    {
      v17 = 0LL;
      v15 = (__int128 *)&v14;
      v6 = (__int128 *)&v14;
      v18 = 0;
      v14 = (__int128 *)&v14;
      v7 = *(_DWORD *)(a1 + 88);
      v16 = 0;
      v19 = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      if ( (v7 & 8) != 0 )
      {
        LODWORD(v20) = 3;
        *(_QWORD *)&v19 = &v14;
        v6 = &v19;
        DWORD2(v20) = 1;
        *((_QWORD *)&v19 + 1) = &v14;
        v15 = &v19;
        v14 = &v19;
      }
      if ( *(_DWORD *)(a1 + 32) == 2 )
      {
        LODWORD(v22) = 1;
        *((_QWORD *)&v22 + 1) = 0x100000000LL;
        if ( *((__int128 ***)v6 + 1) != &v14 )
          __fastfail(3u);
        *(_QWORD *)&v21 = v6;
        *((_QWORD *)&v21 + 1) = &v14;
        *((_QWORD *)v6 + 1) = &v21;
        v14 = &v21;
      }
      v8 = &v14;
    }
    else
    {
      if ( !SmmUseIommuV2Interface() )
      {
        *v4 = 0LL;
        v2 = 0;
        goto LABEL_20;
      }
      v8 = 0LL;
    }
    v9 = ((__int64 (__fastcall *)(__int64, __int128 **, _QWORD *))qword_1C013BCA0)(v5, v8, v4);
    v2 = v9;
    if ( v9 == -1073741275 )
      goto LABEL_29;
    if ( v9 == -1070268400 )
      break;
    if ( v9 < 0 )
      goto LABEL_23;
LABEL_20:
    if ( ++v3 >= *(_DWORD *)(a1 + 24) )
      goto LABEL_21;
  }
  if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
  {
LABEL_29:
    WdLogSingleEntry1(4LL, a1);
    return 0LL;
  }
LABEL_23:
  WdLogSingleEntry1(3LL, v4[1]);
  if ( v3 )
  {
    v10 = 0LL;
    v11 = v3;
    do
    {
      v12 = *(_QWORD *)(a1 + 376);
      if ( !*(_QWORD *)(v10 + v12) )
      {
        WdLogSingleEntry1(1LL, 282LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pPhysicalAdapter->DmaDevice != nullptr",
          282LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      SmmIommuDeleteDevice(*(struct _IOMMU_DMA_DEVICE **)(v10 + v12));
      *(_QWORD *)(v10 + v12) = 0LL;
      v10 += 16LL;
      --v11;
    }
    while ( v11 );
  }
  return v2;
}
