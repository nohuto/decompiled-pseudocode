/*
 * XREFs of Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage @ 0x1C012EC44
 * Callers:
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C01F9FE8 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C024A564 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 * Callees:
 *     Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledFallback @ 0x1C012EC7C (Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_SpuriousWakesFixPartOne__private_featureState & 0x10) != 0 )
    return Feature_Servicing_SpuriousWakesFixPartOne__private_featureState & 1;
  else
    return Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_SpuriousWakesFixPartOne__private_featureState,
             3LL);
}
