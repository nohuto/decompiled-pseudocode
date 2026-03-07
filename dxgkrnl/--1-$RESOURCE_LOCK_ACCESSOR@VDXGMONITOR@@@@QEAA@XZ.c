void __fastcall RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>(__int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
  {
    ExReleaseResourceLite((PERESOURCE)(v1 + 24));
    KeLeaveCriticalRegion();
  }
}
