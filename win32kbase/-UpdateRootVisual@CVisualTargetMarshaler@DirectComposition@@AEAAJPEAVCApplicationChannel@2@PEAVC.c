__int64 __fastcall DirectComposition::CVisualTargetMarshaler::UpdateRootVisual(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        bool *a4)
{
  unsigned int v4; // edi
  __int64 v9; // rcx

  v4 = 0;
  if ( a3 )
  {
    if ( *((_QWORD *)a3 + 24) )
      return (unsigned int)-1073741811;
    DirectComposition::CResourceMarshaler::AddRef(a3);
    *((_QWORD *)a3 + 24) = this;
  }
  v9 = *((_QWORD *)this + 8);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, struct DirectComposition::CApplicationChannel *))(*(_QWORD *)v9 + 312LL))(v9, a2);
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *((struct DirectComposition::CResourceMarshaler **)this + 8));
  }
  *((_DWORD *)this + 4) |= 0x20u;
  *((_QWORD *)this + 8) = a3;
  *a4 = 1;
  return v4;
}
