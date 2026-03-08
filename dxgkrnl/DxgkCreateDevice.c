/*
 * XREFs of DxgkCreateDevice @ 0x1C01DCA40
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C01B3464 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 */

__int64 __fastcall DxgkCreateDevice(struct _D3DKMT_CREATEDEVICE *a1)
{
  return DxgkCreateDeviceImpl(a1, 0LL, 0LL, 1);
}
