/*
 * XREFs of ?bSrcCopySRLE4D32@@YAHPEAUBLTINFO@@@Z @ 0x1C02F1F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D32(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  unsigned __int8 *v2; // r10
  __int64 v3; // r14
  int v4; // eax
  int v5; // r15d
  int v6; // ebp
  int v7; // r12d
  unsigned int v8; // esi
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // r13
  int v12; // r8d
  int v13; // eax
  __int64 result; // rax
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned __int8 *v17; // r10
  unsigned __int64 v18; // rbx
  unsigned int v19; // edi
  BOOL v20; // r15d
  unsigned int v21; // ecx
  __int64 v22; // rcx
  unsigned int v23; // esi
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // rax
  _DWORD *v27; // r12
  unsigned __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  unsigned __int64 v31; // r10
  int v32; // eax
  unsigned __int8 *v33; // r10
  int v34; // ecx
  int v35; // eax
  int v36; // esi
  __int64 v37; // rcx
  int v38; // r15d
  unsigned int v39; // edx
  int v40; // ebx
  int v41; // r12d
  __int64 v42; // rax
  _DWORD *v43; // rcx
  __int64 v44; // rax
  int v45; // [rsp+0h] [rbp-68h]
  int v46; // [rsp+4h] [rbp-64h]
  int v47; // [rsp+8h] [rbp-60h]
  int v48; // [rsp+Ch] [rbp-5Ch]
  __int64 v49; // [rsp+10h] [rbp-58h]
  int v51; // [rsp+78h] [rbp+10h]
  int v52; // [rsp+80h] [rbp+18h]
  unsigned int v53; // [rsp+88h] [rbp+20h]

  v1 = a1;
  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 11) / 4;
  v5 = *((_DWORD *)a1 + 23);
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 24);
  v8 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v9 = *(_QWORD *)a1;
  v10 = *((_DWORD *)a1 + 14);
  v11 = *((int *)v1 + 22);
  v12 = *((_DWORD *)v1 + 32);
  v52 = v4;
  v49 = *(_QWORD *)(v9 + 16);
  v13 = *((_DWORD *)v1 + 25);
  v46 = v13;
  v53 = v8;
  v48 = v7;
  v45 = v5;
  v51 = v10;
  if ( v6 < v5 )
    return 1LL;
  v15 = *((_DWORD *)v1 + 30) + 2;
  if ( v15 > v8 )
    return 0LL;
  while ( 1 )
  {
    v16 = *v2;
    v17 = v2 + 1;
    v18 = *v17;
    v2 = v17 + 1;
    if ( !v16 )
      break;
    if ( v6 < v13 && v12 < v7 && (int)(v16 + v12) > (int)v11 )
    {
      if ( v12 < (int)v11 )
      {
        v35 = v11 - v12;
        v12 = v11;
        v16 -= v35;
      }
      if ( (int)(v16 + v12) <= v7 )
      {
        v36 = 0;
      }
      else
      {
        v36 = v12 + v16 - v7;
        v16 = v7 - v12;
      }
      v37 = v18 & 0xF;
      v38 = v16 & 1;
      v39 = v16 >> 1;
      v40 = *(_DWORD *)(v49 + 4 * (v18 >> 4));
      v41 = *(_DWORD *)(v49 + 4 * v37);
      if ( v39 )
      {
        v42 = v12;
        v12 += 2 * v39;
        v43 = (_DWORD *)(v3 + 4 * v42);
        do
        {
          *v43 = v40;
          v43[1] = v41;
          v43 += 2;
          --v39;
        }
        while ( v39 );
      }
      if ( v38 )
      {
        v44 = v12++;
        *(_DWORD *)(v3 + 4 * v44) = v40;
      }
      v12 += v36;
      v8 = v53;
      goto LABEL_48;
    }
    v12 += v16;
LABEL_51:
    v15 += 2;
    if ( v15 > v8 )
      return 0LL;
    v7 = v48;
    v13 = v46;
  }
  if ( (_DWORD)v18 )
  {
    if ( (_DWORD)v18 == 1 )
      return 0LL;
    if ( (_DWORD)v18 == 2 )
    {
      v15 += 2;
      if ( v15 > v8 )
        return 0LL;
      v32 = *v2;
      v33 = v2 + 1;
      v12 += v32;
      v34 = *v33;
      v2 = v33 + 1;
      v6 -= v34;
      v3 += 4LL * v34 * v52;
      if ( v6 < v5 )
      {
        *((_DWORD *)v1 + 34) = v12;
        goto LABEL_31;
      }
    }
    else
    {
      v19 = ((unsigned int)(v18 + 1) >> 1) + v15;
      if ( v19 > v8 )
        return 0LL;
      v20 = (((_DWORD)v18 + 1) & 2) != 0;
      if ( v6 >= v46 || v12 >= v7 || (int)v18 + v12 <= (int)v11 )
      {
        v12 += v18;
        v31 = (unsigned __int64)&v2[(unsigned __int64)(unsigned int)(v18 + 1) >> 1];
      }
      else
      {
        if ( v12 < (int)v11 )
        {
          v21 = v11 - v12;
          v12 = v11;
          LODWORD(v18) = v18 - v21;
          v2 += (unsigned __int64)v21 >> 1;
          if ( (v21 & 1) != 0 )
          {
            v12 = v11 + 1;
            v22 = *v2++ & 0xF;
            LODWORD(v18) = v18 - 1;
            *(_DWORD *)(v3 + 4 * v11) = *(_DWORD *)(v49 + 4 * v22);
          }
        }
        if ( (int)v18 + v12 <= v7 )
        {
          v23 = 0;
        }
        else
        {
          v23 = v12 + v18 - v7;
          LODWORD(v18) = v7 - v12;
        }
        v24 = v18 & 1;
        v25 = (unsigned int)v18 >> 1;
        v47 = v24;
        if ( v25 )
        {
          v26 = v12;
          v12 += 2 * v25;
          v27 = (_DWORD *)(v3 + 4 * v26);
          do
          {
            v28 = *v2++;
            v29 = *(_DWORD *)(v49 + 4 * (v28 >> 4));
            LODWORD(v28) = *(_DWORD *)(v49 + 4 * (v28 & 0xF));
            *v27 = v29;
            v27[1] = v28;
            v27 += 2;
            --v25;
          }
          while ( v25 );
          v1 = a1;
          v24 = v47;
        }
        if ( v24 )
        {
          v30 = v12++;
          *(_DWORD *)(v3 + 4 * v30) = *(_DWORD *)(v49 + 4 * ((unsigned __int64)*v2 >> 4));
          v31 = (unsigned __int64)&v2[((unsigned __int64)v23 >> 1) + 1];
        }
        else
        {
          v31 = (unsigned __int64)&v2[(unsigned __int64)(v23 + 1) >> 1];
        }
        v12 += v23;
        v8 = v53;
      }
      v15 = v20 + v19;
      v2 = (unsigned __int8 *)(v20 + v31);
LABEL_48:
      v5 = v45;
    }
    v10 = v51;
    goto LABEL_51;
  }
  --v6;
  v12 = v10;
  v3 += 4LL * v52;
  if ( v6 >= v5 )
    goto LABEL_51;
  *((_DWORD *)v1 + 34) = v10;
LABEL_31:
  *((_QWORD *)v1 + 14) = v3;
  result = 1LL;
  *((_QWORD *)v1 + 13) = v2;
  *((_DWORD *)v1 + 31) = v15;
  *((_DWORD *)v1 + 33) = v6;
  return result;
}
