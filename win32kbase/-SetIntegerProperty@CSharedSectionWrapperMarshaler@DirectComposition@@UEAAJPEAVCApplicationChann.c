__int64 __fastcall DirectComposition::CSharedSectionWrapperMarshaler::SetIntegerProperty(
        DirectComposition::CSharedSectionWrapperMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax
  int v6; // r8d

  result = 0LL;
  *a5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    if ( v6 != 1 )
      return 3221225485LL;
    *((_DWORD *)this + 17) = a4;
  }
  else
  {
    *((_DWORD *)this + 16) = a4;
  }
  *((_DWORD *)this + 4) &= ~0x20u;
  *a5 = 1;
  return result;
}
