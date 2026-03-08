/*
 * XREFs of ?vSrcOpaqCopyS1D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C02968C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall vSrcOpaqCopyS1D24(
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
  int v10; // esi
  unsigned __int8 *v11; // rdi
  const unsigned __int8 *v12; // r9
  unsigned __int8 *v13; // r14
  int v14; // ecx
  int v15; // edx
  __int64 v16; // r12
  __int64 v17; // r15
  __int64 v18; // rbx
  int v19; // r13d
  unsigned __int8 *v20; // r10
  unsigned __int8 v21; // dl
  unsigned __int8 *v22; // r8
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int8 *v25; // r11
  unsigned int v26; // r8d
  unsigned __int8 v27; // dl
  unsigned __int64 v28; // rcx
  __int64 v29; // rcx
  _DWORD v30[2]; // [rsp+0h] [rbp-10h]

  v10 = a2 & 7;
  v11 = &a4[3 * a5];
  v12 = &a1[(__int64)a2 >> 3];
  v13 = &v11[a8 * a7];
  v14 = a6 - a5;
  v15 = 3 * (a6 - a5);
  v16 = v15;
  v17 = a7 - v15;
  v18 = a3 - ((v10 + a6 - a5 + 7) >> 3);
  if ( a6 - a5 >= 8 - v10 )
    v14 = 8 - v10;
  v30[0] = a10;
  v30[1] = a9;
  v19 = 3 * v14;
  do
  {
    v20 = &v11[v16];
    if ( v10 )
    {
      v21 = *v12++ << v10;
      v22 = &v11[v19];
      do
      {
        v23 = v21;
        v21 *= 2;
        v24 = (v23 >> 5) & 4;
        *v11 = *((_BYTE *)v30 + v24);
        v11[1] = *((_BYTE *)v30 + v24 + 1);
        v11[2] = *((_BYTE *)v30 + v24 + 2);
        v11 += 3;
      }
      while ( v11 != v22 );
    }
    v25 = &v11[24 * ((v20 - v11) / 0x18uLL)];
    while ( v11 != v25 )
    {
      v26 = *v12++;
      *v11 = *((_BYTE *)v30 + ((v26 >> 5) & 4));
      v11[1] = *((_BYTE *)v30 + ((v26 >> 5) & 4) + 1);
      v11[2] = *((_BYTE *)v30 + ((v26 >> 5) & 4) + 2);
      v11[3] = *((_BYTE *)v30 + ((v26 >> 4) & 4));
      v11[4] = *((_BYTE *)v30 + ((v26 >> 4) & 4) + 1);
      v11[5] = *((_BYTE *)v30 + ((v26 >> 4) & 4) + 2);
      v11[6] = *((_BYTE *)v30 + ((v26 >> 3) & 4));
      v11[7] = *((_BYTE *)v30 + ((v26 >> 3) & 4) + 1);
      v11[8] = *((_BYTE *)v30 + ((v26 >> 3) & 4) + 2);
      v11[9] = *((_BYTE *)v30 + ((v26 >> 2) & 4));
      v11[10] = *((_BYTE *)v30 + ((v26 >> 2) & 4) + 1);
      v11[11] = *((_BYTE *)v30 + ((v26 >> 2) & 4) + 2);
      v11[12] = *((_BYTE *)v30 + ((v26 >> 1) & 4));
      v11[13] = *((_BYTE *)v30 + ((v26 >> 1) & 4) + 1);
      v11[14] = *((_BYTE *)v30 + ((v26 >> 1) & 4) + 2);
      v11[15] = *((_BYTE *)v30 + (v26 & 4));
      v11[16] = *((_BYTE *)v30 + (v26 & 4) + 1);
      v11[17] = *((_BYTE *)v30 + (v26 & 4) + 2);
      v11[18] = *((_BYTE *)v30 + 2 * (v26 & 2));
      v11[19] = *((_BYTE *)v30 + 2 * (v26 & 2) + 1);
      v11[20] = *((_BYTE *)v30 + 2 * (v26 & 2) + 2);
      v11[21] = v30[v26 & 1];
      v11[22] = BYTE1(v30[v26 & 1]);
      v11[23] = BYTE2(v30[v26 & 1]);
      v11 += 24;
    }
    if ( v11 != v20 )
    {
      v27 = *v12++;
      do
      {
        v28 = v27;
        v27 *= 2;
        v29 = (v28 >> 5) & 4;
        *v11 = *((_BYTE *)v30 + v29);
        v11[1] = *((_BYTE *)v30 + v29 + 1);
        v11[2] = *((_BYTE *)v30 + v29 + 2);
        v11 += 3;
      }
      while ( v11 != v20 );
    }
    v11 += v17;
    v12 += v18;
  }
  while ( v11 != v13 );
}
