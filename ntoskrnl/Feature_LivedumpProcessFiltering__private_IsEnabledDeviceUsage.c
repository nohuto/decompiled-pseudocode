/*
 * XREFs of Feature_LivedumpProcessFiltering__private_IsEnabledDeviceUsage @ 0x140409F20
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x140539CE8 (DbgkCaptureLiveKernelDump.c)
 *     IoCaptureLiveDump @ 0x140948A78 (IoCaptureLiveDump.c)
 * Callees:
 *     Feature_LivedumpProcessFiltering__private_IsEnabledFallback @ 0x140409F58 (Feature_LivedumpProcessFiltering__private_IsEnabledFallback.c)
 */

__int64 Feature_LivedumpProcessFiltering__private_IsEnabledDeviceUsage()
{
  if ( (Feature_LivedumpProcessFiltering__private_featureState & 0x10) != 0 )
    return Feature_LivedumpProcessFiltering__private_featureState & 1;
  else
    return Feature_LivedumpProcessFiltering__private_IsEnabledFallback(
             (unsigned int)Feature_LivedumpProcessFiltering__private_featureState,
             3LL);
}
