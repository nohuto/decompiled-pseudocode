/*
 * XREFs of rimExtractData @ 0x1C00F1486
 * Callers:
 *     rimExtractTouchInfo @ 0x1C00F160A (rimExtractTouchInfo.c)
 *     rimExtractPenInfo @ 0x1C01D778C (rimExtractPenInfo.c)
 *     rimExtractPointerDeviceUsages @ 0x1C01D78A0 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimExtractData(__int64 a1, __int16 a2, __int16 a3, int a4, _DWORD *a5)
{
  unsigned int v5; // r10d
  __int64 v6; // rax
  unsigned int v7; // r11d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned int v13; // r11d
  unsigned int v14; // r9d
  int v15; // edx
  int v16; // eax

  v5 = 0;
  v6 = a1 + 30;
  v7 = 0;
  while ( 1 )
  {
    if ( *(_WORD *)(v6 - 2) == a2 && *(_WORD *)v6 == a3 )
    {
      v10 = *(unsigned int *)(v6 + 2);
      if ( (_DWORD)v10 != -1 )
        break;
    }
    ++v7;
    v6 += 16LL;
    if ( v7 >= 6 )
      return v5;
  }
  v11 = 60 * v10;
  v12 = 2LL * v7;
  v5 = *(_DWORD *)(60 * v10 + a1 + 452);
  v13 = *(_DWORD *)(a1 + 16LL * v7 + 40);
  v14 = *(_DWORD *)(a1 + 8 * v12 + 36);
  if ( v13 != v14 )
  {
    v15 = *(_DWORD *)(v11 + a1 + 436);
    v16 = *(_DWORD *)(v11 + a1 + 432);
    if ( v15 != v16 )
    {
      if ( (int)v5 >= v16 )
      {
        if ( (int)v5 <= v15 )
          v5 = v14 + (int)((v13 - v14) * (v5 - v16)) / (v15 - v16);
        else
          v5 = v13;
      }
      else
      {
        v5 = v14;
      }
    }
  }
  if ( a5 )
    *a5 |= a4;
  return v5;
}
