/*
 * XREFs of EncodeRLE8 @ 0x1C02F0CC0
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C008A530 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 * Callees:
 *     ?WriteAbsolute8@@YAHPEBEPEAEH0@Z @ 0x1C02EF69C (-WriteAbsolute8@@YAHPEBEPEAEH0@Z.c)
 *     ?WriteEncoded8@@YAHEPEAEIPEBE@Z @ 0x1C02EF798 (-WriteEncoded8@@YAHEPEAEIPEBE@Z.c)
 */

__int64 __fastcall EncodeRLE8(__int64 a1, unsigned __int8 *a2, int a3, unsigned int a4, int a5)
{
  unsigned __int8 *v5; // rbx
  int v6; // r13d
  int v7; // edi
  unsigned __int8 *v8; // r12
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned __int8 *v11; // r11
  unsigned __int8 v12; // r10
  unsigned __int8 *v13; // rax
  int v14; // esi
  int v15; // ecx
  char *i; // r15
  char v17; // r14
  int v18; // eax
  int v19; // eax
  int v20; // r8d
  int v21; // eax
  unsigned int v23; // [rsp+20h] [rbp-48h]
  unsigned __int8 *v24; // [rsp+28h] [rbp-40h]
  __int64 v25; // [rsp+70h] [rbp+8h]
  int v26; // [rsp+80h] [rbp+18h]
  unsigned int v27; // [rsp+88h] [rbp+20h]
  unsigned int v28; // [rsp+90h] [rbp+28h]

  v27 = a4;
  v26 = a3;
  v25 = a1;
  v5 = a2;
  v6 = 0;
  v7 = 0;
  v8 = &a2[a5];
  v9 = (a3 + 3) & 0xFFFFFFFC;
  v23 = v9;
  v10 = 0;
  while ( 1 )
  {
    v28 = v10;
    if ( v10 >= a4 )
      break;
    v11 = (unsigned __int8 *)(a1 + v10 * v9);
    v12 = *v11;
    v13 = &v11[a3];
    v24 = v13;
    v14 = 0;
    v15 = 1;
    for ( i = (char *)(v11 + 1); i <= (char *)v13; ++i )
    {
      v17 = -1;
      if ( i != (char *)v13 )
        v17 = *i;
      if ( !v14 )
      {
        v14 = (v17 == (char)v12) + 1;
LABEL_23:
        v12 = v17;
        goto LABEL_24;
      }
      if ( v14 == 1 )
      {
        if ( v17 == v12 || v15 == 255 )
        {
          LOBYTE(v6) = v15 != 255;
          v14 = v15 != 255 ? 2 : 0;
          v19 = WriteAbsolute8(v11, v5, v15 - v6, v8);
          if ( v5 )
          {
            if ( !v19 )
              return 0LL;
            v5 += v19;
          }
          v7 += v19;
          v11 = (unsigned __int8 *)i;
          v15 = v6;
          v6 = 0;
        }
        goto LABEL_23;
      }
      if ( v14 == 2 && (v17 != v12 || v15 == 255) )
      {
        v18 = WriteEncoded8(v12, v5, v15, v8);
        if ( v5 )
        {
          if ( !v18 )
            return 0LL;
          v5 += v18;
        }
        v7 += v18;
        v11 = (unsigned __int8 *)i;
        v15 = 0;
        v14 = 0;
        goto LABEL_23;
      }
LABEL_24:
      ++v15;
      v13 = v24;
    }
    if ( v15 > 1 )
    {
      v20 = v15 - 1;
      if ( v14 == 1 )
        v21 = WriteAbsolute8(v11, v5, v20, v8);
      else
        v21 = WriteEncoded8(v12, v5, v20, v8);
      if ( v5 )
      {
        if ( v21 )
        {
          v5 += v21;
          goto LABEL_32;
        }
        return 0LL;
      }
LABEL_32:
      v7 += v21;
    }
    v7 += 2;
    if ( v5 )
    {
      if ( v5 + 2 > v8 )
        return 0LL;
      *(_WORD *)v5 = 0;
      v5 += 2;
    }
    v10 = v28 + 1;
    v9 = v23;
    a3 = v26;
    a4 = v27;
    a1 = v25;
  }
  if ( v5 )
  {
    if ( v5 + 2 > v8 )
      return 0LL;
    *v5 = 0;
    v5[1] = 1;
  }
  return (unsigned int)(v7 + 2);
}
