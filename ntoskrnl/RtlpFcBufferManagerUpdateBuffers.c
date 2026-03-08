/*
 * XREFs of RtlpFcBufferManagerUpdateBuffers @ 0x14081811C
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140A2416C (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140A24640 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A24A68 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B53284 (CmFcManagerStartRuntimePhase.c)
 *     CmFcManagerStartBootPhase @ 0x140B537D8 (CmFcManagerStartBootPhase.c)
 * Callees:
 *     RtlpFcInitializeBuffers @ 0x14030305C (RtlpFcInitializeBuffers.c)
 *     RtlUpdateSwapReference @ 0x140818560 (RtlUpdateSwapReference.c)
 */

void *__fastcall RtlpFcBufferManagerUpdateBuffers(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r9
  _QWORD *v9; // rsi
  char *v10; // rax
  char *v11; // rcx

  v4 = *a1 & 1LL;
  v6 = (unsigned int)v4;
  v7 = 3LL;
  v8 = ((_BYTE)v4 - 1) & 1;
  v9 = &a1[9 * v4];
  v10 = (char *)v9 - a3 + 24;
  v11 = (char *)&a1[8 * v8 + 3 + v8] - a3;
  do
  {
    if ( *(_QWORD *)a3 )
    {
      *(_OWORD *)&v11[a3] = *(_OWORD *)a3;
      *(_QWORD *)&v11[a3 + 16] = *(_QWORD *)(a3 + 16);
      *(_OWORD *)a3 = *(_OWORD *)&v10[a3];
      *(_QWORD *)(a3 + 16) = *(_QWORD *)&v10[a3 + 16];
    }
    else
    {
      *(_OWORD *)&v11[a3] = *(_OWORD *)&v10[a3];
      *(_QWORD *)&v11[a3 + 16] = *(_QWORD *)&v10[a3 + 16];
    }
    a3 += 24LL;
    --v7;
  }
  while ( v7 );
  a1[v8 + 21] = a2;
  RtlUpdateSwapReference(a1, (unsigned int)v8, a3);
  a1[v6 + 21] = 0LL;
  return RtlpFcInitializeBuffers(v9 + 3);
}
