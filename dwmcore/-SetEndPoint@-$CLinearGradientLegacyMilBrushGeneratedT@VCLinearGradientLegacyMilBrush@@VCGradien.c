__int64 __fastcall CLinearGradientLegacyMilBrushGeneratedT<CLinearGradientLegacyMilBrush,CGradientLegacyMilBrush>::SetEndPoint(
        __int64 a1,
        __int64 a2)
{
  if ( *(double *)a2 != *(double *)(a1 + 152) || *(double *)(a2 + 8) != *(double *)(a1 + 160) )
  {
    *(_OWORD *)(a1 + 152) = *(_OWORD *)a2;
    *(_BYTE *)(a1 + 216) = 1;
  }
  return 0LL;
}
