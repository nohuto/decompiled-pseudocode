/*
 * XREFs of ?bSrcCopySRLE8D16@@YAHPEAUBLTINFO@@@Z @ 0x1C02EF7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE8D16(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r8
  int v2; // ebx
  unsigned __int8 *v3; // r9
  __int64 v4; // r14
  int v5; // r15d
  int v6; // r12d
  int v7; // esi
  int v8; // ebp
  unsigned int v9; // r13d
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  unsigned int v14; // r10d
  unsigned int v15; // r11d
  __int64 v16; // rdi
  unsigned int v17; // r10d
  int v18; // ebp
  unsigned int v19; // ecx
  int v20; // r11d
  __int64 v21; // rax
  _WORD *v22; // rbx
  __int64 v23; // rax
  unsigned __int8 *v24; // r9
  int v25; // ecx
  int v26; // ebp
  int v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rcx
  _WORD *v30; // rdi
  int v31; // [rsp+0h] [rbp-58h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  int v34; // [rsp+68h] [rbp+10h]
  int v35; // [rsp+70h] [rbp+18h]
  int v36; // [rsp+78h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 23);
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 22);
  v6 = *((_DWORD *)a1 + 24);
  v7 = *((_DWORD *)a1 + 15);
  v34 = *((_DWORD *)a1 + 11) / 2;
  v8 = v34;
  v31 = v2;
  v9 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v10 = *((_DWORD *)a1 + 32);
  v32 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v11 = *((_DWORD *)a1 + 25);
  v12 = *((_DWORD *)a1 + 14);
  v36 = v12;
  v35 = v11;
  if ( v7 < v2 )
    return 1LL;
  v14 = *((_DWORD *)v1 + 30) + 2;
  if ( v14 > v9 )
    return 0LL;
  while ( 1 )
  {
    v15 = *v3;
    v16 = v3[1];
    v3 += 2;
    if ( !v15 )
      break;
    if ( v7 < v11 && v10 < v6 && (int)(v15 + v10) > v5 )
    {
      v26 = *(_DWORD *)(v32 + 4 * v16);
      if ( v10 < v5 )
      {
        v15 += v10 - v5;
        v10 = v5;
      }
      if ( (int)(v15 + v10) <= v6 )
      {
        v27 = 0;
      }
      else
      {
        v27 = v10 + v15 - v6;
        v15 = v6 - v10;
      }
      if ( v15 )
      {
        v28 = v10;
        v10 += v15;
        v29 = v15;
        v30 = (_WORD *)(v4 + 2 * v28);
        while ( v29 )
        {
          *v30++ = v26;
          --v29;
        }
      }
      v10 += v27;
LABEL_43:
      v8 = v34;
      goto LABEL_45;
    }
    v10 += v15;
LABEL_45:
    v14 += 2;
    if ( v14 > v9 )
      return 0LL;
    v12 = v36;
    v2 = v31;
    v11 = v35;
  }
  if ( (_DWORD)v16 )
  {
    if ( (_DWORD)v16 == 1 )
      return 0LL;
    if ( (_DWORD)v16 != 2 )
    {
      v17 = v16 + v14;
      if ( v17 > v9 )
        return 0LL;
      v18 = v16 & 1;
      if ( v7 >= v35 || v10 >= v6 || (int)v16 + v10 <= v5 )
      {
        v10 += v16;
        v24 = &v3[v16];
      }
      else
      {
        if ( v10 < v5 )
        {
          v19 = v5 - v10;
          v10 = v5;
          v3 += v19;
          LODWORD(v16) = v16 - v19;
        }
        if ( (int)v16 + v10 <= v6 )
        {
          v20 = 0;
        }
        else
        {
          v20 = v10 + v16 - v6;
          LODWORD(v16) = v6 - v10;
        }
        if ( (_DWORD)v16 )
        {
          v21 = v10;
          v10 += v16;
          v22 = (_WORD *)(v4 + 2 * v21);
          do
          {
            v23 = *v3++;
            *v22++ = *(_WORD *)(v32 + 4 * v23);
            LODWORD(v16) = v16 - 1;
          }
          while ( (_DWORD)v16 );
          v1 = a1;
        }
        v24 = &v3[v20];
        v10 += v20;
      }
      v14 = v18 + v17;
      v3 = &v24[v18];
      goto LABEL_43;
    }
    v14 += 2;
    if ( v14 > v9 )
      return 0LL;
    v25 = v3[1];
    v10 += *v3;
    v3 += 2;
    v7 -= v25;
    v4 += 2LL * v25 * v8;
    if ( v7 < v2 )
    {
      *((_DWORD *)v1 + 34) = v10;
      goto LABEL_27;
    }
    goto LABEL_45;
  }
  --v7;
  v10 = v12;
  v4 += 2LL * v8;
  if ( v7 >= v2 )
    goto LABEL_45;
  *((_DWORD *)v1 + 34) = v12;
LABEL_27:
  *((_QWORD *)v1 + 14) = v4;
  *((_QWORD *)v1 + 13) = v3;
  *((_DWORD *)v1 + 31) = v14;
  *((_DWORD *)v1 + 33) = v7;
  return 1LL;
}
