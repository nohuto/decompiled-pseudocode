__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeStyle(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKESTYLE *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( *((_QWORD *)this + 23) != *((_QWORD *)a3 + 1)
    || *((_DWORD *)this + 48) != *((_DWORD *)a3 + 4)
    || *((_DWORD *)this + 49) != *((_DWORD *)a3 + 5) )
  {
    *((_DWORD *)this + 46) = *((_DWORD *)a3 + 2);
    *((_DWORD *)this + 47) = *((_DWORD *)a3 + 3);
    *((_DWORD *)this + 48) = *((_DWORD *)a3 + 4);
    *((_DWORD *)this + 49) = *((_DWORD *)a3 + 5);
    v4 = *((_QWORD *)this + 16);
    if ( v4 )
    {
      *((_QWORD *)this + 16) = 0LL;
      (*(void (__fastcall **)(__int64, struct CResourceTable *))(*(_QWORD *)v4 + 16LL))(v4, a2);
    }
    v5 = *((_QWORD *)this + 17);
    if ( v5 )
    {
      *((_QWORD *)this + 17) = 0LL;
      (*(void (__fastcall **)(__int64, struct CResourceTable *))(*(_QWORD *)v5 + 16LL))(v5, a2);
    }
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
  return 0LL;
}
