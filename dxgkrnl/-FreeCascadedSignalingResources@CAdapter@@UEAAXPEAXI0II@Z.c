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
