/*
 * XREFs of RtlExtractBitMapEx @ 0x140587180
 * Callers:
 *     RtlShiftLeftBitMapEx @ 0x1405887F0 (RtlShiftLeftBitMapEx.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
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
  unsigned __int64 *v14; // rdi
  __int64 v15; // r8
  __int64 *v16; // r15
  __int64 v17; // r10
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // r9

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
      v7 = a1[1];
      v14 = *(unsigned __int64 **)(a2 + 8);
      v15 = a3 & 0x3F;
      v16 = (__int64 *)(v7 + 8 * (a3 >> 6));
      v17 = 1LL << v15;
      if ( v4 >= 0x40 )
      {
        v18 = v4 >> 6;
        v4 += -64LL * (v4 >> 6);
        do
        {
          v19 = ~(v17 - 1) & *v16++;
          v20 = v19 >> v15;
          *v14 = v20;
          v7 = v20 | (((v17 - 1) & *v16) << (64 - (unsigned __int8)v15));
          *v14++ = v7;
          --v18;
        }
        while ( v18 );
      }
      if ( v4 )
      {
        v21 = *v16;
        v22 = *v14 & ~((1LL << v4) - 1);
        if ( v4 > 64 - v15 )
        {
          v7 = (v21 & (unsigned __int64)~(v17 - 1)) >> v15;
          *v14 = v7 | ((v16[1] & ((1LL << ((unsigned __int8)v4 + (unsigned __int8)v15 - 64)) - 1)) << (64 - (unsigned __int8)v15)) | v22;
        }
        else
        {
          v7 = v22 | ((v21 & (unsigned __int64)(((1LL << v4) - 1) << v15)) >> v15);
          *v14 = v7;
        }
      }
    }
    else
    {
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
  }
  return v7;
}
