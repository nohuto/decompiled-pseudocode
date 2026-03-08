/*
 * XREFs of Feature_3160330556__private_IsEnabledDeviceUsage @ 0x1C012FB20
 * Callers:
 *     GreGetRandomRgn @ 0x1C0125C40 (GreGetRandomRgn.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C012F8A4 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C012F8E8 (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C0130930 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 * Callees:
 *     Feature_3160330556__private_IsEnabledFallback @ 0x1C012FB58 (Feature_3160330556__private_IsEnabledFallback.c)
 */

__int64 Feature_3160330556__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3160330556__private_featureState & 0x10) != 0 )
    return Feature_3160330556__private_featureState & 1;
  else
    return Feature_3160330556__private_IsEnabledFallback((unsigned int)Feature_3160330556__private_featureState, 3LL);
}
