void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  __int64 v2; // rdx
  __int64 v4; // rcx

  HmgDecrementShareReferenceCountEx(this, 0LL);
  if ( (*((_DWORD *)this + 42))-- == 1 )
  {
    if ( (*(_DWORD *)this & 0x800000) != 0 )
    {
      if ( _bittest16((const signed __int16 *)this + 51, 0xAu) )
      {
        v4 = *(_QWORD *)this;
        *((_WORD *)this + 51) &= ~0x400u;
        GreMakeBitmapNonStock(v4, v2);
      }
    }
    *((_QWORD *)this + 20) = 0LL;
  }
}
