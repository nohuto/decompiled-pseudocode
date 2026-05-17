/*
 * XREFs of RtlpDecommitBlock @ 0x1800208E8
 * Callers:
 *     RtlpCollectFreeBlocks @ 0x18001F2D8 (RtlpCollectFreeBlocks.c)
 * Callees:
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x18001F398 (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlpLogHeapContractEvent @ 0x180109EB8 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x180109FEC (RtlpLogHeapDecommit.c)
 */

char __fastcall RtlpDecommitBlock(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  _DWORD *v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v21; // [rsp+60h] [rbp+20h] BYREF
  const void *v22; // [rsp+68h] [rbp+28h] BYREF

  v3 = a1;
  v4 = *(unsigned __int16 *)(a2 + 8);
  v21 = v4;
  *(_BYTE *)(a2 + 10) &= 0xF8u;
  *(_BYTE *)(a2 + 15) = 0;
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v18 = (_DWORD *)(a2 + 32);
    v19 = (unsigned __int64)(16 * v4 - 32) >> 2;
    if ( v19 )
    {
      if ( ((unsigned __int8)v18 & 4) != 0 )
      {
        --v19;
        *v18 = -17891602;
        v18 = (_DWORD *)(a2 + 36);
      }
      memset64(v18, 0xFEEEFEEEFEEEFEEEuLL, v19 >> 1);
      a1 = 0LL;
      if ( (v19 & 1) != 0 )
        v18[v19 - 1] = -17891602;
    }
    *(_BYTE *)(a2 + 10) |= 4u;
  }
  v5 = RtlpHeapKey ^ *(_QWORD *)(v3 + 360);
  if ( !v5 )
  {
    LOBYTE(v5) = RtlpGetFreeBlockInsidePageBoundaries(a1, a2, (unsigned __int64 *)&v22, &v21);
    if ( (_BYTE)v5 )
    {
      v9 = RtlpSecMemFreeVirtualMemory(v6, &v22, &v21, 0x4000LL);
      if ( v9 < 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        LOBYTE(v5) = DbgPrint(
                       "RtlpHeapFreeVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
                       v9,
                       (const void *)v3,
                       v22,
                       v21);
      }
      else
      {
        v11 = 2147353472LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, v7) )
          v12 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v12 = 2147353472LL;
        if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapDecommit(v3, v22, v21, 7LL);
        *(_QWORD *)(v3 + 664) += v21;
        ++*(_DWORD *)(v3 + 628);
        ++*(_DWORD *)(v3 + 660);
        ++*(_DWORD *)(v3 + 644);
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v10) )
          v14 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v14 = 2147353472LL;
        if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v14, v13) )
            v11 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(v3, (_DWORD)v22, v21, 16 * *(_QWORD *)(v3 + 192), 0, 0LL, *(unsigned __int8 *)v11);
        }
        LODWORD(v5) = RtlGetCurrentServiceSessionId(v14, v13);
        v16 = 2147353482LL;
        if ( (_DWORD)v5 )
        {
          v5 = (__int64)NtCurrentPeb();
          v17 = *(_QWORD *)(v5 + 144) + 560LL;
        }
        else
        {
          v17 = 2147353482LL;
        }
        if ( *(_BYTE *)v17 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v17, v15) )
            v16 = (__int64)NtCurrentPeb()->SharedData + 560;
          LOBYTE(v5) = RtlpLogHeapContractEvent(
                         v3,
                         (_DWORD)v22,
                         v21,
                         16 * (unsigned int)*(_QWORD *)(v3 + 192),
                         0,
                         0LL,
                         *(unsigned __int8 *)v16);
        }
        *(_BYTE *)(a2 + 10) &= 0x13u;
        *(_BYTE *)(a2 + 10) |= 8u;
      }
    }
  }
  if ( *(_DWORD *)(v3 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    LODWORD(v5) = *(_DWORD *)(v3 + 136);
    *(_DWORD *)(a2 + 8) ^= v5;
  }
  return v5;
}
