/*
 * XREFs of Feature_2020657467__private_IsEnabledDeviceUsage @ 0x1C014054C
 * Callers:
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02C791C (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CB750 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CBBC0 (NtGdiEngStrokePath.c)
 * Callees:
 *     Feature_2020657467__private_IsEnabledFallback @ 0x1C0140584 (Feature_2020657467__private_IsEnabledFallback.c)
 */

__int64 Feature_2020657467__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2020657467__private_featureState & 0x10) != 0 )
    return Feature_2020657467__private_featureState & 1;
  else
    return Feature_2020657467__private_IsEnabledFallback((unsigned int)Feature_2020657467__private_featureState, 3LL);
}
