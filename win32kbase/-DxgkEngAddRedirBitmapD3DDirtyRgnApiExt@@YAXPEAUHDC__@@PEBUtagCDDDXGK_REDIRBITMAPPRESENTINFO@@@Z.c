void __fastcall DxgkEngAddRedirBitmapD3DDirtyRgnApiExt(HDC a1, const struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *a2)
{
  if ( qword_1C02D56B0 && (int)qword_1C02D56B0() >= 0 )
  {
    if ( qword_1C02D56B8 )
      qword_1C02D56B8(a1, a2);
  }
}
