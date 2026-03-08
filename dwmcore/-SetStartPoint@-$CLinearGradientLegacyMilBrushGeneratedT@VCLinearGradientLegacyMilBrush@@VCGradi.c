/*
 * XREFs of ?SetStartPoint@?$CLinearGradientLegacyMilBrushGeneratedT@VCLinearGradientLegacyMilBrush@@VCGradientLegacyMilBrush@@@@QEAAJUMilPoint2D@@@Z @ 0x1801C69AC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

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
