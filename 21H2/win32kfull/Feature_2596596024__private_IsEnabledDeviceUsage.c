/*
 * XREFs of Feature_2596596024__private_IsEnabledDeviceUsage @ 0x1C016A5B8
 * Callers:
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C016A1E8 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     NtGdiEngLineTo @ 0x1C02B3520 (NtGdiEngLineTo.c)
 * Callees:
 *     Feature_2596596024__private_IsEnabledFallback @ 0x1C016A5F0 (Feature_2596596024__private_IsEnabledFallback.c)
 */

__int64 Feature_2596596024__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2596596024__private_featureState & 0x10) != 0 )
    return Feature_2596596024__private_featureState & 1;
  else
    return Feature_2596596024__private_IsEnabledFallback((unsigned int)Feature_2596596024__private_featureState, 3LL);
}
