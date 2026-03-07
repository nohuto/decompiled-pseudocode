void __fastcall XEPALOBJ::vUnrefPalette(struct OBJECT **this)
{
  struct OBJECT *v2; // rdi
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]

  if ( *this
    && ((*((_DWORD *)*this + 6) & 0x5000000) == 0x1000000
     || !(unsigned int)XEPALOBJ::bDeletePaletteInternal((XEPALOBJ *)this, 0)) )
  {
    v2 = *this;
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v3, *this, 0, 0, 1);
    if ( v4 )
    {
      TrackHmgrReferenceDecrement(*(_BYTE *)(v3 + 14), v2);
      --*((_DWORD *)v2 + 2);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
      if ( v4 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
    }
    *this = 0LL;
  }
}
