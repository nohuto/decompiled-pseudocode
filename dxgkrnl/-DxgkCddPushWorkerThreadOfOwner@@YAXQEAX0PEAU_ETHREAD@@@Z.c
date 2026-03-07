void __fastcall DxgkCddPushWorkerThreadOfOwner(PERESOURCE *a1, PERESOURCE *a2, struct _ERESOURCE *a3)
{
  if ( a1 )
    DXGADAPTER::PushWorkerThreadOfExclusiveOwner(a1, a3);
  if ( a2 )
  {
    if ( a1 != a2 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner(a2, a3);
  }
}
