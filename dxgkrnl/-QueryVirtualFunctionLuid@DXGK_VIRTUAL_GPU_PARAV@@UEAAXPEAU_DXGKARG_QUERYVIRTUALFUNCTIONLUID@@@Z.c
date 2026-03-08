/*
 * XREFs of ?QueryVirtualFunctionLuid@DXGK_VIRTUAL_GPU_PARAV@@UEAAXPEAU_DXGKARG_QUERYVIRTUALFUNCTIONLUID@@@Z @ 0x1C01E0450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::QueryVirtualFunctionLuid(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_QUERYVIRTUALFUNCTIONLUID *a2)
{
  *a2->pLuid = *(struct _LUID *)((char *)this + 28);
}
