__int64 __fastcall CDesktopTree::ProcessSetRoot(
        CDesktopTree *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DESKTOPTREE_SETROOT *a3)
{
  struct CVisual *Resource; // rax
  unsigned int v5; // edx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 && (Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, v5, 0xC4u)) == 0LL )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x5Bu, 0LL);
  }
  else
  {
    v8 = CDesktopTree::SetRootVisual(this, Resource);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x5Fu, 0LL);
  }
  return v10;
}
