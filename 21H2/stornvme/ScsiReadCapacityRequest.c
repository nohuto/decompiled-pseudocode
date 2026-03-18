/*
 * XREFs of ScsiReadCapacityRequest @ 0x1C00037CC
 * Callers:
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiReadCapacityRequest(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v7; // rbx
  _BYTE *v8; // r10
  unsigned __int8 v9; // cl
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // ebp
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  int v16; // ecx
  __int64 v18; // r9
  unsigned int v19; // ecx
  char v20; // al
  char v21; // al
  char v22; // cl
  unsigned int v23; // eax
  char v24; // cl
  unsigned __int64 v25; // [rsp+58h] [rbp+10h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = 60LL;
    v8 = *(_BYTE **)(a2 + 64);
    v9 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v8 = *(_BYTE **)(a2 + 24);
    v7 = 16LL;
    v9 = *(_BYTE *)(a2 + 7);
  }
  v10 = v9;
  v11 = 0LL;
  v12 = *(_QWORD *)(a1 + 8LL * v9 + 1752);
  v13 = *(_DWORD *)(v12 + 52);
  v14 = *(_QWORD *)(v12 + 56) - 1LL;
  v25 = v14;
  if ( *(_BYTE *)(v12 + 66) || *(_WORD *)(v12 + 48) )
  {
    v14 = 0LL;
    v25 = 0LL;
  }
  v15 = *(_DWORD *)(a2 + v7);
  if ( v15 >= 8 )
  {
    v16 = 12;
    if ( (_DWORD)a4 != 16 || v15 >= 0xC )
    {
      if ( v8 )
      {
        if ( (_DWORD)a4 == 16 && *a3 == 0x9E )
        {
          if ( (a3[1] & 0x1F) != 0x10 )
          {
            LOBYTE(a4) = 32;
            LOBYTE(v11) = 5;
            LOBYTE(v14) = 6;
            NVMeSetSenseData(a2, v14, v11, a4);
            LODWORD(v11) = -1056964601;
            return (unsigned int)v11;
          }
          v8[6] = BYTE1(v25);
          v8[5] = BYTE2(v25);
          v8[4] = BYTE3(v25);
          v8[3] = BYTE4(v25);
          v8[2] = BYTE5(v25);
          v8[1] = BYTE6(v25);
          *v8 = HIBYTE(v25);
          v8[10] = BYTE1(v13);
          v8[9] = BYTE2(v13);
          v8[8] = HIBYTE(v13);
          v8[7] = v14;
          v8[11] = v13;
          if ( *(_DWORD *)(a2 + v7) >= 0x10u )
          {
            v8[12] &= 0xF0u;
            v18 = *(_QWORD *)(a1 + 8 * v10 + 1752);
            v19 = *(_DWORD *)(v18 + 104);
            if ( v19 || *(_DWORD *)(a1 + 152) )
            {
              if ( *(_DWORD *)(a1 + 152) )
                v19 = *(_DWORD *)(a1 + 152);
              v23 = v19 / *(_DWORD *)(v18 + 52);
              if ( v23 )
              {
                v24 = 0;
                do
                {
                  ++v24;
                  v23 >>= 1;
                }
                while ( v23 );
                v8[13] ^= (v24 ^ v8[13]) & 0xF;
              }
              else
              {
                v8[13] &= 0xF0u;
              }
            }
            else
            {
              v20 = v8[13];
              if ( *(_DWORD *)(v18 + 52) == 512 )
                v21 = v20 & 0xF0 | 3;
              else
                v21 = v20 & 0xF0;
              v8[13] = v21;
            }
            v8[14] &= 0xC0u;
            v22 = v8[14] & 0x3F;
            v8[15] = 0;
            v8[14] = v22 & 0xBF | (*(_BYTE *)(*(_QWORD *)(a1 + 8 * v10 + 1752) + 65LL) << 7);
            v16 = *(_DWORD *)(a2 + v7) < 0x20u ? 16 : 32;
          }
          *(_DWORD *)(a2 + v7) = v16;
        }
        else
        {
          v8[6] = BYTE1(v13);
          v8[5] = BYTE2(v13);
          v8[4] = HIBYTE(v13);
          v8[7] = v13;
          if ( v14 >= 0xFFFFFFFF )
          {
            *(_DWORD *)v8 = -1;
          }
          else
          {
            v8[3] = v14;
            v8[2] = BYTE1(v14);
            *v8 = BYTE3(v14);
            v8[1] = BYTE2(v14);
          }
          *(_DWORD *)(a2 + v7) = 8;
        }
        *(_BYTE *)(a2 + 3) = 1;
        return (unsigned int)v11;
      }
    }
  }
  LOBYTE(a4) = 36;
  LOBYTE(v11) = 5;
  LOBYTE(v14) = 6;
  NVMeSetSenseData(a2, v14, v11, a4);
  return 3238002692LL;
}
