/*
 * XREFs of vSrcOpaqCopyS1D32 @ 0x1C0137E50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

char *__fastcall vSrcOpaqCopyS1D32(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v10; // edi
  char *result; // rax
  int v12; // r14d
  unsigned __int8 *v13; // r9
  int v14; // ebx
  char *v15; // rsi
  char *v16; // r11
  unsigned __int8 v17; // dl
  char *v18; // r8
  unsigned __int64 v19; // rcx
  char *i; // r10
  unsigned int v21; // r8d
  unsigned __int8 v22; // dl
  unsigned __int64 v23; // rcx
  _DWORD v24[2]; // [rsp+0h] [rbp-28h]

  v10 = a2 & 7;
  result = (char *)(a4 + 4LL * a5);
  v12 = 8 - v10;
  v13 = (unsigned __int8 *)(a1 + ((__int64)a2 >> 3));
  v14 = a3 - ((v10 + a6 - a5 + 7) >> 3);
  v15 = &result[a8 * a7];
  v24[0] = a10;
  v24[1] = a9;
  if ( a6 - a5 < 8 - v10 )
    v12 = a6 - a5;
  do
  {
    v16 = &result[4 * (a6 - a5)];
    if ( v10 )
    {
      v17 = *v13++ << v10;
      v18 = &result[4 * v12];
      do
      {
        v19 = v17;
        v17 *= 2;
        *(_DWORD *)result = *(_DWORD *)((char *)v24 + ((v19 >> 5) & 4));
        result += 4;
      }
      while ( result != v18 );
    }
    for ( i = &result[(v16 - result) & 0xFFFFFFFFFFFFFFE0uLL]; result != i; result += 32 )
    {
      v21 = *v13++;
      *(_DWORD *)result = *(_DWORD *)((char *)v24 + ((v21 >> 5) & 4));
      *((_DWORD *)result + 1) = *(_DWORD *)((char *)v24 + ((v21 >> 4) & 4));
      *((_DWORD *)result + 2) = *(_DWORD *)((char *)v24 + ((v21 >> 3) & 4));
      *((_DWORD *)result + 3) = *(_DWORD *)((char *)v24 + ((v21 >> 2) & 4));
      *((_DWORD *)result + 4) = *(_DWORD *)((char *)v24 + ((v21 >> 1) & 4));
      *((_DWORD *)result + 5) = *(_DWORD *)((char *)v24 + (v21 & 4));
      *((_DWORD *)result + 6) = *(_DWORD *)((char *)v24 + 2 * (v21 & 2));
      *((_DWORD *)result + 7) = v24[v21 & 1];
    }
    if ( result != v16 )
    {
      v22 = *v13++;
      do
      {
        v23 = v22;
        v22 *= 2;
        *(_DWORD *)result = *(_DWORD *)((char *)v24 + ((v23 >> 5) & 4));
        result += 4;
      }
      while ( result != v16 );
    }
    result += a7 - 4 * (a6 - a5);
    v13 += v14;
  }
  while ( result != v15 );
  return result;
}
