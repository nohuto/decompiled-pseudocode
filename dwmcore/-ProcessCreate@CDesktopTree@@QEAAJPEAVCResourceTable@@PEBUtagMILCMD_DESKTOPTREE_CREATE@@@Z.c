__int64 __fastcall CDesktopTree::ProcessCreate(CDesktopTree *this, struct CResourceTable *a2, struct _LUID *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx

  v3 = 0;
  if ( (int)CDesktopTree::SetLuid(this, a3[1]) < 0 )
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2003303421, 0x47u, 0LL);
  }
  return v3;
}
