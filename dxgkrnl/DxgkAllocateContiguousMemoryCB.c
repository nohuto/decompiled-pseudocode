/*
 * XREFs of DxgkAllocateContiguousMemoryCB @ 0x1C0052030
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetSysMmAdapterFromDevice @ 0x1C0012F3C (DpiGetSysMmAdapterFromDevice.c)
 *     ?SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAX@Z @ 0x1C006F010 (-SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY.c)
 */

__int64 __fastcall DxgkAllocateContiguousMemoryCB(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // rbx
  __int64 SysMmAdapterFromDevice; // rax
  char v7; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(int *)(a2 + 32);
  if ( (int)v2 <= 2 )
  {
    v5 = (*(_QWORD *)a2 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    SysMmAdapterFromDevice = DpiGetSysMmAdapterFromDevice();
    return SysMmCreateContiguousMemoryPhysicalObject(
             SysMmAdapterFromDevice,
             v5,
             *(_QWORD *)(a2 + 8),
             *(_QWORD *)(a2 + 16),
             *(_QWORD *)(a2 + 24),
             v2,
             0LL,
             0,
             a2 + 40,
             &v7,
             a2 + 48);
  }
  else
  {
    WdLogSingleEntry1(3LL, v2);
    return 3221225485LL;
  }
}
