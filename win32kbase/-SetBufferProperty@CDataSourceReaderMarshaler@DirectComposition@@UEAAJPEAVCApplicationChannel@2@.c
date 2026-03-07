__int64 __fastcall DirectComposition::CDataSourceReaderMarshaler::SetBufferProperty(
        DirectComposition::CDataSourceReaderMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  result = 0LL;
  *a6 = 0;
  if ( a3 )
  {
    if ( a3 == 1 && a5 == 8 )
    {
      if ( *((_QWORD *)this + 8) == *a4 )
        return result;
      *((_QWORD *)this + 8) = *a4;
      goto LABEL_10;
    }
    return 3221225485LL;
  }
  if ( a5 != 8 )
    return 3221225485LL;
  if ( *((_QWORD *)this + 7) == *a4 )
    return result;
  *((_QWORD *)this + 7) = *a4;
LABEL_10:
  *((_DWORD *)this + 4) |= 0x20u;
  *a6 = 1;
  return result;
}
