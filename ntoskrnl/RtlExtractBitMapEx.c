/*
 * XREFs of RtlExtractBitMapEx @ 0x1405A5A20
 * Callers:
 *     RtlShiftLeftBitMapEx @ 0x1405A6E80 (RtlShiftLeftBitMapEx.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

char __fastcall RtlExtractBitMapEx(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  size_t v11; // rdi
  __int64 v12; // r9
  unsigned __int64 *v13; // r9
  __int64 v14; // r10
  __int64 v15; // rsi
  unsigned __int64 v16; // r11
  __int64 *v17; // rdi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // r8

  v4 = *(_QWORD *)a2;
  v7 = *a1 - a3;
  if ( a4 > v7 )
    a4 = *a1 - a3;
  if ( a4 <= v4 )
    v4 = a4;
  if ( v4 )
  {
    v8 = a3 >> 3;
    if ( (a3 & 7) != 0 )
    {
      v13 = *(unsigned __int64 **)(a2 + 8);
      v14 = a3 & 0x3F;
      v15 = 1LL << v14;
      v16 = 64 - v14;
      v17 = (__int64 *)(a1[1] + 8 * (a3 >> 6));
      if ( v4 < 0x40 )
        goto LABEL_15;
      v18 = v4 >> 6;
      v4 += -64LL * (v4 >> 6);
      do
      {
        v19 = ~(v15 - 1) & *v17++;
        v20 = v19 >> v14;
        *v13 = v20;
        v7 = v20 | (((v15 - 1) & *v17) << v16);
        *v13++ = v7;
        --v18;
      }
      while ( v18 );
      if ( v4 )
      {
LABEL_15:
        v21 = *v17;
        v22 = *v13 & ~((1LL << v4) - 1);
        if ( v4 > v16 )
        {
          v7 = (v21 & (unsigned __int64)~(v15 - 1)) >> v14;
          *v13 = v7 | ((v17[1] & ((1LL << ((unsigned __int8)v4 + (unsigned __int8)v14 - 64)) - 1)) << v16) | v22;
        }
        else
        {
          v7 = v22 | ((v21 & (unsigned __int64)(((1LL << v4) - 1) << v14)) >> v14);
          *v13 = v7;
        }
      }
    }
    else
    {
      v9 = v4;
      v10 = v4 & 7;
      v11 = v9 >> 3;
      if ( v11 )
        LOBYTE(v7) = (unsigned __int8)memmove(*(void **)(a2 + 8), (const void *)(v8 + a1[1]), v11);
      if ( v10 )
      {
        v12 = *(_QWORD *)(a2 + 8);
        LOBYTE(v7) = *(_BYTE *)(v8 + v11 + a1[1]) & ((1 << v10) - 1) | *(_BYTE *)(v11 + v12) & ~((1 << v10) - 1);
        *(_BYTE *)(v11 + v12) = v7;
      }
    }
  }
  return v7;
}
