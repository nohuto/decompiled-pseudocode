/*
 * XREFs of RtlExtractBitMapEx @ 0x1405E56C0
 * Callers:
 *     RtlShiftLeftBitMapEx @ 0x1405E6C50 (RtlShiftLeftBitMapEx.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

char __fastcall RtlExtractBitMapEx(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  size_t v12; // rdi
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 *v16; // rsi
  unsigned __int64 *v17; // r10
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // r9

  v4 = *(_QWORD *)a2;
  v7 = *a1 - a3;
  if ( a4 > v7 )
    a4 = *a1 - a3;
  if ( a4 <= v4 )
    v4 = a4;
  if ( v4 )
  {
    v9 = a3 >> 3;
    if ( (a3 & 7) != 0 )
    {
      v14 = a3 & 0x3F;
      v15 = 1LL << v14;
      v16 = (__int64 *)(a1[1] + 8 * (a3 >> 6));
      v17 = *(unsigned __int64 **)(a2 + 8);
      if ( v4 < 0x40 )
      {
        v19 = v4;
      }
      else
      {
        v18 = v4 >> 6;
        v19 = v4 - (v4 >> 6 << 6);
        do
        {
          v20 = ~(v15 - 1) & *v16++;
          v21 = v20 >> v14;
          *v17 = v21;
          v7 = v21 | (((v15 - 1) & *v16) << (64 - (unsigned __int8)v14));
          *v17++ = v7;
          --v18;
        }
        while ( v18 );
        if ( !v19 )
          return v7;
      }
      v22 = *v16;
      v23 = *v17 & ~((1LL << v19) - 1);
      if ( v19 > 64 - v14 )
      {
        v7 = (v22 & (unsigned __int64)~(v15 - 1)) >> v14;
        *v17 = v7 | ((v16[1] & ((1LL << ((unsigned __int8)v19 + (unsigned __int8)v14 - 64)) - 1)) << (64 - (unsigned __int8)v14)) | v23;
      }
      else
      {
        v7 = v23 | ((v22 & (unsigned __int64)(((1LL << v19) - 1) << v14)) >> v14);
        *v17 = v7;
      }
      return v7;
    }
    v10 = v4;
    v11 = v4 & 7;
    v12 = v10 >> 3;
    if ( v12 )
      LOBYTE(v7) = (unsigned __int8)memmove(*(void **)(a2 + 8), (const void *)(v9 + a1[1]), v12);
    if ( v11 )
    {
      v13 = *(_QWORD *)(a2 + 8);
      LOBYTE(v7) = *(_BYTE *)(v9 + a1[1] + v12) & ((1 << v11) - 1) | *(_BYTE *)(v12 + v13) & ~((1 << v11) - 1);
      *(_BYTE *)(v12 + v13) = v7;
    }
  }
  return v7;
}
