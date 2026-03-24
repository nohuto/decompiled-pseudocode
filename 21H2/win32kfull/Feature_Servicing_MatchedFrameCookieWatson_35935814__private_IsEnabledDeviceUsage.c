/*
 * XREFs of Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabledDeviceUsage @ 0x1C016AE34
 * Callers:
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C00A51A8 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 * Callees:
 *     Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabledFallback @ 0x1C016AE6C (Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_MatchedFrameCookieWatson_35935814__private_featureState & 0x10) != 0 )
    return Feature_Servicing_MatchedFrameCookieWatson_35935814__private_featureState & 1;
  else
    return Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_MatchedFrameCookieWatson_35935814__private_featureState,
             3LL);
}
