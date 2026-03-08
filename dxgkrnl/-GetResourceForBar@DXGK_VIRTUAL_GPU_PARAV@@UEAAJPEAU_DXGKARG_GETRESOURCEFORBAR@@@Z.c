/*
 * XREFs of ?GetResourceForBar@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_GETRESOURCEFORBAR@@@Z @ 0x1C01E03A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::GetResourceForBar(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_GETRESOURCEFORBAR *a2)
{
  PCM_PARTIAL_RESOURCE_DESCRIPTOR pResource; // rax

  pResource = a2->pResource;
  *(_OWORD *)&pResource->Type = 0LL;
  *((_DWORD *)&pResource->u.Memory64 + 3) = 0;
  return 0LL;
}
