/*
 * XREFs of PfPrefetchRequestPrepareForVerify @ 0x1407660C4
 * Callers:
 *     PfPrefetchRequestVerify @ 0x140765CC0 (PfPrefetchRequestVerify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfPrefetchRequestPrepareForVerify(unsigned int *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned int v5; // r9d
  unsigned __int64 v6; // rbx
  unsigned int v7; // ecx
  unsigned __int64 v8; // rsi
  unsigned int v9; // edx
  unsigned __int64 v10; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned __int64 v16; // rbx
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v21; // edx

  v3 = a2;
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  v5 = 128;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 48) = 0LL;
  *(_DWORD *)(a3 + 56) = 0;
  v6 = a1[2];
  v7 = a1[8];
  if ( (_DWORD)v6 )
  {
    if ( !v7 )
      return 4000LL;
    if ( v7 < 0x80 )
      return 4200LL;
    v8 = a2;
    if ( v6 > a2 / 0x28uLL )
      return 4300LL;
    v9 = 40 * v6;
    if ( v7 >= (unsigned int)v3 || v9 >= (unsigned int)v3 || v7 > (unsigned int)v3 - v9 )
      return 4400LL;
    v5 = v7 + v9;
    *(_DWORD *)a3 = v7;
    *(_DWORD *)(a3 + 4) = v7 + v9;
    *(_DWORD *)(a3 + 8) = a1[2];
  }
  else
  {
    if ( v7 )
      return 4100LL;
    v8 = a2;
  }
  v10 = a1[3];
  v11 = a1[10];
  if ( (_DWORD)v10 )
  {
    if ( !v11 )
      return 5000LL;
    if ( v11 < v5 )
      return 5200LL;
    if ( v10 > v3 / 0x30 )
      return 5300LL;
    v12 = 48 * v10;
    if ( v11 >= (unsigned int)v3 || v12 >= (unsigned int)v3 || v11 > (unsigned int)v3 - v12 )
      return 5400LL;
    v5 = v11 + v12;
    *(_DWORD *)(a3 + 12) = v11;
    *(_DWORD *)(a3 + 16) = v11 + v12;
    *(_DWORD *)(a3 + 20) = a1[3];
  }
  else if ( v11 )
  {
    return 5100LL;
  }
  v13 = a1[4];
  v14 = a1[12];
  if ( v13 )
  {
    if ( !v14 )
      return 6000LL;
    if ( v14 < v5 )
      return 6200LL;
    if ( v13 > (unsigned int)v3 >> 4 )
      return 6300LL;
    v15 = 16 * v13;
    if ( v14 >= (unsigned int)v3 || v15 >= (unsigned int)v3 || v14 > (unsigned int)v3 - v15 )
      return 6400LL;
    v5 = v14 + v15;
    *(_DWORD *)(a3 + 24) = v14;
    *(_DWORD *)(a3 + 28) = v14 + v15;
    *(_DWORD *)(a3 + 32) = a1[4];
  }
  else if ( v14 )
  {
    return 6100LL;
  }
  v16 = a1[5];
  v17 = a1[14];
  if ( (_DWORD)v16 )
  {
    if ( !v17 )
      return 7000LL;
    if ( v17 < v5 )
      return 7200LL;
    if ( v16 > v8 / 0x28 )
      return 7300LL;
    v21 = 40 * v16;
    if ( v17 >= (unsigned int)v3 || v21 >= (unsigned int)v3 || v17 > (unsigned int)v3 - v21 )
      return 7400LL;
    v5 = v17 + v21;
    *(_DWORD *)(a3 + 36) = v17;
    *(_DWORD *)(a3 + 40) = v17 + v21;
    *(_DWORD *)(a3 + 44) = a1[5];
  }
  else if ( v17 )
  {
    return 7100LL;
  }
  v18 = a1[6];
  v19 = a1[16];
  if ( v18 )
  {
    if ( v19 )
    {
      if ( v19 < v5 )
      {
        return 8200LL;
      }
      else
      {
        if ( v19 < (unsigned int)v3 && v18 < (unsigned int)v3 && v19 <= (unsigned int)v3 - v18 )
        {
          v5 = v19 + v18;
          *(_DWORD *)(a3 + 48) = v19;
          *(_DWORD *)(a3 + 52) = v19 + v18;
          return (_DWORD)v3 != v5 ? 0x2328 : 0;
        }
        return 8300LL;
      }
    }
    else
    {
      return 8000LL;
    }
  }
  else
  {
    if ( !v19 )
      return (_DWORD)v3 != v5 ? 0x2328 : 0;
    return 8100LL;
  }
}
