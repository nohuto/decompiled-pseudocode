__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  __int128 v8; // xmm0
  __int64 v9; // rcx

  result = 0LL;
  *a6 = 0;
  if ( a3 == 2 )
  {
    if ( a5 == 8 )
    {
      v9 = *a4;
      *((_DWORD *)this + 4) |= 0x80u;
      *(_QWORD *)((char *)this + 76) = v9;
      goto LABEL_8;
    }
    return 3221225485LL;
  }
  if ( a3 != 6 || a5 != 16 )
    return 3221225485LL;
  v8 = *(_OWORD *)a4;
  *((_DWORD *)this + 4) |= 0x400u;
  *(_OWORD *)((char *)this + 60) = v8;
LABEL_8:
  *a6 = 1;
  return result;
}
