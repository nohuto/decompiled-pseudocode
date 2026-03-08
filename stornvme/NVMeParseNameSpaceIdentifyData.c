/*
 * XREFs of NVMeParseNameSpaceIdentifyData @ 0x1C0021490
 * Callers:
 *     NVMeNameSpaceIdentify @ 0x1C002108C (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021CA0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     memset @ 0x1C0004580 (memset.c)
 */

__int64 __fastcall NVMeParseNameSpaceIdentifyData(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char *a6)
{
  int v10; // r9d
  __int64 v11; // r11
  __int128 v12; // xmm0
  __int64 result; // rax
  unsigned int v14; // edx
  unsigned int v15; // ebp
  char v16; // r10
  unsigned int v17; // edi
  unsigned int v18; // ecx
  unsigned int v19; // r8d

  memset(a6, 0, 0x1A8uLL);
  a6[64] = *(_BYTE *)(a2 + 26) & 0xF;
  *((_DWORD *)a6 + 12) = *(_DWORD *)(a2 + 4LL * (*(_BYTE *)(a2 + 26) & 0xF) + 128);
  v10 = 1 << a6[50];
  *((_DWORD *)a6 + 13) = v10;
  *((_QWORD *)a6 + 7) = *(_QWORD *)a2;
  a6[65] = *(_BYTE *)(a2 + 24) & 1;
  a6[66] = *(_BYTE *)(a2 + 29) & 7;
  *((_WORD *)a6 + 46) = *(_WORD *)(a2 + 46);
  v11 = *(unsigned __int16 *)(a2 + 100);
  *((_WORD *)a6 + 47) = v11;
  *((_WORD *)a6 + 48) = *(_WORD *)(a2 + 102);
  a6[112] = *(_BYTE *)(a2 + 31);
  *(_QWORD *)(a6 + 84) = *(_QWORD *)(a2 + 120);
  v12 = *(_OWORD *)(a2 + 104);
  *(_DWORD *)a6 = 1;
  a6[10] = a5 - 1;
  result = 0xFFFFFFFFLL;
  *(_OWORD *)(a6 + 68) = v12;
  *((_DWORD *)a6 + 1) = 4;
  v14 = -1;
  *((_WORD *)a6 + 4) = 0;
  v15 = -1;
  *((_DWORD *)a6 + 4) = a5;
  *(_QWORD *)(a6 + 100) = 0LL;
  *((_DWORD *)a6 + 27) = 0;
  *((_QWORD *)a6 + 20) = 0LL;
  v16 = *(_BYTE *)(a3 + 77);
  if ( v16 )
  {
    result = (unsigned int)(1 << v16);
    v15 = result * (1 << ((*(_BYTE *)(a1 + 206) & 0xF) + 12));
  }
  if ( (*(_DWORD *)(a1 + 64) & 0x10000) != 0 )
  {
    if ( *(_BYTE *)(a1 + 24) )
      return StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
    return result;
  }
  result = *(unsigned int *)(a3 + 96);
  if ( (result & 4) != 0 )
  {
    if ( a4 )
    {
      result = v11 << 7;
      if ( *(_DWORD *)((v11 << 7) + a4 - 116) )
        v14 = *(_DWORD *)((v11 << 7) + a4 - 116);
    }
  }
  if ( (*(_BYTE *)(a2 + 24) & 0x10) != 0 )
    goto LABEL_17;
  result = v14 - 0x8000;
  if ( (unsigned int)result <= 0xFFFF7FFE )
    *((_DWORD *)a6 + 25) = v14;
  if ( (*(_BYTE *)(a2 + 24) & 0x10) != 0 )
  {
LABEL_17:
    v17 = v10 * (*(unsigned __int16 *)(a2 + 72) + 1);
    if ( v17 <= v15 )
    {
      if ( v14 < v17 )
        v17 = v14;
      if ( v17 != -1 )
      {
        if ( (*(_DWORD *)(a1 + 64) & 0x8000) != 0 )
        {
          if ( *(_BYTE *)(a1 + 24) )
          {
            result = StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
            v10 = *((_DWORD *)a6 + 13);
          }
          goto LABEL_21;
        }
        if ( v17 >= 0x8000 )
        {
LABEL_21:
          v18 = v10 * (*(unsigned __int16 *)(a2 + 64) + 1);
          if ( v18 <= v15 )
          {
            v19 = v10 * (*(unsigned __int16 *)(a2 + 66) + 1);
            result = v18 / v19;
            if ( !(v18 % v19) )
            {
              *((_DWORD *)a6 + 25) = v17;
              *((_DWORD *)a6 + 26) = v18;
              *((_DWORD *)a6 + 27) = v19;
              *((_DWORD *)a6 + 40) = *(unsigned __int16 *)(a2 + 68) + 1;
              result = (unsigned int)*(unsigned __int16 *)(a2 + 70) + 1;
              *((_DWORD *)a6 + 41) = result;
            }
          }
          return result;
        }
        if ( *(_BYTE *)(a1 + 24) )
          return StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
      }
    }
  }
  return result;
}
