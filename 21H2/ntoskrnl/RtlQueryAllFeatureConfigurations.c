/*
 * XREFs of RtlQueryAllFeatureConfigurations @ 0x140918FB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcValidateFeatureConfigurationType @ 0x14038C900 (RtlpFcValidateFeatureConfigurationType.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A6968 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A6D4C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBuffers @ 0x14091A26C (RtlpFcQueryAllFeatureConfigurationsFromBuffers.c)
 */

__int64 __fastcall RtlQueryAllFeatureConfigurations(int a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbp
  int v8; // eax
  __int64 v9; // rsi
  int AllFeatureConfigurationsFromBuffers; // ebx
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+28h] [rbp-20h] BYREF

  v13[0] = 0LL;
  v12 = 0LL;
  v6 = a1;
  RtlpFcBufferManagerReferenceBuffers((__int64)qword_140C48150, (__int64)v13, &v12);
  v8 = RtlpFcValidateFeatureConfigurationType(v6);
  v9 = v12;
  AllFeatureConfigurationsFromBuffers = v8;
  if ( v8 >= 0 )
  {
    v12 = 0x100000000LL;
    AllFeatureConfigurationsFromBuffers = RtlpFcQueryAllFeatureConfigurationsFromBuffers(
                                            v9 + 24LL * *((unsigned int *)&v13[-1] + v6),
                                            a3,
                                            a4);
  }
  if ( AllFeatureConfigurationsFromBuffers >= 0 )
  {
    if ( a2 )
      *a2 = v13[0];
    AllFeatureConfigurationsFromBuffers = 0;
  }
  RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C48150, v9);
  return (unsigned int)AllFeatureConfigurationsFromBuffers;
}
