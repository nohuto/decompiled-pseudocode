/*
 * XREFs of ?UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x18003D244
 * Callers:
 *     ??1CD2DResource@@MEAA@XZ @ 0x18003D0EC (--1CD2DResource@@MEAA@XZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800D0E70 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x18029923C (-MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ.c)
 * Callees:
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180284610 (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

void __fastcall CD2DResourceManager::UnmanageResource(CD2DContext **this, struct CD2DResource *a2)
{
  if ( *((_BYTE *)a2 + 33) )
  {
    if ( *((_BYTE *)a2 + 34) )
      CD2DContext::RemoveHwProtectedResource(this[3]);
    --*((_DWORD *)this + 4);
  }
  *((_BYTE *)a2 + 32) = 0;
}
