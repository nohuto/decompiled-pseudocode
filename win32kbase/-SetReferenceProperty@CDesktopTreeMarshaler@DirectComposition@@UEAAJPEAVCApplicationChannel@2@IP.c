__int64 __fastcall DirectComposition::CDesktopTreeMarshaler::SetReferenceProperty(
        DirectComposition::CDesktopTreeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // edi
  __int64 v9; // rax
  DirectComposition::CResourceMarshaler *v10; // rbx
  DirectComposition::CDesktopTreeMarshaler *v11; // rax

  v5 = 0;
  if ( a3 != 1 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    v9 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a4 + 168LL))(a4);
    v10 = (DirectComposition::CResourceMarshaler *)v9;
    if ( v9 )
    {
      v11 = *(DirectComposition::CDesktopTreeMarshaler **)(v9 + 192);
      if ( v11 && v11 != this )
        return (unsigned int)-1073741811;
      goto LABEL_5;
    }
  }
  else
  {
    v10 = 0LL;
  }
  if ( a4 )
    return (unsigned int)-1073741811;
LABEL_5:
  if ( v10 != *((DirectComposition::CResourceMarshaler **)this + 8) )
  {
    if ( v10 )
    {
      DirectComposition::CResourceMarshaler::AddRef(v10);
      *((_QWORD *)v10 + 24) = this;
    }
    DirectComposition::CDesktopTreeMarshaler::ReleaseRootVisual(this, a2);
    *((_DWORD *)this + 4) |= 0x40u;
    *((_QWORD *)this + 8) = v10;
    *a5 = 1;
  }
  return v5;
}
