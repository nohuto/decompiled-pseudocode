/*
 * XREFs of Feature_2356201784__private_IsEnabledDeviceUsage @ 0x1C016CFCC
 * Callers:
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02B1668 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B3540 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B3980 (NtGdiEngStrokePath.c)
 * Callees:
 *     Feature_2356201784__private_IsEnabledFallback @ 0x1C016D004 (Feature_2356201784__private_IsEnabledFallback.c)
 */

__int64 Feature_2356201784__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2356201784__private_featureState & 0x10) != 0 )
    return Feature_2356201784__private_featureState & 1;
  else
    return Feature_2356201784__private_IsEnabledFallback((unsigned int)Feature_2356201784__private_featureState, 3LL);
}
