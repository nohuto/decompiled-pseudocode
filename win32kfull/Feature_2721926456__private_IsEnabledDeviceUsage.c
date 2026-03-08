/*
 * XREFs of Feature_2721926456__private_IsEnabledDeviceUsage @ 0x1C01308DC
 * Callers:
 *     ?bSrcCopySRLE4D1@@YAHPEAUBLTINFO@@@Z @ 0x1C02F1360 (-bSrcCopySRLE4D1@@YAHPEAUBLTINFO@@@Z.c)
 *     ?bSrcCopySRLE4D4@@YAHPEAUBLTINFO@@@Z @ 0x1C02F22C0 (-bSrcCopySRLE4D4@@YAHPEAUBLTINFO@@@Z.c)
 * Callees:
 *     Feature_2721926456__private_IsEnabledFallback @ 0x1C0130914 (Feature_2721926456__private_IsEnabledFallback.c)
 */

__int64 Feature_2721926456__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2721926456__private_featureState & 0x10) != 0 )
    return Feature_2721926456__private_featureState & 1;
  else
    return Feature_2721926456__private_IsEnabledFallback((unsigned int)Feature_2721926456__private_featureState, 3LL);
}
