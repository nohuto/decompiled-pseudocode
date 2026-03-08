/*
 * XREFs of ?Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z @ 0x18027C40C
 * Callers:
 *     ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x1800AB078 (-ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SE.c)
 * Callees:
 *     <none>
 */

void __fastcall Convert_MilColorB_sRGB_To_MilColorF_scRGB(unsigned int a1, struct _D3DCOLORVALUE *a2)
{
  a2->a = (float)HIBYTE(a1) / 255.0;
  a2->r = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a1] / 255.0;
  a2->g = GammaLUT_sRGB_to_scRGB[BYTE1(a1)] / 255.0;
  a2->b = GammaLUT_sRGB_to_scRGB[BYTE2(a1)] / 255.0;
}
