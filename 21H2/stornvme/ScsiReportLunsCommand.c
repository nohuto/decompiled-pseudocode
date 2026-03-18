/*
 * XREFs of ScsiReportLunsCommand @ 0x1C0006474
 * Callers:
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 * Callees:
 *     NVMeIsLunActive @ 0x1C000655C (NVMeIsLunActive.c)
 */

__int64 __fastcall ScsiReportLunsCommand(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 v4; // r10
  _BYTE *v5; // r8
  unsigned __int64 v6; // rax
  unsigned int v7; // edx
  unsigned int v8; // r11d
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r11d

  *(_BYTE *)(a2 + 3) = 1;
  v2 = 16LL;
  v4 = a1;
  if ( ((*(_DWORD *)(a1 + 136) & 0x10) != 0 || (*(_DWORD *)(a1 + 32) & 0x2000) == 0)
    && *(_WORD *)(a1 + 306)
    && *(_WORD *)(a1 + 304) )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v5 = *(_BYTE **)(a2 + 64);
      v2 = 60LL;
    }
    else
    {
      v5 = *(_BYTE **)(a2 + 24);
    }
    v6 = *(unsigned int *)(a2 + v2);
    v7 = 8 * *(_DWORD *)(a1 + 224);
    if ( v6 < (unsigned __int64)v7 + 8 )
    {
      *(_BYTE *)(a2 + 3) = 18;
      if ( *(_DWORD *)(a2 + v2) >= 4u )
      {
        v5[3] = v7;
        *v5 = HIBYTE(v7);
        v5[1] = BYTE2(v7);
        v5[2] = BYTE1(v7);
      }
    }
    else
    {
      v5[3] = v7;
      v8 = 0;
      *v5 = HIBYTE(v7);
      v5[1] = BYTE2(v7);
      v5[2] = BYTE1(v7);
      if ( *(_DWORD *)(a1 + 224) )
      {
        do
        {
          if ( (unsigned __int8)NVMeIsLunActive(*(_QWORD *)(v4 + 8LL * v8 + 1752)) )
          {
            *(_BYTE *)(v9 + 8 * v10 + 8) = 0;
            *(_BYTE *)(v9 + 8 * v10 + 9) = v11;
            *(_DWORD *)(v9 + 8 * v10 + 10) = 0;
            *(_WORD *)(v9 + 8 * v10 + 14) = 0;
          }
          v8 = v11 + 1;
        }
        while ( v8 < *(_DWORD *)(v4 + 224) );
      }
    }
  }
  return 0LL;
}
