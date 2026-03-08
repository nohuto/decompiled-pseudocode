/*
 * XREFs of ProcessorpSelectProcessorSetFromClusters @ 0x1C009C230
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C009B5F0 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     ProcessorpSelectClusterInGroup @ 0x1C009C108 (ProcessorpSelectClusterInGroup.c)
 *     ProcessorpSelectGroup @ 0x1C009C174 (ProcessorpSelectGroup.c)
 *     ProcessorpSelectProcessorsInCluster @ 0x1C009C328 (ProcessorpSelectProcessorsInCluster.c)
 */

__int64 __fastcall ProcessorpSelectProcessorSetFromClusters(__int64 a1, char a2, char a3, __int64 a4, __int64 a5)
{
  __int16 v7; // r11
  __int64 v8; // rdi
  __int64 result; // rax
  int v10; // edx
  unsigned __int16 v11; // r11
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int16 v14; // ax
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  ProcessorpSelectGroup(a2, a3, a5, &v15);
  v8 = v15;
  if ( *(_DWORD *)(v15 + 36) != 1 && (unsigned __int16)(v7 - 1) > 2u && v7 != 6 )
    return 3221225485LL;
  ProcessorpSelectClusterInGroup(v15, a3, &v16);
  LOBYTE(v10) = a3;
  v12 = ProcessorpSelectProcessorsInCluster(v11, v10, v8, v16, a5);
  v13 = *(_QWORD *)(a5 + 16);
  if ( !*(_BYTE *)a5 )
  {
    *(_QWORD *)(a5 + 8) = v13;
    *(_BYTE *)a5 = 1;
    *(_QWORD *)(a5 + 24) = v8;
LABEL_7:
    v14 = *(_WORD *)(v8 + 32);
    *(_OWORD *)a4 = 0LL;
    *(_WORD *)(a4 + 8) = v14;
    result = 0LL;
    *(_QWORD *)a4 = v12;
    return result;
  }
  if ( *(_QWORD *)(a5 + 8) != v13 )
    goto LABEL_7;
  return 3221226021LL;
}
