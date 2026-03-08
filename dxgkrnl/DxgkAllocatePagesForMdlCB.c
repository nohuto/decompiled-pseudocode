/*
 * XREFs of DxgkAllocatePagesForMdlCB @ 0x1C0012E90
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetSysMmAdapterFromDevice @ 0x1C0012F3C (DpiGetSysMmAdapterFromDevice.c)
 *     ?SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@IQEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAU_MDL@@@Z @ 0x1C0012FB4 (-SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE.c)
 */

__int64 __fastcall DxgkAllocatePagesForMdlCB(__int64 a1, __int64 a2)
{
  int v2; // edi
  unsigned __int64 v4; // rsi
  __int64 SysMmAdapterFromDevice; // rax
  __int64 v7; // rdx
  char v8; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 32);
  if ( v2 > 2 )
  {
    v7 = *(int *)(a2 + 32);
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 24);
    if ( v4 <= 0xFFFFF000 )
    {
      SysMmAdapterFromDevice = DpiGetSysMmAdapterFromDevice();
      return SysMmCreateMdlPhysicalObject(
               SysMmAdapterFromDevice,
               (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL,
               *(_QWORD *)a2,
               *(_QWORD *)(a2 + 8),
               *(_QWORD *)(a2 + 16),
               v2,
               *(_DWORD *)(a2 + 36),
               0LL,
               0,
               a2 + 40,
               &v8,
               a2 + 48);
    }
    v7 = *(_QWORD *)(a2 + 24);
  }
  WdLogSingleEntry1(3LL, v7);
  return 3221225485LL;
}
