/*
 * XREFs of ?vSrcOpaqCopyS1D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0296B40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall vSrcOpaqCopyS1D32(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10)
{
  int v10; // edi
  const unsigned __int8 *v11; // rbx
  unsigned __int8 *v12; // r9
  int v13; // esi
  __int64 v14; // r15
  unsigned __int8 *v15; // r11
  unsigned __int8 *v16; // r10
  unsigned __int8 v17; // dl
  unsigned __int8 *v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int8 *v20; // r8
  unsigned int v21; // edx
  unsigned __int8 v22; // cl
  unsigned __int64 v23; // rax
  _DWORD v24[2]; // [rsp+0h] [rbp-10h]

  v10 = a2 & 7;
  v11 = &a1[(__int64)a2 >> 3];
  v12 = &a4[4 * a5];
  v13 = a6 - a5;
  v14 = a3 - ((v10 + a6 - a5 + 7) >> 3);
  v15 = &v12[a8 * a7];
  if ( a6 - a5 >= 8 - v10 )
    v13 = 8 - v10;
  v24[0] = a10;
  v24[1] = a9;
  do
  {
    v16 = &v12[4 * (a6 - a5)];
    if ( v10 )
    {
      v17 = *v11++ << v10;
      v18 = &v12[4 * v13];
      do
      {
        v19 = v17;
        v17 *= 2;
        *(_DWORD *)v12 = *(_DWORD *)((char *)v24 + ((v19 >> 5) & 4));
        v12 += 4;
      }
      while ( v12 != v18 );
    }
    v20 = &v12[(v16 - v12) & 0xFFFFFFFFFFFFFFE0uLL];
    while ( v12 != v20 )
    {
      v21 = *v11++;
      *(_DWORD *)v12 = *(_DWORD *)((char *)v24 + ((v21 >> 5) & 4));
      *((_DWORD *)v12 + 1) = *(_DWORD *)((char *)v24 + ((v21 >> 4) & 4));
      *((_DWORD *)v12 + 2) = *(_DWORD *)((char *)v24 + ((v21 >> 3) & 4));
      *((_DWORD *)v12 + 3) = *(_DWORD *)((char *)v24 + ((v21 >> 2) & 4));
      *((_DWORD *)v12 + 4) = *(_DWORD *)((char *)v24 + ((v21 >> 1) & 4));
      *((_DWORD *)v12 + 5) = *(_DWORD *)((char *)v24 + (v21 & 4));
      *((_DWORD *)v12 + 6) = *(_DWORD *)((char *)v24 + 2 * (v21 & 2));
      *((_DWORD *)v12 + 7) = v24[v21 & 1];
      v12 += 32;
    }
    if ( v12 != v16 )
    {
      v22 = *v11++;
      do
      {
        v23 = v22;
        v22 *= 2;
        *(_DWORD *)v12 = *(_DWORD *)((char *)v24 + ((v23 >> 5) & 4));
        v12 += 4;
      }
      while ( v12 != v16 );
    }
    v12 += a7 - 4 * (a6 - a5);
    v11 += v14;
  }
  while ( v12 != v15 );
}
