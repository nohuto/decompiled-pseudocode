/*
 * XREFs of ExpHpCompactionRoutine @ 0x1402CC0B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapCompact @ 0x1402CC2D4 (RtlpHpHeapCompact.c)
 *     ExGetHeapFromVA @ 0x140313BF0 (ExGetHeapFromVA.c)
 *     RtlpHpFreeHeap @ 0x140313CC0 (RtlpHpFreeHeap.c)
 *     RtlpInterlockedFlushSList @ 0x1404204E0 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall ExpHpCompactionRoutine(int a1)
{
  unsigned int v1; // r13d
  int v2; // esi
  int v3; // r12d
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r15
  _QWORD *v8; // r12
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  _QWORD *p_Next; // rcx
  unsigned __int64 v17; // rax
  PSLIST_ENTRY v18; // rax
  ULONG_PTR v19; // rsi
  int HeapFromVA; // eax
  int v21; // r9d
  __int64 v22; // [rsp+20h] [rbp-68h]
  __int64 v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  _OWORD v25[4]; // [rsp+40h] [rbp-48h]
  int v27; // [rsp+A0h] [rbp+18h]

  v1 = 0;
  v2 = a1;
  v25[0] = _mm_load_si128((const __m128i *)&_xmm);
  v3 = *((_DWORD *)v25 + 2 * a1 + 1);
  v4 = v3;
  v23 = v3;
  v5 = *((int *)v25 + 2 * a1);
  v27 = v3;
  v24 = v5;
  if ( dword_140C74660 )
  {
    do
    {
      v6 = v5;
      if ( v5 <= v4 )
      {
        do
        {
          v7 = qword_140C74680[1048 * v1 + v6];
          v8 = *(_QWORD **)(v7 + 40);
          if ( v8 )
          {
            v9 = 0LL;
            v10 = ~*v8;
            while ( v10 )
            {
              _BitScanForward64(&v17, v10);
              v10 ^= 1LL << v17;
              v18 = RtlpInterlockedFlushSList((PSLIST_HEADER)&v8[8 * (unsigned int)v17 + 8]);
              if ( v9 )
              {
                while ( 1 )
                {
                  p_Next = &v18->Next;
                  if ( !v18 )
                    break;
                  v18 = v18->Next;
                  *p_Next = v9;
                  v9 = p_Next;
                }
              }
              else
              {
                v9 = &v18->Next;
              }
            }
            while ( 1 )
            {
              v19 = (ULONG_PTR)v9;
              if ( !v9 )
                break;
              v9 = (_QWORD *)*v9;
              HeapFromVA = ExGetHeapFromVA(v19);
              RtlpHpFreeHeap(HeapFromVA, v19, 0, v21, v22);
            }
            v4 = v23;
          }
          v11 = *(__int16 *)(v7 + 342);
          v12 = *(_QWORD *)(v11 + v7 + 328) >> *(_BYTE *)(v7 + 331);
          if ( v12 <= 8 )
            v12 = 8LL;
          if ( *(_QWORD *)(v11 + v7 + 336) + *(_QWORD *)(v11 + v7 + 344) > v12 )
            RtlpHpHeapCompact(v7);
          ++v6;
        }
        while ( v6 <= v4 );
        v5 = v24;
      }
      ++v1;
    }
    while ( v1 < dword_140C74660 );
    v3 = v27;
    v2 = a1;
  }
  result = 3LL;
  if ( v3 >= 3 )
    v3 = 3;
  while ( v5 <= v3 )
  {
    v14 = qword_140CF7680[v5];
    result = *(__int16 *)(v14 + 342);
    v15 = *(_QWORD *)(result + v14 + 328) >> *(_BYTE *)(v14 + 331);
    if ( v15 <= 8 )
      v15 = 8LL;
    if ( *(_QWORD *)(result + v14 + 336) + *(_QWORD *)(result + v14 + 344) > v15 )
      result = RtlpHpHeapCompact(qword_140CF7680[v5]);
    ++v5;
  }
  if ( v2 == 1 )
    ExpHpGCScheduledNonPaged = 0;
  else
    ExpHpGCScheduledPaged = 0;
  return result;
}
