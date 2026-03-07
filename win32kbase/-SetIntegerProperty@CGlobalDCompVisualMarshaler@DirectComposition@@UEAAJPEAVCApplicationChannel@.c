__int64 __fastcall DirectComposition::CGlobalDCompVisualMarshaler::SetIntegerProperty(
        DirectComposition::CGlobalDCompVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 )
    return 3221225485LL;
  if ( *((_QWORD *)this + 7) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_QWORD *)this + 7) = a4;
    *a5 = 1;
  }
  return result;
}
