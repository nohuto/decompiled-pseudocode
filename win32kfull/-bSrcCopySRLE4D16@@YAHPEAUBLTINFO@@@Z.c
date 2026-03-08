/*
 * XREFs of ?bSrcCopySRLE4D16@@YAHPEAUBLTINFO@@@Z @ 0x1C02F0FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D16(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  int v2; // r15d
  int v3; // r12d
  unsigned __int8 *v4; // r10
  __int64 v5; // r14
  __int64 v6; // r13
  int v7; // ebp
  int v8; // r8d
  unsigned int v9; // esi
  int v10; // eax
  int v11; // ecx
  __int64 result; // rax
  unsigned int v13; // edi
  unsigned int v14; // edx
  unsigned __int8 *v15; // r10
  unsigned __int64 v16; // rbx
  unsigned int v17; // edi
  BOOL v18; // r15d
  unsigned int v19; // ecx
  __int64 v20; // rcx
  unsigned int v21; // esi
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rax
  _WORD *v25; // r12
  unsigned __int64 v26; // rax
  __int16 v27; // cx
  __int64 v28; // rax
  unsigned __int64 v29; // r10
  int v30; // eax
  unsigned __int8 *v31; // r10
  int v32; // ecx
  int v33; // eax
  int v34; // esi
  __int64 v35; // rcx
  int v36; // r15d
  unsigned int v37; // edx
  __int16 v38; // bx
  __int16 v39; // r12
  __int64 v40; // rax
  _WORD *v41; // rcx
  __int64 v42; // rax
  int v43; // [rsp+0h] [rbp-68h]
  int v44; // [rsp+4h] [rbp-64h]
  int v45; // [rsp+8h] [rbp-60h]
  int v46; // [rsp+Ch] [rbp-5Ch]
  __int64 v47; // [rsp+10h] [rbp-58h]
  int v49; // [rsp+78h] [rbp+10h]
  int v50; // [rsp+80h] [rbp+18h]
  unsigned int v51; // [rsp+88h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 23);
  v3 = *((_DWORD *)a1 + 24);
  v4 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((int *)a1 + 22);
  v7 = *((_DWORD *)a1 + 15);
  v8 = *((_DWORD *)a1 + 32);
  v50 = *((_DWORD *)a1 + 11) / 2;
  v46 = v3;
  v43 = v2;
  v9 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v51 = v9;
  v47 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v10 = *((_DWORD *)a1 + 25);
  v11 = *((_DWORD *)a1 + 14);
  v49 = v11;
  v44 = v10;
  if ( v7 < v2 )
    return 1LL;
  v13 = *((_DWORD *)v1 + 30) + 2;
  if ( v13 > v9 )
    return 0LL;
  while ( 1 )
  {
    v14 = *v4;
    v15 = v4 + 1;
    v16 = *v15;
    v4 = v15 + 1;
    if ( !v14 )
      break;
    if ( v7 < v10 && v8 < v3 && (int)(v14 + v8) > (int)v6 )
    {
      if ( v8 < (int)v6 )
      {
        v33 = v6 - v8;
        v8 = v6;
        v14 -= v33;
      }
      if ( (int)(v14 + v8) <= v3 )
      {
        v34 = 0;
      }
      else
      {
        v34 = v8 + v14 - v3;
        v14 = v3 - v8;
      }
      v35 = v16 & 0xF;
      v36 = v14 & 1;
      v37 = v14 >> 1;
      v38 = *(_WORD *)(v47 + 4 * (v16 >> 4));
      v39 = *(_WORD *)(v47 + 4 * v35);
      if ( v37 )
      {
        v40 = v8;
        v8 += 2 * v37;
        v41 = (_WORD *)(v5 + 2 * v40);
        do
        {
          *v41 = v38;
          v41[1] = v39;
          v41 += 2;
          --v37;
        }
        while ( v37 );
      }
      if ( v36 )
      {
        v42 = v8++;
        *(_WORD *)(v5 + 2 * v42) = v38;
      }
      v8 += v34;
      v9 = v51;
      goto LABEL_48;
    }
    v8 += v14;
LABEL_51:
    v13 += 2;
    if ( v13 > v9 )
      return 0LL;
    v3 = v46;
    v10 = v44;
  }
  if ( (_DWORD)v16 )
  {
    if ( (_DWORD)v16 == 1 )
      return 0LL;
    if ( (_DWORD)v16 == 2 )
    {
      v13 += 2;
      if ( v13 > v9 )
        return 0LL;
      v30 = *v4;
      v31 = v4 + 1;
      v8 += v30;
      v32 = *v31;
      v4 = v31 + 1;
      v7 -= v32;
      v5 += 2LL * v32 * v50;
      if ( v7 < v2 )
      {
        *((_DWORD *)v1 + 34) = v8;
        goto LABEL_31;
      }
    }
    else
    {
      v17 = ((unsigned int)(v16 + 1) >> 1) + v13;
      if ( v17 > v9 )
        return 0LL;
      v18 = (((_DWORD)v16 + 1) & 2) != 0;
      if ( v7 >= v44 || v8 >= v3 || (int)v16 + v8 <= (int)v6 )
      {
        v8 += v16;
        v29 = (unsigned __int64)&v4[(unsigned __int64)(unsigned int)(v16 + 1) >> 1];
      }
      else
      {
        if ( v8 < (int)v6 )
        {
          v19 = v6 - v8;
          v8 = v6;
          LODWORD(v16) = v16 - v19;
          v4 += (unsigned __int64)v19 >> 1;
          if ( (v19 & 1) != 0 )
          {
            v8 = v6 + 1;
            v20 = *v4++ & 0xF;
            LODWORD(v16) = v16 - 1;
            *(_WORD *)(v5 + 2 * v6) = *(_WORD *)(v47 + 4 * v20);
          }
        }
        if ( (int)v16 + v8 <= v3 )
        {
          v21 = 0;
        }
        else
        {
          v21 = v8 + v16 - v3;
          LODWORD(v16) = v3 - v8;
        }
        v22 = v16 & 1;
        v23 = (unsigned int)v16 >> 1;
        v45 = v22;
        if ( v23 )
        {
          v24 = v8;
          v8 += 2 * v23;
          v25 = (_WORD *)(v5 + 2 * v24);
          do
          {
            v26 = *v4++;
            v27 = *(_WORD *)(v47 + 4 * (v26 >> 4));
            v25[1] = *(_WORD *)(v47 + 4 * (v26 & 0xF));
            *v25 = v27;
            v25 += 2;
            --v23;
          }
          while ( v23 );
          v1 = a1;
          v22 = v45;
        }
        if ( v22 )
        {
          v28 = v8++;
          *(_WORD *)(v5 + 2 * v28) = *(_WORD *)(v47 + 4 * ((unsigned __int64)*v4 >> 4));
          v29 = (unsigned __int64)&v4[((unsigned __int64)v21 >> 1) + 1];
        }
        else
        {
          v29 = (unsigned __int64)&v4[(unsigned __int64)(v21 + 1) >> 1];
        }
        v8 += v21;
        v9 = v51;
      }
      v13 = v18 + v17;
      v4 = (unsigned __int8 *)(v18 + v29);
LABEL_48:
      v2 = v43;
    }
    v11 = v49;
    goto LABEL_51;
  }
  --v7;
  v8 = v11;
  v5 += 2LL * v50;
  if ( v7 >= v2 )
    goto LABEL_51;
  *((_DWORD *)v1 + 34) = v11;
LABEL_31:
  *((_QWORD *)v1 + 14) = v5;
  result = 1LL;
  *((_QWORD *)v1 + 13) = v4;
  *((_DWORD *)v1 + 31) = v13;
  *((_DWORD *)v1 + 33) = v7;
  return result;
}
