/*
 * XREFs of Feature_2942477631__private_IsEnabledDeviceUsage @ 0x1C0130834
 * Callers:
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C011E4D4 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C011F950 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0122090 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 * Callees:
 *     Feature_2942477631__private_IsEnabledFallback @ 0x1C013086C (Feature_2942477631__private_IsEnabledFallback.c)
 */

__int64 Feature_2942477631__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2942477631__private_featureState & 0x10) != 0 )
    return Feature_2942477631__private_featureState & 1;
  else
    return Feature_2942477631__private_IsEnabledFallback((unsigned int)Feature_2942477631__private_featureState, 3LL);
}
