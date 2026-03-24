/*
 * XREFs of ScsiReportLunsCommand @ 0x1C0016D78
 * Callers:
 *     ScsiToNVMe @ 0x1C0004A30 (ScsiToNVMe.c)
 * Callees:
 *     NVMeIsLunActive @ 0x1C0015204 (NVMeIsLunActive.c)
 */

__int64 __fastcall ScsiReportLunsCommand(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  _BYTE *v4; // r8
  __int64 v5; // r10
  unsigned __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // r10

  v3 = a1;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = *(_BYTE **)(a2 + 64);
    v5 = 60LL;
  }
  else
  {
    v4 = *(_BYTE **)(a2 + 24);
    v5 = 16LL;
  }
  *(_BYTE *)(a2 + 3) = 1;
  v6 = *(unsigned int *)(a2 + v5);
  v7 = 8 * *(_DWORD *)(a1 + 208);
  if ( v6 >= (unsigned __int64)v7 + 8 )
  {
    v4[3] = v7;
    v8 = 0LL;
    *v4 = HIBYTE(v7);
    v4[1] = BYTE2(v7);
    v4[2] = BYTE1(v7);
    if ( *(_DWORD *)(a1 + 208) )
    {
      do
      {
        if ( NVMeIsLunActive(*(_QWORD *)(v3 + 8 * v8 + 1736)) )
        {
          *(_DWORD *)(v9 + 8 * v10 + 10) = 0;
          *(_WORD *)(v9 + 8 * v10 + 14) = 0;
          *(_BYTE *)(v9 + 8 * v10 + 8) = 0;
          *(_BYTE *)(v9 + 8 * v10 + 9) = v10;
        }
        v8 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v8 < *(_DWORD *)(v3 + 208) );
    }
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 18;
    if ( *(_DWORD *)(a2 + v5) >= 4u )
    {
      v4[3] = v7;
      *v4 = HIBYTE(v7);
      v4[1] = BYTE2(v7);
      v4[2] = BYTE1(v7);
    }
  }
  return 0LL;
}
