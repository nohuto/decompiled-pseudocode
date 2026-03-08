/*
 * XREFs of ?SysMmCreateIoSpacePhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C006F1B0
 * Callers:
 *     DxgkCreatePhysicalMemoryObjectCB @ 0x1C0052100 (DxgkCreatePhysicalMemoryObjectCB.c)
 *     SysMmTestCreateIoSpacePhysicalObject @ 0x1C0071710 (SysMmTestCreateIoSpacePhysicalObject.c)
 * Callees:
 *     SmmCreatePhysicalObject @ 0x1C00130BC (SmmCreatePhysicalObject.c)
 */

__int64 __fastcall SysMmCreateIoSpacePhysicalObject(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  if ( (a3 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(3LL, a3);
    return 3221225485LL;
  }
  if ( (a2 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(3LL, a2);
    return 3221225485LL;
  }
  v9 = a3;
  return SmmCreatePhysicalObject(a1, 3, a2, (int)&v9, a4, 0, a5, a6, (ULONG_PTR **)a7, (ULONG_PTR **)a8);
}
