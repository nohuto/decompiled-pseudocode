__int64 __fastcall DirectComposition::CVisualMarshaler::RemoveChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        bool *a4)
{
  unsigned int v4; // esi
  _QWORD *i; // rcx
  __int64 v10; // rax

  v4 = 0;
  if ( *((DirectComposition::CVisualMarshaler **)a3 + 24) == this )
  {
    for ( i = (_QWORD *)((char *)this + 176);
          (struct DirectComposition::CVisualMarshaler *)*i != a3;
          i = (_QWORD *)(*i + 184LL) )
    {
      ;
    }
    *i = *((_QWORD *)a3 + 23);
    v10 = *(_QWORD *)a3;
    *((_QWORD *)a3 + 23) = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CVisualMarshaler *))(v10 + 312))(a3) )
    {
      *((_DWORD *)a3 + 4) |= 8u;
      *((_QWORD *)a3 + 26) = *((_QWORD *)this + 25);
      *((_QWORD *)this + 25) = a3;
      *a4 = 1;
    }
    else
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, a3);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
