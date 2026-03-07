void __fastcall DXGALLOCATIONREFERENCE::AssignNull(struct _EX_RUNDOWN_REF **this)
{
  struct _EX_RUNDOWN_REF *v2; // rcx

  v2 = *this;
  if ( v2 )
    ExReleaseRundownProtection(v2 + 11);
  *this = 0LL;
}
