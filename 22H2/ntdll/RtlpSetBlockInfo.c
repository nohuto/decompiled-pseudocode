/*
 * XREFs of RtlpSetBlockInfo @ 0x1800F86EC
 * Callers:
 *     RtlpLeakCallbackRoutine @ 0x1800F7FE0 (RtlpLeakCallbackRoutine.c)
 *     RtlpPushPageDescriptor @ 0x1800F8158 (RtlpPushPageDescriptor.c)
 *     RtlpSetBlockInfo @ 0x1800F86EC (RtlpSetBlockInfo.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlpInitializeMap @ 0x1800F7F94 (RtlpInitializeMap.c)
 *     RtlpSetBlockInfo @ 0x1800F86EC (RtlpSetBlockInfo.c)
 */

unsigned __int64 __fastcall RtlpSetBlockInfo(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rcx
  _QWORD *Heap; // rax

  result = a3 + a2 - 1;
  if ( result >= a1[1] && a2 <= a1[2] )
  {
    v9 = a2 - a1[1];
    if ( a2 <= a1[1] )
      v10 = 0LL;
    else
      v10 = v9 / *a1;
    v11 = (v9 + a3 - 1) % *a1;
    v12 = (v9 + a3 - 1) / *a1;
    result = 255LL;
    if ( v12 > 0xFF )
      v12 = 255LL;
    if ( v10 <= v12 )
    {
      v13 = (__int64)&a1[v10 + 7];
      do
      {
        if ( *a1 == 4096LL )
        {
          if ( a4 )
          {
            if ( *(_QWORD *)v13 )
            {
              if ( *(_QWORD *)v13 != a4 )
                result = DbgPrint("Error\n", v11);
            }
            *(_QWORD *)v13 = a4;
          }
          else
          {
            v11 = v10 >> 3;
            result = v10 & 7;
            *((_BYTE *)a1 + (v10 >> 3) + 24) |= 1 << result;
          }
        }
        else
        {
          v14 = *(_QWORD *)v13;
          if ( !*(_QWORD *)v13 )
          {
            Heap = (_QWORD *)RtlAllocateHeap(RtlpLeakHeap, 0, 2112LL);
            *(_QWORD *)v13 = Heap;
            if ( !Heap )
              return DbgPrint("Not enough memory to complete\n");
            RtlpInitializeMap(Heap, a1);
            *(_QWORD *)(*(_QWORD *)v13 + 8LL) = a1[1] + v10 * *a1;
            *(_QWORD *)(*(_QWORD *)v13 + 16LL) = a1[1] - 1LL + *a1 * (v10 + 1);
            v14 = *(_QWORD *)v13;
          }
          result = RtlpSetBlockInfo(v14, a2, a3, a4);
        }
        ++v10;
        v13 += 8LL;
      }
      while ( v10 <= v12 );
    }
  }
  return result;
}
