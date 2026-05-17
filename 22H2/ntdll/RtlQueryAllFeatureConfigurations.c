/*
 * XREFs of RtlQueryAllFeatureConfigurations @ 0x180101A50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18005E044 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18005E17C (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBufferSet @ 0x18011B364 (RtlpFcQueryAllFeatureConfigurationsFromBufferSet.c)
 */

__int64 __fastcall RtlQueryAllFeatureConfigurations(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r15d
  int AllFeatureConfigurationsFromBufferSet; // ebx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF

  v10 = 0LL;
  v7 = a1;
  AllFeatureConfigurationsFromBufferSet = RtlpFcReferenceFeatureConfigurationBuffers(a1, 1, &v11, &v10);
  if ( AllFeatureConfigurationsFromBufferSet >= 0 )
  {
    AllFeatureConfigurationsFromBufferSet = RtlpFcQueryAllFeatureConfigurationsFromBufferSet(v10, v7, a3, a4);
    if ( AllFeatureConfigurationsFromBufferSet >= 0 )
    {
      if ( a2 )
        *a2 = v11;
      AllFeatureConfigurationsFromBufferSet = 0;
    }
  }
  if ( v10 )
    RtlpFcBufferManagerDereferenceBuffers(qword_18016AB48, v10);
  return (unsigned int)AllFeatureConfigurationsFromBufferSet;
}
