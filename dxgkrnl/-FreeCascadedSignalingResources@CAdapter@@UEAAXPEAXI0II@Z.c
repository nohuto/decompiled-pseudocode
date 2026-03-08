/*
 * XREFs of ?FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z @ 0x1C0078570
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C01DD210 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkDestroyContextInternal @ 0x1C01DFFF0 (DxgkDestroyContextInternal.c)
 */

void __fastcall CAdapter::FreeCascadedSignalingResources(
        CAdapter *this,
        void *a2,
        D3DKMT_HANDLE a3,
        void *a4,
        struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT a5,
        D3DKMT_HANDLE a6)
{
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 )
    ObfDereferenceObject(a2);
  if ( a4 )
    ObfDereferenceObject(a4);
  if ( a3 )
  {
    v8.hSyncObject = a3;
    DxgkCddDestroySynchronizationObject(&v8);
  }
  if ( a5.hSyncObject )
    DxgkCddDestroySynchronizationObject(&a5);
  if ( a6 )
  {
    a5.hSyncObject = a6;
    DxgkDestroyContextInternal(&a5);
  }
}
