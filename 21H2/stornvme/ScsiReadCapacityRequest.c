/*
 * XREFs of ScsiReadCapacityRequest @ 0x1C0004828
 * Callers:
 *     ScsiToNVMe @ 0x1C0004A30 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C001BFEC (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiReadCapacityRequest(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  int *v7; // rbx
  _BYTE *v8; // r10
  unsigned __int8 v9; // dl
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // r15d
  unsigned __int64 v14; // rdx
  int v15; // ecx
  char v17; // cl
  char v18; // cl
  char v19; // cl
  unsigned __int64 v20; // [rsp+68h] [rbp+38h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = (int *)(a2 + 60);
    v8 = *(_BYTE **)(a2 + 64);
    v9 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v8 = *(_BYTE **)(a2 + 24);
    v7 = (int *)(a2 + 16);
    v9 = *(_BYTE *)(a2 + 7);
  }
  v10 = v9;
  v11 = 0LL;
  v12 = *(_QWORD *)(a1 + 8LL * v9 + 1736);
  v13 = *(_DWORD *)(v12 + 52);
  v14 = *(_QWORD *)(v12 + 56) - 1LL;
  v20 = v14;
  if ( *(_BYTE *)(v12 + 66) || *(_WORD *)(v12 + 48) )
  {
    v14 = 0LL;
    v20 = 0LL;
  }
  if ( (unsigned int)*v7 >= 8 )
  {
    v15 = 12;
    if ( (_DWORD)a4 != 16 || (unsigned int)*v7 >= 0xC )
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
          v8[6] = BYTE1(v20);
          v8[5] = BYTE2(v20);
          v8[4] = BYTE3(v20);
          v8[3] = BYTE4(v20);
          v8[2] = BYTE5(v20);
          v8[1] = BYTE6(v20);
          *v8 = HIBYTE(v20);
          v8[10] = BYTE1(v13);
          v8[9] = BYTE2(v13);
          v8[8] = HIBYTE(v13);
          v8[7] = v14;
          v8[11] = v13;
          if ( (unsigned int)*v7 >= 0x10 )
          {
            v8[12] &= 0xF0u;
            v17 = v8[13];
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 8 * v10 + 1736) + 52LL) == 512 )
              v18 = v17 & 0xF0 | 3;
            else
              v18 = v17 & 0xF0;
            v8[14] &= 0xC0u;
            v8[13] = v18;
            v19 = v8[14] & 0x3F;
            v8[15] = 0;
            v8[14] = v19 & 0xBF | (*(_BYTE *)(*(_QWORD *)(a1 + 8 * v10 + 1736) + 65LL) << 7);
            v15 = (unsigned int)*v7 < 0x20 ? 16 : 32;
          }
          *v7 = v15;
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
          *v7 = 8;
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
