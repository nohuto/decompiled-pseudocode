void __fastcall `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx

  v1 = *a1;
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 17, 0xFFFFFFFF) == 1 )
      DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v1, 0LL, 0);
  }
}
