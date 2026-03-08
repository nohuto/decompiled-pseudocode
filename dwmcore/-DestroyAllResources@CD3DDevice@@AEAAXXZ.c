/*
 * XREFs of ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x1800EE1EC
 * Callers:
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x1800762D4 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800EDCB4 (--1CD3DDevice@@MEAA@XZ.c)
 * Callees:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800D0E70 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x1800EE378 (-DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ.c)
 */

void __fastcall CD3DDevice::DestroyAllResources(CD3DDevice *this)
{
  CD2DContext::DestroyDeviceResources((CD3DDevice *)((char *)this + 16));
  CD3DResourceManager::DestroyDeviceResources((CD3DDevice *)((char *)this + 1104));
  CD3DDevice::Trim(this);
}
