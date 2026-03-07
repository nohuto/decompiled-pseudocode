__int64 __fastcall CLinearGradientLegacyMilBrushGeneratedT<CLinearGradientLegacyMilBrush,CGradientLegacyMilBrush>::SetStartPoint(
        __int64 a1,
        __int64 a2)
{
  if ( *(double *)a2 != *(double *)(a1 + 136) || *(double *)(a2 + 8) != *(double *)(a1 + 144) )
  {
    *(_OWORD *)(a1 + 136) = *(_OWORD *)a2;
    *(_BYTE *)(a1 + 216) = 1;
  }
  return 0LL;
}
