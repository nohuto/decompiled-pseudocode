bool __fastcall CLinearGradientLegacyMilBrushGeneratedT<CLinearGradientLegacyMilBrush,CGradientLegacyMilBrush>::IsOfType(
        __int64 a1,
        int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  bool result; // al

  v2 = a2 - 74;
  result = 0;
  if ( v2 <= 0x1A )
  {
    v3 = 69206017;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
