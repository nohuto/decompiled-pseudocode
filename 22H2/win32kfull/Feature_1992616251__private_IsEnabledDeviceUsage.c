/*
 * XREFs of Feature_1992616251__private_IsEnabledDeviceUsage @ 0x1C013E3DC
 * Callers:
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C013E108 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     NtGdiEngLineTo @ 0x1C02CA140 (NtGdiEngLineTo.c)
 * Callees:
 *     Feature_1992616251__private_IsEnabledFallback @ 0x1C013E414 (Feature_1992616251__private_IsEnabledFallback.c)
 */

__int64 Feature_1992616251__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1992616251__private_featureState & 0x10) != 0 )
    return Feature_1992616251__private_featureState & 1;
  else
    return Feature_1992616251__private_IsEnabledFallback((unsigned int)Feature_1992616251__private_featureState, 3LL);
}
