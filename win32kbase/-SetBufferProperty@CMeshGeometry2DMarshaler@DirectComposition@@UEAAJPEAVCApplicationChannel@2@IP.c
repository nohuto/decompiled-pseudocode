__int64 __fastcall DirectComposition::CMeshGeometry2DMarshaler::SetBufferProperty(
        DirectComposition::CMeshGeometry2DMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v7; // r8d
  int v8; // r8d
  __int64 result; // rax

  *a6 = 0;
  v7 = a3 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 && (a4 || !a5) )
      {
        result = DirectComposition::CMarshaledArrayBase::Copy(
                   (DirectComposition::CMeshGeometry2DMarshaler *)((char *)this + 112),
                   a4,
                   a5,
                   4uLL,
                   0x676D4344u);
        if ( (int)result >= 0 )
        {
          *a6 = 1;
          *((_DWORD *)this + 4) |= 0x100u;
        }
        return result;
      }
      return 3221225485LL;
    }
    if ( !a4 && a5 )
      return 3221225485LL;
    result = DirectComposition::CMarshaledArrayBase::Copy(
               (DirectComposition::CMeshGeometry2DMarshaler *)((char *)this + 88),
               a4,
               a5,
               0x10uLL,
               0x676D4344u);
    if ( (int)result >= 0 )
    {
      *a6 = 1;
      *((_DWORD *)this + 4) |= 0x80u;
    }
  }
  else
  {
    if ( !a4 && a5 )
      return 3221225485LL;
    result = DirectComposition::CMarshaledArrayBase::Copy(
               (DirectComposition::CMeshGeometry2DMarshaler *)((char *)this + 64),
               a4,
               a5,
               0xCuLL,
               0x676D4344u);
    if ( (int)result >= 0 )
    {
      *a6 = 1;
      *((_DWORD *)this + 4) |= 0x40u;
    }
  }
  return result;
}
