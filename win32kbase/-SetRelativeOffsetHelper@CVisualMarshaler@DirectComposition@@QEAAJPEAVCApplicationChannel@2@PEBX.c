__int64 __fastcall DirectComposition::CVisualMarshaler::SetRelativeOffsetHelper(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        _DWORD *a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edi

  v5 = 0;
  if ( a4 == 12 )
  {
    *((_DWORD *)this + 23) = *a3;
    *((_DWORD *)this + 24) = a3[1];
    *((_DWORD *)this + 25) = a3[2];
    if ( *((_QWORD *)this + 5) )
    {
      DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 0x1Fu);
      DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 0x20u);
      DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 0x21u);
    }
    *((_DWORD *)this + 4) |= 0x1000000u;
    *a5 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
