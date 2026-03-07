__int64 __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 1 && Size == 16 )
  {
    memmove((char *)this + 72, a4, 0x10uLL);
    *((_DWORD *)this + 4) |= 0x80u;
    *a6 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
