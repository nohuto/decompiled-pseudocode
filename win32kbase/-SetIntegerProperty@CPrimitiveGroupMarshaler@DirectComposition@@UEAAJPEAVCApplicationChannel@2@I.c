__int64 __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetIntegerProperty(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  __int64 result; // rax
  int v6; // r8d

  result = 0LL;
  *a5 = 0;
  v6 = a3 - 3;
  if ( !v6 )
  {
    if ( *((_QWORD *)this + 8) == a4 )
      return result;
    *((_QWORD *)this + 8) = a4;
    goto LABEL_4;
  }
  if ( v6 != 1 )
    return 3221225485LL;
  if ( *((_QWORD *)this + 9) != a4 )
  {
    *((_QWORD *)this + 9) = a4;
LABEL_4:
    *((_DWORD *)this + 4) &= ~0x20u;
    *a5 = 1;
  }
  return result;
}
