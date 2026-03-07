__int64 __fastcall DirectComposition::CViewBoxMarshaler::SetBufferProperty(
        DirectComposition::CViewBoxMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  __int64 v7; // xmm0_8
  __int64 v8; // xmm0_8

  result = 0LL;
  *a6 = 0;
  if ( a3 )
  {
    if ( a3 == 1 && a4 && a5 == 8 )
    {
      v7 = *a4;
      *((_DWORD *)this + 4) |= 0x40u;
      *((_QWORD *)this + 8) = v7;
LABEL_9:
      *a6 = 1;
      return result;
    }
  }
  else if ( a4 && a5 == 8 )
  {
    v8 = *a4;
    *((_DWORD *)this + 4) |= 0x20u;
    *((_QWORD *)this + 7) = v8;
    goto LABEL_9;
  }
  return 3221225485LL;
}
