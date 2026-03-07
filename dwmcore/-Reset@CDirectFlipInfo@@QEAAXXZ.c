void __fastcall CDirectFlipInfo::Reset(CDirectFlipInfo *this)
{
  int v2; // ecx
  int v3; // ecx
  __int64 v4; // rcx

  v2 = *((_DWORD *)this + 12) - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        goto LABEL_4;
      CDirectFlipInfo::Deactivate(this);
    }
  }
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v4 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  std::shared_ptr<CRegion>::reset((char *)this + 32);
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_BYTE *)this + 120) = 0;
  *((_WORD *)this + 61) = 256;
  *((_BYTE *)this + 124) = 0;
LABEL_4:
  *((_DWORD *)this + 12) = 0;
}
