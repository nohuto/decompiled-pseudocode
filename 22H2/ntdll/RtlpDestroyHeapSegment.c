/*
 * XREFs of RtlpDestroyHeapSegment @ 0x1800098EC
 * Callers:
 *     RtlDestroyHeap @ 0x180009680 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x180108244 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapFailure @ 0x18010E03C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpDestroyHeapSegment(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
    return 0LL;
  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(__int64 **)(a1 + 32);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *v4;
  if ( *v4 == v5 && v6 == v2 )
  {
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, v2, v5, v6, 0LL);
  }
  v7 = *(_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(a1 + 40);
  v14 = 0LL;
  v15 = v7;
  v9 = RtlpSecMemFreeVirtualMemory(v4, &v15, &v14, 0x8000LL);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v11, v10) )
    v12 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v12 = 2147353480LL;
  if ( *(_BYTE *)v12 )
    RtlpHeapLogRangeRelease(v8, v15, v14);
  return v9;
}
