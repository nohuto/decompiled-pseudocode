/*
 * XREFs of ?AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z @ 0x1C0078160
 * Callers:
 *     <none>
 * Callees:
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C034F87C (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 */

__int64 __fastcall CAdapter::AddSignalToContextByPtr(CAdapter *this, unsigned int a2, void *a3, __int64 a4)
{
  return DxgkSignalSynchronizationObjectFromGpuByReference(a3, a4, a2);
}
