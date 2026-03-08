/*
 * XREFs of Feature_AggregateUserCritTelemetryPerSecond__private_IsEnabledDeviceUsage @ 0x1C00DDDFC
 * Callers:
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 * Callees:
 *     Feature_AggregateUserCritTelemetryPerSecond__private_IsEnabledFallback @ 0x1C00DDE34 (Feature_AggregateUserCritTelemetryPerSecond__private_IsEnabledFallback.c)
 */

__int64 Feature_AggregateUserCritTelemetryPerSecond__private_IsEnabledDeviceUsage()
{
  if ( (Feature_AggregateUserCritTelemetryPerSecond__private_featureState & 0x10) != 0 )
    return Feature_AggregateUserCritTelemetryPerSecond__private_featureState & 1;
  else
    return Feature_AggregateUserCritTelemetryPerSecond__private_IsEnabledFallback(
             (unsigned int)Feature_AggregateUserCritTelemetryPerSecond__private_featureState,
             3LL);
}
