/*
 * XREFs of RtlCopyBitMap @ 0x140209CA0
 * Callers:
 *     HvpGrowDirtyVectors @ 0x14020C5E4 (HvpGrowDirtyVectors.c)
 *     PspQueryRateControlHistory @ 0x14068578C (PspQueryRateControlHistory.c)
 *     Xp10ExecuteHuffmanEncode @ 0x1409C3320 (Xp10ExecuteHuffmanEncode.c)
 *     PopSaveHiberContext @ 0x140A4B9E0 (PopSaveHiberContext.c)
 * Callees:
 *     RtlpCopyBitMapTailToHead @ 0x140209DE8 (RtlpCopyBitMapTailToHead.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

unsigned __int64 __fastcall RtlCopyBitMap(unsigned int *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rbx
  __int64 v7; // rcx
  int *v8; // r11
  int *v9; // r9
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  size_t v13; // rdi
  _BYTE *v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // rsi
  int v17; // ebx
  char v18; // di
  int v19; // ebp
  int v20; // r14d
  int v21; // edi
  unsigned __int64 v22; // rbp
  unsigned int v23; // eax
  int v24; // r10d

  result = *a1;
  v5 = *(_DWORD *)a2 - a3;
  if ( (unsigned int)result <= (unsigned int)v5 )
    v5 = (unsigned int)result;
  if ( v5 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    v8 = (int *)*((_QWORD *)a1 + 1);
    result = (unsigned __int64)a3 >> 5;
    v9 = (int *)(v7 + 4 * result);
    if ( v8 <= v9 )
    {
      result = (unsigned __int64)&v8[(v5 - 1) >> 5];
      if ( (unsigned __int64)v9 <= result )
        return RtlpCopyBitMapTailToHead(a1, a2, a3, (unsigned int)v5);
    }
    v10 = (unsigned __int64)a3 >> 3;
    if ( (a3 & 7) != 0 )
    {
      v15 = a3 & 0x1F;
      if ( v5 >= 0x20 )
      {
        v20 = *v9;
        v21 = 1 << (32 - v15);
        v22 = v5 >> 5;
        do
        {
          *v9++ = ((*v8 & (v21 - 1)) << v15) | v20 & ((1 << v15) - 1);
          v23 = *v8++ & ~(v21 - 1);
          result = v23 >> (32 - v15);
          v20 = result | *v9 & ~((1 << v15) - 1);
          *v9 = v20;
          --v22;
        }
        while ( v22 );
        v16 = v5 - 32 * (v5 >> 5);
        if ( !v16 )
          return result;
      }
      else
      {
        v16 = v5;
      }
      v17 = *v8;
      v18 = 32 - v15;
      v19 = *v9;
      if ( v16 > 32 - v15 )
      {
        *v9 = v19 & ((1 << v15) - 1) | ((v17 & ((1 << v18) - 1)) << v15);
        v24 = 1 << (v16 + v15 - 32);
        result = (*v8 & (unsigned int)((v24 - 1) << v18)) >> v18;
        v9[1] = result | v9[1] & -v24;
      }
      else
      {
        result = (v17 & (unsigned int)((1 << v16) - 1)) << v15;
        *v9 = result | v19 & ~(((1 << v16) - 1) << v15);
      }
      return result;
    }
    v11 = v5;
    v12 = v5 & 7;
    v13 = v11 >> 3;
    if ( v13 )
      result = (unsigned __int64)memmove((void *)(v10 + v7), *((const void **)a1 + 1), v13);
    if ( v12 )
    {
      v14 = (_BYTE *)(v13 + v10 + *(_QWORD *)(a2 + 8));
      *v14 &= ~((1 << v12) - 1);
      result = *((_QWORD *)a1 + 1);
      *v14 |= (unsigned __int8)((1 << v12) - 1) & *(_BYTE *)(v13 + result);
    }
  }
  return result;
}
