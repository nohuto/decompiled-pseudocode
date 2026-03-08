/*
 * XREFs of Feature_Servicing_MSRC86686AppCompatRegression__private_IsEnabledDeviceUsage @ 0x1C0130888
 * Callers:
 *     ?ValidateGlyphDataAndBitmap@@YA_NJPEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAX@Z @ 0x1C013077C (-ValidateGlyphDataAndBitmap@@YA_NJPEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAX@Z.c)
 * Callees:
 *     Feature_Servicing_MSRC86686AppCompatRegression__private_IsEnabledFallback @ 0x1C01308C0 (Feature_Servicing_MSRC86686AppCompatRegression__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_MSRC86686AppCompatRegression__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_MSRC86686AppCompatRegression__private_featureState & 0x10) != 0 )
    return Feature_Servicing_MSRC86686AppCompatRegression__private_featureState & 1;
  else
    return Feature_Servicing_MSRC86686AppCompatRegression__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_MSRC86686AppCompatRegression__private_featureState,
             3LL);
}
