/*
 * XREFs of Feature_3160330556__private_IsEnabledDeviceUsage @ 0x1C00DE090
 * Callers:
 *     GreValidateVisrgn @ 0x1C004145C (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C0041580 (GreSetDCOwnerEx.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004592C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00DDFD0 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00DE014 (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00DE7E0 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C0199130 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     Feature_3160330556__private_IsEnabledFallback @ 0x1C00DE0C8 (Feature_3160330556__private_IsEnabledFallback.c)
 */

__int64 Feature_3160330556__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3160330556__private_featureState & 0x10) != 0 )
    return Feature_3160330556__private_featureState & 1;
  else
    return Feature_3160330556__private_IsEnabledFallback((unsigned int)Feature_3160330556__private_featureState, 3LL);
}
