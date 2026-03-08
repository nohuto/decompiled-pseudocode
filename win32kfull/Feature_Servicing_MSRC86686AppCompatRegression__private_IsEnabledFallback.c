/*
 * XREFs of Feature_Servicing_MSRC86686AppCompatRegression__private_IsEnabledFallback @ 0x1C01308C0
 * Callers:
 *     Feature_Servicing_MSRC86686AppCompatRegression__private_IsEnabledDeviceUsage @ 0x1C0130888 (Feature_Servicing_MSRC86686AppCompatRegression__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C012CF68 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_MSRC86686AppCompatRegression__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_MSRC86686AppCompatRegression__private_descriptor);
}
