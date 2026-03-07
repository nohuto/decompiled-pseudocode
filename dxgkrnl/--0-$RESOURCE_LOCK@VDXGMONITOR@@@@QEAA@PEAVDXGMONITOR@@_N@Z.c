_QWORD *__fastcall RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(_QWORD *a1, __int64 a2, char a3)
{
  struct _ERESOURCE *v4; // rdi

  *a1 = a2;
  if ( a2 )
  {
    v4 = (struct _ERESOURCE *)(a2 + 24);
    if ( a3 == 1 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v4, 1u);
    }
    else
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v4, 1u);
    }
  }
  return a1;
}
