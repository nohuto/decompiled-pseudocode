/*
 * XREFs of Feature_Servicing_ReportSurfaceSizeMismatch__private_IsEnabledDeviceUsage @ 0x1C00DE0E4
 * Callers:
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00EED00 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 * Callees:
 *     Feature_Servicing_ReportSurfaceSizeMismatch__private_IsEnabledFallback @ 0x1C00DE11C (Feature_Servicing_ReportSurfaceSizeMismatch__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_ReportSurfaceSizeMismatch__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_ReportSurfaceSizeMismatch__private_featureState & 0x10) != 0 )
    return Feature_Servicing_ReportSurfaceSizeMismatch__private_featureState & 1;
  else
    return Feature_Servicing_ReportSurfaceSizeMismatch__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_ReportSurfaceSizeMismatch__private_featureState,
             3LL);
}
