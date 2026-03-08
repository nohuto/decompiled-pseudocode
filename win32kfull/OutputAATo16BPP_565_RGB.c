/*
 * XREFs of OutputAATo16BPP_565_RGB @ 0x1C025A9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OutputAATo16BPP_565_RGB(
        unsigned int *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _WORD *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        int a9)
{
  unsigned __int16 *v10; // r9
  unsigned __int8 *v12; // r10
  __int64 result; // rax
  unsigned __int8 *v14; // r10
  int v15; // ecx
  unsigned int v16; // r8d

  v10 = a6;
  v12 = a2;
  if ( (_BYTE)a9 )
  {
    v12 = a2 + 4;
    if ( a2[7] )
      *a4 = ~((*(_DWORD *)(a5 + 4LL * a2[4]) - *a6) & 0x1F0000 | (*(_DWORD *)(a5 + 4LL * a2[5] + 1024) - a6[1]) & 0x7E00000 | (*(_DWORD *)(a5 + 4LL * a2[6] + 2048) - a6[2]) & 0xF800FFFF) >> 16;
    ++a4;
    v10 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v10 = (unsigned __int16 *)((char *)v10 + a8);
  }
  result = *a1;
  v14 = v12 + 4;
  if ( (result & 0x80u) == 0LL )
  {
    while ( (unsigned __int64)v14 < a3 )
    {
      result = v14[4];
      v15 = v10[3];
      v16 = (*(_DWORD *)(a5 + 4LL * v14[5] + 1024) - v10[4]) & 0x7E00000 | (*(_DWORD *)(a5 + 4LL * v14[6] + 2048)
                                                                          - v10[5]) & 0xF8000000 | (((*(_DWORD *)(a5 + 4LL * *v14) - *v10) & 0x1F0000 | (*(_DWORD *)(a5 + 4LL * v14[1] + 1024) - v10[1]) & 0x7E00000 | (*(_DWORD *)(a5 + 4LL * v14[2] + 2048) - v10[2]) & 0xF800FFFF) >> 16);
      v10 += 6;
      *(_DWORD *)a4 = ~((*(_DWORD *)(a5 + 4 * result) - v15) & 0x1F0000 | v16);
      a4 += 2;
      if ( (unsigned __int64)v10 >= a7 )
      {
        result = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v14 += 8;
    }
  }
  else
  {
    while ( (unsigned __int64)v14 < a3 )
    {
      if ( v14[3] )
      {
        result = *v14;
        *a4 = ~((*(_DWORD *)(a5 + 4 * result) - *v10) & 0x1F0000 | (*(_DWORD *)(a5 + 4LL * v14[1] + 1024) - v10[1]) & 0x7E00000 | (*(_DWORD *)(a5 + 4LL * v14[2] + 2048) - v10[2]) & 0xF800FFFF) >> 16;
      }
      ++a4;
      v10 += 3;
      if ( (unsigned __int64)v10 >= a7 )
      {
        result = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v14 += 4;
    }
  }
  if ( HIBYTE(a9) )
  {
    if ( v14[3] )
    {
      result = *v14;
      *a4 = ~((*(_DWORD *)(a5 + 4 * result) - *v10) & 0x1F0000 | (*(_DWORD *)(a5 + 4LL * v14[1] + 1024) - v10[1]) & 0x7E00000 | (*(_DWORD *)(a5 + 4LL * v14[2] + 2048) - v10[2]) & 0xF800FFFF) >> 16;
    }
  }
  return result;
}
