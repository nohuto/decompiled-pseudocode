/*
 * XREFs of RtlpFcConfigurationTypeToBufferType @ 0x1409C0220
 * Callers:
 *     RtlQueryAllInternalFeatureConfigurations @ 0x14040BAE0 (RtlQueryAllInternalFeatureConfigurations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcConfigurationTypeToBufferType(int a1)
{
  int v2; // [rsp+10h] [rbp+10h]
  int v3; // [rsp+14h] [rbp+14h]

  v2 = 0;
  v3 = 1;
  return (unsigned int)*(&v2 + a1);
}
