/*
 * XREFs of RtlQueryAllFeatureConfigurations @ 0x1409B6010
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcValidateFeatureConfigurationType @ 0x1402F03A8 (RtlpFcValidateFeatureConfigurationType.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1402F03BC (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1402F0450 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x14040C1D4 (RtlpFcConvertFeatureConfigurationsInternalToExternal.c)
 */

__int64 __fastcall RtlQueryAllFeatureConfigurations(int a1, _QWORD *a2, _QWORD *a3, unsigned __int64 *a4)
{
  __int64 v6; // rbp
  int v8; // eax
  __int64 v9; // r9
  int v10; // ebx
  unsigned int *v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+28h] [rbp-10h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  v6 = a1;
  RtlpFcBufferManagerReferenceBuffers((__int64)&unk_140C13F70, (__int64)&v16, &v15);
  v8 = RtlpFcValidateFeatureConfigurationType(v6);
  v9 = v15;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v15 = 0x100000000LL;
    v11 = *(unsigned int **)(v9 + 24LL * *((unsigned int *)&v15 + v6) + 8);
    if ( v11 )
    {
      v12 = *v11;
      v13 = *a4;
      *a4 = v12;
      if ( v12 > v13 )
      {
        v10 = -2147483643;
        goto LABEL_8;
      }
      RtlpFcConvertFeatureConfigurationsInternalToExternal((__int64 *)(v11 + 1), a3, v12);
    }
    else
    {
      *a4 = 0LL;
    }
    v10 = 0;
  }
LABEL_8:
  if ( v10 >= 0 )
  {
    if ( a2 )
      *a2 = v16;
    v10 = 0;
  }
  RtlpFcBufferManagerDereferenceBuffers((__int64)&unk_140C13F70, v9);
  return (unsigned int)v10;
}
