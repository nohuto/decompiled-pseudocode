/*
 * XREFs of DxgkMapPhysicalMemoryCB @ 0x1C0052420
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z @ 0x1C0070E84 (-SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z.c)
 */

__int64 __fastcall DxgkMapPhysicalMemoryCB(__int64 a1)
{
  return SysMmMapPhysicalObject(
           *(struct SYSMM_PHYSICAL_OBJECT **)a1,
           *(_BYTE *)(a1 + 8),
           *(_QWORD *)(a1 + 16),
           *(_QWORD *)(a1 + 24),
           1,
           (void **)(a1 + 32),
           (unsigned __int64 *)(a1 + 16),
           (unsigned __int64 *)(a1 + 24));
}
