/*
 * XREFs of ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x1C020A220
 * Callers:
 *     DpiFdoCreateSysMmAdapter @ 0x1C020A044 (DpiFdoCreateSysMmAdapter.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??$SmmInitializeSpinLock@$00@@YAXPEAU?$SYSMM_SPINLOCK@$00@@@Z @ 0x1C0016EFC (--$SmmInitializeSpinLock@$00@@YAXPEAU-$SYSMM_SPINLOCK@$00@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0024530 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     SmmCreateHardwareReservedRanges @ 0x1C020A6E4 (SmmCreateHardwareReservedRanges.c)
 *     ?SmmInitializeIommu@@YAXPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z @ 0x1C020A7B0 (-SmmInitializeIommu@@YAXPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z.c)
 *     SmmInitializeDmaDevices @ 0x1C020CC94 (SmmInitializeDmaDevices.c)
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D17F8 (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03D1B20 (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D1DB8 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C03D24BC (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03D262C (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 */

__int64 __fastcall SysMmCreateAdapter(
        struct _DEVICE_OBJECT *a1,
        struct _DEVICE_OBJECT *const *a2,
        unsigned int a3,
        const struct _DXGK_PHYSICAL_MEMORY_RANGE *a4,
        unsigned int a5,
        unsigned int a6,
        const struct SYSMM_ADAPTER_CREATE_PARAMS *a7,
        struct SYSMM_ADAPTER **a8)
{
  __int64 v10; // r12
  unsigned __int64 v11; // rbx
  char v12; // bp
  char *v14; // rax
  char *v15; // rdi
  int v16; // ecx
  __int64 v17; // rbx
  __int64 Pool2; // rax
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  int LogicalAllocator; // eax
  unsigned int v29; // esi
  __int64 v30; // r14
  int LogicalAddressAt; // eax
  int v32; // eax
  struct SYSMM_LOGICAL_ALLOCATOR **v34; // [rsp+60h] [rbp-98h]
  _DWORD SystemInformation[16]; // [rsp+70h] [rbp-88h] BYREF

