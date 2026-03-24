/*
 * XREFs of Feature_1989462328__private_IsEnabledDeviceUsage @ 0x1C016ADE0
 * Callers:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C016AAC0 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 * Callees:
 *     Feature_1989462328__private_IsEnabledFallback @ 0x1C016AE18 (Feature_1989462328__private_IsEnabledFallback.c)
 */

__int64 Feature_1989462328__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1989462328__private_featureState & 0x10) != 0 )
    return Feature_1989462328__private_featureState & 1;
  else
    return Feature_1989462328__private_IsEnabledFallback((unsigned int)Feature_1989462328__private_featureState, 3LL);
}
