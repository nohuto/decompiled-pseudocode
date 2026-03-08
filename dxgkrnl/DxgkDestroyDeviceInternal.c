/*
 * XREFs of DxgkDestroyDeviceInternal @ 0x1C01DFFD8
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0018A08 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ??1CAdapter@@IEAA@XZ @ 0x1C0018F30 (--1CAdapter@@IEAA@XZ.c)
 * Callees:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C017B2AC (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 */

__int64 __fastcall DxgkDestroyDeviceInternal(const struct _D3DKMT_DESTROYDEVICE *a1)
{
  return DxgkDestroyDeviceImpl(a1, 0);
}
