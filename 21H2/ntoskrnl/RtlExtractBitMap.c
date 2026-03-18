/*
 * XREFs of RtlExtractBitMap @ 0x1405E5500
 * Callers:
 *     RtlShiftLeftBitMap @ 0x1405E6BE0 (RtlShiftLeftBitMap.c)
 *     RtlDecompressBufferXp10 @ 0x1409C0EC0 (RtlDecompressBufferXp10.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

char __fastcall RtlExtractBitMap(__int64 a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r10
  unsigned int v7; // eax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  size_t v13; // rdi
  __int64 v14; // r9
  unsigned int *v15; // r10
  __int64 v16; // r8
  int *v17; // rdi
  int v18; // r9d
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r11
  unsigned int v21; // edx
  unsigned int v22; // edx
  int v23; // ebx
  int v24; // edx

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
    v10 = a3;
    if ( (a3 & 7) != 0 )
    {
      v15 = (unsigned int *)*((_QWORD *)a2 + 1);
      v16 = a3 & 0x1F;
      v17 = (int *)(*(_QWORD *)(a1 + 8) + 4 * (v10 >> 5));
      v18 = 1 << (v10 & 0x1F);
      if ( v5 < 0x20 )
      {
        v20 = v5;
      }
      else
      {
        v19 = v5 >> 5;
        v20 = v5 - 32 * (v5 >> 5);
        do
        {
          v21 = ~(v18 - 1) & *v17++;
          v22 = v21 >> v16;
          *v15 = v22;
          v7 = v22 | (((v18 - 1) & *v17) << (32 - v16));
          *v15++ = v7;
          --v19;
        }
        while ( v19 );
        if ( !v20 )
          return v7;
      }
      v23 = *v17;
      v24 = *v15 & ~((1 << v20) - 1);
      if ( v20 > 32 - v16 )
      {
        v7 = ((v23 & (unsigned int)-v18) >> v16) | ((v17[1] & ((1 << (v20 + v16 - 32)) - 1)) << (32 - v16));
        *v15 = v7 | v24;
      }
      else
      {
        v7 = v24 | ((v23 & (unsigned int)(((1 << v20) - 1) << v16)) >> v16);
        *v15 = v7;
      }
      return v7;
    }
    v11 = (unsigned int)v5;
    v12 = v5 & 7;
    v13 = v11 >> 3;
    if ( v13 )
      LOBYTE(v7) = (unsigned __int8)memmove(*((void **)a2 + 1), (const void *)(v9 + *(_QWORD *)(a1 + 8)), v13);
    if ( v12 )
    {
      v14 = *((_QWORD *)a2 + 1);
      LOBYTE(v7) = *(_BYTE *)(v9 + *(_QWORD *)(a1 + 8) + v13) & ((1 << v12) - 1) | *(_BYTE *)(v13 + v14) & ~((1 << v12) - 1);
      *(_BYTE *)(v13 + v14) = v7;
    }
  }
  return v7;
}
