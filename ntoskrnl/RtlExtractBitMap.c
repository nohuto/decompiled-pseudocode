/*
 * XREFs of RtlExtractBitMap @ 0x1405A5880
 * Callers:
 *     RtlShiftLeftBitMap @ 0x1405A6E10 (RtlShiftLeftBitMap.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

char __fastcall RtlExtractBitMap(__int64 a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r10
  unsigned int v7; // eax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  size_t v12; // rdi
  __int64 v13; // r9
  unsigned int *v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // r11
  int *v17; // rdi
  unsigned __int64 v18; // r8
  unsigned int v19; // edx
  unsigned int v20; // edx
  int v21; // esi
  int v22; // r8d

  v5 = *a2;
  v6 = *(_DWORD *)a1 - a3;
  LOBYTE(v7) = a4;
  if ( a4 <= (unsigned int)v6 )
    v6 = a4;
  if ( v6 <= v5 )
    v5 = (unsigned int)v6;
  if ( v5 )
  {
    v9 = (unsigned __int64)a3 >> 3;
    if ( (a3 & 7) != 0 )
    {
      v14 = (unsigned int *)*((_QWORD *)a2 + 1);
      v15 = a3 & 0x1F;
      v16 = 32 - v15;
      v17 = (int *)(*(_QWORD *)(a1 + 8) + 4 * ((unsigned __int64)a3 >> 5));
      if ( v5 < 0x20 )
        goto LABEL_15;
      v18 = v5 >> 5;
      v5 += -32LL * (v5 >> 5);
      do
      {
        v19 = ~((1 << v15) - 1) & *v17++;
        v20 = v19 >> v15;
        *v14 = v20;
        v7 = v20 | ((((1 << v15) - 1) & *v17) << v16);
        *v14++ = v7;
        --v18;
      }
      while ( v18 );
      if ( v5 )
      {
LABEL_15:
        v21 = *v17;
        v22 = *v14 & ~((1 << v5) - 1);
        if ( v5 > v16 )
        {
          v7 = (v21 & (unsigned int)(-1 << v15)) >> v15;
          *v14 = v7 | ((v17[1] & ((1 << (v5 + v15 - 32)) - 1)) << v16) | v22;
        }
        else
        {
          v7 = v22 | ((v21 & (unsigned int)(((1 << v5) - 1) << v15)) >> v15);
          *v14 = v7;
        }
      }
    }
    else
    {
      v10 = (unsigned int)v5;
      v11 = v5 & 7;
      v12 = v10 >> 3;
      if ( v12 )
        LOBYTE(v7) = (unsigned __int8)memmove(*((void **)a2 + 1), (const void *)(v9 + *(_QWORD *)(a1 + 8)), v12);
      if ( v11 )
      {
        v13 = *((_QWORD *)a2 + 1);
        LOBYTE(v7) = *(_BYTE *)(v9 + *(_QWORD *)(a1 + 8) + v12) & ((1 << v11) - 1) | *(_BYTE *)(v12 + v13) & ~((1 << v11) - 1);
        *(_BYTE *)(v12 + v13) = v7;
      }
    }
  }
  return v7;
}
