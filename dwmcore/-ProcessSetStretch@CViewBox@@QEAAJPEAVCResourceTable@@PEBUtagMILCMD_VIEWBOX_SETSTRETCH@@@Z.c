__int64 __fastcall CViewBox::ProcessSetStretch(
        CViewBox *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VIEWBOX_SETSTRETCH *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 62) != v3 )
  {
    *((_DWORD *)this + 62) = v3;
    CResource::NotifyOnChanged((__int64)this, 2u, (__int64)this);
  }
  return 0LL;
}
