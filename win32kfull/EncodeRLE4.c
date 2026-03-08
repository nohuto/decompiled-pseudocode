/*
 * XREFs of EncodeRLE4 @ 0x1C02F2C7C
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C008A530 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 * Callees:
 *     ?WriteEncoded8@@YAHEPEAEIPEBE@Z @ 0x1C02EF798 (-WriteEncoded8@@YAHEPEAEIPEBE@Z.c)
 *     ?WriteAbsolute4@@YAHPEBEPEAEH0@Z @ 0x1C02F0F14 (-WriteAbsolute4@@YAHPEBEPEAEH0@Z.c)
 */

__int64 __fastcall EncodeRLE4(__int64 a1, unsigned __int8 *a2, int a3, unsigned int a4, int a5)
{
  unsigned int v5; // r10d
  unsigned __int8 *v6; // rbx
  int v7; // r15d
  int v8; // edi
  unsigned __int8 *v9; // r9
  unsigned int v10; // eax
  unsigned int v11; // edx
  const unsigned __int8 *v12; // r11
  unsigned __int8 v13; // r10
  const unsigned __int8 *v14; // r13
  int v15; // esi
  int v16; // ecx
  char *i; // r14
  char v18; // r12
  int v19; // eax
  int v20; // eax
  bool v21; // zf
  int v22; // r8d
  int v23; // r8d
  int v24; // eax
  unsigned int v26; // [rsp+20h] [rbp-48h]
  unsigned __int8 *v27; // [rsp+28h] [rbp-40h]
  __int64 v28; // [rsp+70h] [rbp+8h]
  int v29; // [rsp+80h] [rbp+18h]
  unsigned int v31; // [rsp+90h] [rbp+28h]

  v29 = a3;
  v28 = a1;
  v5 = a4;
  v6 = a2;
  v7 = 0;
  v8 = 0;
  v9 = &a2[a5];
  v27 = v9;
  v10 = ((unsigned int)(a3 + 7) >> 1) & 0x7FFFFFFC;
  v26 = v10;
  v11 = 0;
  while ( 1 )
  {
    v31 = v11;
    if ( v11 >= v5 )
      break;
    v12 = (const unsigned __int8 *)(a1 + v11 * v10);
    v13 = *v12;
    v14 = &v12[(unsigned __int64)(unsigned int)(a3 + 1) >> 1];
    v15 = 0;
    v16 = 2;
    for ( i = (char *)(v12 + 1); i <= (char *)v14; ++i )
    {
      v18 = -1;
      if ( i != (char *)v14 )
        v18 = *i;
      if ( !v15 )
      {
        v15 = (v18 == (char)v13) + 1;
LABEL_32:
        v13 = v18;
        goto LABEL_33;
      }
      if ( v15 == 1 )
      {
        if ( v18 == v13 || v16 == 254 )
        {
          if ( v16 == 254 )
          {
            if ( i == (char *)v14 && (a3 & 1) != 0 )
              v7 = 1;
            v15 = 0;
          }
          else
          {
            v15 = 2;
            v7 = 2;
          }
          v20 = WriteAbsolute4(v12, v6, v16 - v7, v9);
          if ( v6 )
          {
            if ( !v20 )
              return 0LL;
            v6 += v20;
          }
          v8 += v20;
          v12 = (const unsigned __int8 *)i;
          v16 = v7;
          v7 = 0;
        }
        goto LABEL_32;
      }
      if ( v15 == 2 && (v18 != v13 || v16 == 254) )
      {
        if ( i == (char *)v14 && (a3 & 1) != 0 )
          LOBYTE(v16) = v16 - 1;
        v19 = WriteEncoded8(v13, v6, v16, v9);
        if ( v6 )
        {
          if ( !v19 )
            return 0LL;
          v6 += v19;
        }
        v8 += v19;
        v12 = (const unsigned __int8 *)i;
        v16 = 0;
        v15 = 0;
        goto LABEL_32;
      }
LABEL_33:
      v16 += 2;
      v9 = v27;
      a3 = v29;
    }
    if ( v16 > 3 )
    {
      v21 = (a3 & 1) == 0;
      v22 = v16 - 1;
      if ( v21 )
        v22 = v16;
      v23 = v22 - 2;
      if ( v15 == 1 )
        v24 = WriteAbsolute4(v12, v6, v23, v9);
      else
        v24 = WriteEncoded8(v13, v6, v23, v9);
      if ( v6 )
      {
        if ( v24 )
        {
          v6 += v24;
          goto LABEL_43;
        }
        return 0LL;
      }
LABEL_43:
      v8 += v24;
      v9 = v27;
      a3 = v29;
    }
    v8 += 2;
    if ( v6 )
    {
      if ( v6 + 2 > v9 )
        return 0LL;
      *(_WORD *)v6 = 0;
      v6 += 2;
    }
    v11 = v31 + 1;
    v10 = v26;
    v5 = a4;
    a1 = v28;
  }
  if ( v6 )
  {
    if ( v6 + 2 > v9 )
      return 0LL;
    *v6 = 0;
    v6[1] = 1;
  }
  return (unsigned int)(v8 + 2);
}
