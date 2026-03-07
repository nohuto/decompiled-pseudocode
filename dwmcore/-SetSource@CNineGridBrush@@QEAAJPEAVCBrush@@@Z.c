__int64 __fastcall CNineGridBrush::SetSource(struct CResource **this, struct CBrush *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct CResource *v7; // rax

  if ( a2 != this[11] )
  {
    if ( a2 )
    {
      v4 = CResource::RegisterNotifier((CResource *)this, a2);
      v6 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x178u, 0LL);
        return v6;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
    v7 = *this;
    this[11] = a2;
    (*((void (__fastcall **)(struct CResource **, __int64))v7 + 9))(this, 14LL);
  }
  return 0;
}
