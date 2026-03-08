/*
 * XREFs of ?GetVendorAndDevice@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_GETVENDORANDDEVICE@@@Z @ 0x1C036A790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::GetVendorAndDevice(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_GETVENDORANDDEVICE *a2)
{
  __int64 result; // rax

  a2->VendorId = 5140;
  result = 0LL;
  a2->DeviceId = 4 * ((*(_DWORD *)(*((_QWORD *)this + 2) + 2792LL) & 8) == 0) + 138;
  return result;
}
