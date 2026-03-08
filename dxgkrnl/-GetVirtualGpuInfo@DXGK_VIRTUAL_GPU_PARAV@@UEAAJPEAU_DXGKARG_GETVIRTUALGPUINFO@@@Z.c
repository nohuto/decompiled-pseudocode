/*
 * XREFs of ?GetVirtualGpuInfo@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_GETVIRTUALGPUINFO@@@Z @ 0x1C01E03C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::GetVirtualGpuInfo(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_GETVIRTUALGPUINFO *a2)
{
  __int64 result; // rax

  a2->Capability[0].MaxValue = 1000000000LL;
  a2->Capability[0].CurrentValue = 1000000000LL;
  a2->Capability[1].MaxValue = 1000000000LL;
  a2->Capability[1].CurrentValue = 1000000000LL;
  a2->Capability[2].MaxValue = 1000000000LL;
  a2->Capability[2].CurrentValue = 1000000000LL;
  a2->Capability[3].MaxValue = 1000000000LL;
  result = 0LL;
  a2->Capability[0].MinValue = 0LL;
  a2->Capability[1].MinValue = 0LL;
  a2->Capability[2].MinValue = 0LL;
  a2->Capability[3].MinValue = 0LL;
  a2->Capability[3].CurrentValue = 0LL;
  return result;
}
