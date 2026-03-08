/*
 * XREFs of SmmCreateHardwareReservedRanges @ 0x1C020A6E4
 * Callers:
 *     ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IW4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1C0205314 (-SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMOR.c)
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x1C020A220 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     SmmValidateHardwareReservedRanges @ 0x1C020CAB4 (SmmValidateHardwareReservedRanges.c)
 */

__int64 __fastcall SmmCreateHardwareReservedRanges(__int64 a1, __int128 *a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v8; // r14
  __int64 Pool2; // rax
  __int128 v10; // xmm0

  v3 = 0LL;
  v4 = a3;
  if ( !a3 )
    return 0LL;
  if ( *(_QWORD *)(a1 + 384) )
  {
    WdLogSingleEntry1(1LL, 410LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAdapter->HardwareReservedRanges == nullptr",
      410LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_DWORD *)(a1 + 28) )
  {
    WdLogSingleEntry1(1LL, 411LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAdapter->HardwareReservedRangeCount == 0",
      411LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  result = SmmValidateHardwareReservedRanges(a2, (unsigned int)v4);
  if ( (int)result >= 0 )
  {
    v8 = v4;
    Pool2 = ExAllocatePool2(64LL, 24 * v4, 947091524LL);
    *(_QWORD *)(a1 + 384) = Pool2;
    if ( !Pool2 )
    {
      _InterlockedIncrement(&dword_1C013BD08);
      WdLogSingleEntry1(6LL, 422LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate SYSMM_HARDWARE_RESERVED_RANGE array",
        422LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    do
    {
      v10 = *a2++;
      *(_OWORD *)(*(_QWORD *)(a1 + 384) + v3) = v10;
      v3 += 24LL;
      --v8;
    }
    while ( v8 );
    *(_DWORD *)(a1 + 28) = v4;
    return 0LL;
  }
  return result;
}
