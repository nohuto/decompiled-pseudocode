/*
 * XREFs of RtlQueryAllInternalFeatureConfigurations @ 0x14040BAE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1402F03BC (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1402F0450 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcQueryAllInternalFeatureConfigurationsFromBuffers @ 0x14040C200 (RtlpFcQueryAllInternalFeatureConfigurationsFromBuffers.c)
 *     RtlpFcGetBufferManager @ 0x1407822AC (RtlpFcGetBufferManager.c)
 *     RtlpFcConfigurationTypeToBufferType @ 0x1409C0220 (RtlpFcConfigurationTypeToBufferType.c)
 */

__int64 __fastcall RtlQueryAllInternalFeatureConfigurations(unsigned int a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 BufferManager; // rsi
  __int64 v9; // r14
  int AllInternalFeatureConfigurationsFromBuffers; // ebx
  unsigned int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[4]; // [rsp+28h] [rbp-20h] BYREF

  v14[0] = 0LL;
  v13 = 0LL;
  BufferManager = RtlpFcGetBufferManager();
  RtlpFcBufferManagerReferenceBuffers(BufferManager, (__int64)v14, &v13);
  v9 = v13;
  if ( a1 < 2 )
  {
    v11 = RtlpFcConfigurationTypeToBufferType(a1);
    AllInternalFeatureConfigurationsFromBuffers = RtlpFcQueryAllInternalFeatureConfigurationsFromBuffers(
                                                    v9 + 24LL * v11,
                                                    a3,
                                                    a4);
    if ( AllInternalFeatureConfigurationsFromBuffers >= 0 )
    {
      if ( a2 )
        *a2 = v14[0];
      AllInternalFeatureConfigurationsFromBuffers = 0;
    }
  }
  else
  {
    AllInternalFeatureConfigurationsFromBuffers = -1073741811;
  }
  RtlpFcBufferManagerDereferenceBuffers(BufferManager, v9);
  return (unsigned int)AllInternalFeatureConfigurationsFromBuffers;
}
