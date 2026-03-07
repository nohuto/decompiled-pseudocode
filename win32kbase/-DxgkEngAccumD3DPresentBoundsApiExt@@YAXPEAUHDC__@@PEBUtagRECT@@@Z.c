void __fastcall DxgkEngAccumD3DPresentBoundsApiExt(HDC a1, const struct tagRECT *a2)
{
  if ( qword_1C02D56C0 && (int)qword_1C02D56C0() >= 0 )
  {
    if ( qword_1C02D56C8 )
      qword_1C02D56C8(a1, a2);
  }
}
