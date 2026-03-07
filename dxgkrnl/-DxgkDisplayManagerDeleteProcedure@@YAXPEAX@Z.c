void __fastcall DxgkDisplayManagerDeleteProcedure(ReferenceCounted **a1)
{
  DXGDISPLAYMANAGEROBJECT *v2; // rcx
  ReferenceCounted *v3; // rcx

  v2 = *a1;
  if ( v2 )
  {
    DXGDISPLAYMANAGEROBJECT::Invalidate(v2);
    ReferenceCounted::Release(*a1);
    *a1 = 0LL;
  }
  v3 = a1[1];
  if ( v3 )
  {
    (**(void (__fastcall ***)(ReferenceCounted *, __int64))v3)(v3, 1LL);
    a1[1] = 0LL;
  }
}
