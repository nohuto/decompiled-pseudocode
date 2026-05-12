/*
 * XREFs of Feature_547412282__private_IsEnabledDeviceUsage @ 0x1C001D6DC
 * Callers:
 *     RaidGetSrbIoctlFromIrp @ 0x1C0006448 (RaidGetSrbIoctlFromIrp.c)
 * Callees:
 *     Feature_547412282__private_IsEnabledFallback @ 0x1C001D714 (Feature_547412282__private_IsEnabledFallback.c)
 */

__int64 Feature_547412282__private_IsEnabledDeviceUsage()
{
  if ( (Feature_547412282__private_featureState & 0x10) != 0 )
    return Feature_547412282__private_featureState & 1;
  else
    return Feature_547412282__private_IsEnabledFallback((unsigned int)Feature_547412282__private_featureState, 3LL);
}