  v10 = a3;
  v11 = *(_QWORD *)a7;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0
    && v11 >= (unsigned __int64)SystemInformation[5] << 12 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( (*((_DWORD *)a7 + 4) & 4) == 0 )
      return 3221225473LL;
  }
  v14 = (char *)operator new[](0x190uLL, 0x30737844u, 64LL);
  v15 = v14;
  if ( !v14 )
  {
    _InterlockedIncrement(&dword_1C013BD08);
    WdLogSingleEntry1(6LL, 511LL);
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)L"Failed to allocate SYSMM_ADAPTER", 511LL, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v19) = -1073741801;
    goto LABEL_48;
  }
  memset(v14, 0, 0x190uLL);
  *((_QWORD *)v15 + 35) = 0LL;
  *((_DWORD *)v15 + 64) = 56;
  *((_QWORD *)v15 + 36) = 4096LL;
  *((_DWORD *)v15 + 4) = a6;
  *(_QWORD *)v15 = a1;
  *((_QWORD *)v15 + 47) = 0LL;
  *((_DWORD *)v15 + 6) = v10;
  *((_QWORD *)v15 + 1) = *(_QWORD *)a7;
  *((_DWORD *)v15 + 5) = 0;
  v16 = *((_DWORD *)a7 + 3) & 1;
  *((_DWORD *)v15 + 5) = v16;
  *((_DWORD *)v15 + 5) = v16 | *((_DWORD *)a7 + 3) & 2;
  *((_QWORD *)v15 + 46) = 0LL;
  v34 = (struct SYSMM_LOGICAL_ALLOCATOR **)(v15 + 368);
  *((_DWORD *)v15 + 8) = *((_DWORD *)a7 + 2);
  *((_QWORD *)v15 + 48) = 0LL;
  *((_DWORD *)v15 + 7) = a5;
  SmmInitializeSpinLock<1>((_DWORD *)v15 + 9);
  *((_QWORD *)v15 + 6) = v15 + 40;
  *((_QWORD *)v15 + 5) = v15 + 40;
  SmmInitializeIommu((struct SYSMM_IOMMU *)(v15 + 64), a7);
  v17 = v10;
  Pool2 = ExAllocatePool2(256LL, 16 * v10, 930314308LL);
  *((_QWORD *)v15 + 47) = Pool2;
  if ( Pool2 )
  {
    if ( (_DWORD)v10 )
    {
      v20 = 0LL;
      do
      {
        v21 = (__int64)*a2;
        v20 += 16LL;
        ++a2;
        *(_QWORD *)(v20 + *((_QWORD *)v15 + 47) - 8) = v21;
        --v17;
      }
      while ( v17 );
    }
    LODWORD(v19) = SmmCreateHardwareReservedRanges(v15, a4, a5);
    if ( (int)v19 < 0 )
      goto LABEL_9;
    if ( (*((_DWORD *)a7 + 3) & 1) == 0 )
    {
      LODWORD(v19) = SmmInitializeDmaDevices(v15);
      if ( (int)v19 < 0 )
        goto LABEL_9;
      if ( (*((_DWORD *)a7 + 3) & 2) == 0 )
      {
        v22 = SmmUnblockDevice((struct SYSMM_ADAPTER *)v15);
        v19 = v22;
        if ( v22 < 0 )
          goto LABEL_18;
        if ( (*((_DWORD *)v15 + 22) & 8) != 0 )
        {
          v24 = SysMmEnableIommu(v15, 128LL);
          v19 = v24;
          if ( v24 < 0 )
          {
LABEL_22:
            v23 = 3LL;
            goto LABEL_19;
          }
          *((_DWORD *)v15 + 23) |= 2u;
        }
        if ( (dword_1C013BCE0 & 3) != 0 )
        {
          v25 = SysMmEnableIommu(v15, 8LL);
          LODWORD(v19) = v25;
          if ( v25 < 0 )
          {
            if ( (dword_1C013BCE0 & 3) != 2 )
              goto LABEL_9;
            WdLogSingleEntry1(4LL, v25);
          }
        }
        if ( (*((_DWORD *)v15 + 22) & 2) != 0 )
        {
          v26 = SysMmEnableIommu(v15, 32LL);
          v19 = v26;
          if ( v26 < 0 )
            goto LABEL_22;
        }
        if ( v12 )
        {
          if ( (dword_1C013BCE0 & 0x80u) == 0 || (*((_DWORD *)a7 + 4) & 4) == 0 )
            goto LABEL_46;
        }
        else if ( (*((_DWORD *)a7 + 4) & 4) == 0 )
        {
          WdLogSingleEntry1(1LL, 641LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pCreateParams->Iommu.DmaRemappingSupported",
            641LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *((_DWORD *)v15 + 23) |= 1u;
        if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
        {
          v27 = 0xFFFFFFFFFFFFLL;
          if ( *(_QWORD *)a7 < 0xFFFFFFFFFFFFuLL )
            v27 = *(_QWORD *)a7;
        }
        else
        {
          v27 = *(_QWORD *)a7;
        }
        LogicalAllocator = SmmCreateLogicalAllocator(v27 + 1, v34);
        v19 = LogicalAllocator;
        if ( LogicalAllocator < 0 )
          goto LABEL_18;
        v29 = 0;
        if ( a5 )
        {
          v30 = 0LL;
          do
          {
            LogicalAddressAt = SmmAllocateLogicalAddressAt(
                                 *v34,
                                 *(_QWORD *)(v30 + *((_QWORD *)v15 + 48)),
                                 *(_QWORD *)(v30 + *((_QWORD *)v15 + 48) + 8),
                                 (const void *)(v30 + *((_QWORD *)v15 + 48)),
                                 (struct SYSMM_LOGICAL_BLOCK **)(v30 + *((_QWORD *)v15 + 48) + 16));
            v19 = LogicalAddressAt;
            if ( LogicalAddressAt < 0 )
              goto LABEL_18;
            ++v29;
            v30 += 24LL;
          }
          while ( v29 < a5 );
        }
        v32 = SysMmEnableIommu(v15, 2LL);
        v19 = v32;
        if ( v32 < 0 )
        {
LABEL_18:
          v23 = 4LL;
LABEL_19:
          WdLogSingleEntry1(v23, v19);
          goto LABEL_9;
        }
      }
    }
LABEL_46:
    *a8 = (struct SYSMM_ADAPTER *)v15;
    return 0LL;
  }
  _InterlockedIncrement(&dword_1C013BD08);
  WdLogSingleEntry1(6LL, 537LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate SYSMM_PHYSICAL_ADAPTER array",
    537LL,
    0LL,
    0LL,
    0LL,
    0LL);
  LODWORD(v19) = -1073741801;
LABEL_9:
  SysMmDestroyAdapter((struct SYSMM_ADAPTER *)v15);
LABEL_48:
  *a8 = 0LL;
  return (unsigned int)v19;
}
