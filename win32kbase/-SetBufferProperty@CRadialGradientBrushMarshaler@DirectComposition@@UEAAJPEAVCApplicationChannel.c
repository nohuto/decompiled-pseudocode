__int64 __fastcall DirectComposition::CRadialGradientBrushMarshaler::SetBufferProperty(
        DirectComposition::CRadialGradientBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  int v7; // r8d
  int v8; // r8d
  __int64 v9; // xmm0_8
  __int64 v10; // xmm0_8
  __int64 v11; // xmm0_8

  result = 0LL;
  *a6 = 0;
  v7 = a3 - 5;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 && a4 && a5 == 8 )
      {
        v9 = *a4;
        *((_DWORD *)this + 4) |= 0x1000u;
        *((_QWORD *)this + 16) = v9;
LABEL_13:
        *a6 = 1;
        return result;
      }
    }
    else if ( a4 && a5 == 8 )
    {
      v10 = *a4;
      *((_DWORD *)this + 4) |= 0x800u;
      *((_QWORD *)this + 15) = v10;
      goto LABEL_13;
    }
  }
  else if ( a4 && a5 == 8 )
  {
    v11 = *a4;
    *((_DWORD *)this + 4) |= 0x400u;
    *((_QWORD *)this + 14) = v11;
    goto LABEL_13;
  }
  return 3221225485LL;
}
