/*
 * XREFs of RtlpCommitQueryDebugInfo @ 0x1800D88C8
 * Callers:
 *     RtlCommitDebugInfo @ 0x1800D72B0 (RtlCommitDebugInfo.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D75B0 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7C20 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D8000 (RtlQueryProcessLockInformation.c)
 *     RtlQueryProcessModuleInformation @ 0x1800D82A0 (RtlQueryProcessModuleInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D8960 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x1800D8D30 (RtlpQueryProcessEnumHeapsRoutine.c)
 *     RtlpWalkCallbackRoutine @ 0x1800D9410 (RtlpWalkCallbackRoutine.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800DB0F4 (AVrfpQueryProcessVerifierOptions.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009D7E0 (ZwAllocateVirtualMemory.c)
 */

char *__fastcall RtlpCommitQueryDebugInfo(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  ULONG_PTR v7; // [rsp+50h] [rbp+18h] BYREF
  char *v8; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 <= 0xFFFFFFF8 )
  {
    v3 = a1[9];
    v4 = a1[10];
    v5 = v3 + ((a2 + 7) & 0xFFFFFFF8);
    if ( v5 <= v4 )
    {
LABEL_6:
      a1[9] = v5;
      return (char *)a1 + v3;
    }
    if ( v5 < a1[11] )
    {
      v8 = (char *)a1 + v4;
      v7 = v5 - v4;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v8, 0LL, &v7, 0x1000u, 4u) >= 0 )
      {
        a1[10] += v7;
        v3 = a1[9];
        goto LABEL_6;
      }
    }
  }
  return 0LL;
}
