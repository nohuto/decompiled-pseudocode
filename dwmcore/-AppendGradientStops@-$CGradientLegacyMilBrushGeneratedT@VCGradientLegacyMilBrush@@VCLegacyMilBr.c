/*
 * XREFs of ?AppendGradientStops@?$CGradientLegacyMilBrushGeneratedT@VCGradientLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJAEBV?$span@$$CBUMilGradientStop@@$0?0@gsl@@@Z @ 0x1801C0CC8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGradientLegacyMilBrushGeneratedT<CGradientLegacyMilBrush,CLegacyMilBrush>::AppendGradientStops(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  LOBYTE(a3) = 1;
  return CGradientLegacyMilBrushGeneratedT<CGradientLegacyMilBrush,CLegacyMilBrush>::SetOrAppendGradientStops(
           a1,
           a2,
           a3);
}
