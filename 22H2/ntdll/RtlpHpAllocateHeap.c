/*
 * XREFs of RtlpHpAllocateHeap @ 0x18000776C
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18000798C (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpCheckAllocationSizeLimit @ 0x180007650 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlpHpCalculateAllocSize @ 0x180007698 (RtlpHpCalculateAllocSize.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800076C4 (RtlpHpAllocateHeapInternal.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpFreeHeap @ 0x180024920 (RtlpHpFreeHeap.c)
 *     RtlpCallInterceptRoutine @ 0x1800F34E4 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapAllocateEvent @ 0x180109D80 (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpExtrasAppend @ 0x18010E228 (RtlpHpExtrasAppend.c)
 */

__int64 __fastcall RtlpHpAllocateHeap(__int64 a1, unsigned __int64 a2, int a3, __int16 a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ebp
  int v12; // esi
  unsigned __int64 v13; // r14
  __int64 HeapInternal; // rax
  int v15; // r9d
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v19; // rax
  __int64 v20; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+18h] BYREF

  v7 = (a3 | *(_DWORD *)(a1 + 20)) & 0x93000F0B;
  if ( !(unsigned int)RtlpHpCheckAllocationSizeLimit(a2, a1, a1 + 32) )
    goto LABEL_14;
  v10 = 0LL;
  v11 = 0;
  v20 = 0LL;
  if ( (v7 & 0x1000000) == 0 )
  {
    v11 = *(_DWORD *)(a1 + 24);
    if ( v11 )
    {
      v7 |= 8u;
      if ( (int)RtlpCallInterceptRoutine(v11, a1, 0, 1, (__int64)&v20) >= 0 )
      {
        v10 = v20;
        goto LABEL_3;
      }
LABEL_14:
      v13 = 0LL;
LABEL_13:
      v21 = 0;
      goto LABEL_21;
    }
  }
LABEL_3:
  v12 = v7 | 8;
  if ( !a4 )
    v12 = v7;
  v13 = RtlpHpCalculateAllocSize(v10 + a2, v12);
  if ( v13 < a2 || a2 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_13;
  HeapInternal = RtlpHpAllocateHeapInternal(a1, a2, v13, v12 & 0x13000003, (int *)&v21);
  v16 = HeapInternal;
  if ( !HeapInternal )
    goto LABEL_9;
  if ( (v12 & 0x30000F08) == 0 )
    goto LABEL_9;
  v19 = RtlpHpExtrasAppend(a1, HeapInternal, a2, v15, v20, v12, a4);
  if ( !v11 )
    goto LABEL_9;
  *(_BYTE *)(v19 + 2) &= 0xF0u;
  *(_BYTE *)(v19 + 2) |= v11 & 0xF;
  if ( (int)RtlpCallInterceptRoutine(v11, a1, v16, 2, v19 + 16) >= 0 )
    goto LABEL_9;
  RtlpHpFreeHeap(a1, v16, v12, 0, 0LL);
LABEL_21:
  v16 = 0LL;
LABEL_9:
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, v8) )
    v17 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v17 = 2147353472LL;
  if ( *(_BYTE *)v17 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapAllocateEvent(a1, v16, v13, v21);
  return v16;
}
