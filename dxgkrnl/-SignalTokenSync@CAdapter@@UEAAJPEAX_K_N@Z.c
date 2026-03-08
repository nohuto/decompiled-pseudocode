/*
 * XREFs of ?SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z @ 0x1C0078600
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureRenderFenceWait@CAdapter@@AEAAJAEA_K@Z @ 0x1C00784EC (-EnsureRenderFenceWait@CAdapter@@AEAAJAEA_K@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C034F87C (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 */

__int64 __fastcall CAdapter::SignalTokenSync(CAdapter *this, void *a2, __int64 a3, char a4)
{
  __int64 result; // rax

  if ( !a4 )
    return DxgkSignalSynchronizationObjectFromGpuByReference(a2, a3, *((unsigned int *)this + 18));
  result = CAdapter::EnsureRenderFenceWait(this, (unsigned __int64 *)this + 11);
  if ( (int)result >= 0 )
    return DxgkSignalSynchronizationObjectFromGpuByReference(a2, a3, *((unsigned int *)this + 18));
  return result;
}
