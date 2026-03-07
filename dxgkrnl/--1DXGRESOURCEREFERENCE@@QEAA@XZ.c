void __fastcall DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(struct _EX_RUNDOWN_REF **this)
{
  struct _EX_RUNDOWN_REF *v1; // rcx
  __int64 v2; // rcx

  v1 = *this;
  if ( v1 )
    ExReleaseRundownProtection(v1 + 9);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) && DXGTHREAD::GetCurrent() )
  {
    v2 = *((int *)DXGTHREAD::GetCurrent() + 12);
    if ( (_DWORD)v2 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v2, 0LL, 0LL);
  }
}
