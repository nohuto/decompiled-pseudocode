__int64 __fastcall bSrcCopySRLE4D8(struct BLTINFO *a1)
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
  __int64 v20; // rdx
  unsigned int v21; // esi
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // r12
  _BYTE *v25; // r12
  unsigned __int64 v26; // rax
  char v27; // cl
  __int64 v28; // rcx
  unsigned __int64 v29; // r10
  int v30; // eax
  unsigned __int8 *v31; // r10
  int v32; // ecx
  int v33; // esi
  __int64 v34; // rcx
  int v35; // r15d
  unsigned int v36; // edx
  char v37; // bl
  char v38; // r12
  __int64 v39; // rcx
  _BYTE *v40; // rcx
  __int64 v41; // rax
  int v42; // [rsp+0h] [rbp-68h]
  int v43; // [rsp+4h] [rbp-64h]
  int v44; // [rsp+8h] [rbp-60h]
  int v45; // [rsp+Ch] [rbp-5Ch]
  __int64 v46; // [rsp+10h] [rbp-58h]
  int v48; // [rsp+78h] [rbp+10h]
  int v49; // [rsp+80h] [rbp+18h]
  unsigned int v50; // [rsp+88h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 23);
  v3 = *((_DWORD *)a1 + 24);
  v4 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((int *)a1 + 22);
  v7 = *((_DWORD *)a1 + 15);
  v8 = *((_DWORD *)a1 + 32);
  v49 = *((_DWORD *)a1 + 11);
  v45 = v3;
  v42 = v2;
  v9 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v50 = v9;
  v46 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v10 = *((_DWORD *)a1 + 25);
  v11 = *((_DWORD *)a1 + 14);
  v48 = v11;
  v43 = v10;
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
        v14 += v8 - v6;
        v8 = v6;
      }
      if ( (int)(v14 + v8) <= v3 )
      {
        v33 = 0;
      }
      else
      {
        v33 = v8 + v14 - v3;
        v14 = v3 - v8;
      }
      v34 = v16 & 0xF;
      v35 = v14 & 1;
      v36 = v14 >> 1;
      v37 = *(_BYTE *)(v46 + 4 * (v16 >> 4));
      v38 = *(_BYTE *)(v46 + 4 * v34);
      if ( v36 )
      {
        v39 = v8;
        v8 += 2 * v36;
        v40 = (_BYTE *)(v5 + v39);
        do
        {
          *v40 = v37;
          v40[1] = v38;
          v40 += 2;
          --v36;
        }
        while ( v36 );
      }
      if ( v35 )
      {
        v41 = v8++;
        *(_BYTE *)(v41 + v5) = v37;
      }
      v8 += v33;
      v9 = v50;
      goto LABEL_48;
    }
    v8 += v14;
LABEL_51:
    v13 += 2;
    if ( v13 > v9 )
      return 0LL;
    v3 = v45;
    v10 = v43;
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
      v5 += v32 * v49;
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
      if ( v7 >= v43 || v8 >= v3 || (int)v16 + v8 <= (int)v6 )
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
            *(_BYTE *)(v6 + v5) = *(_BYTE *)(v46 + 4 * v20);
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
        v44 = v22;
        if ( v23 )
        {
          v24 = v8;
          v8 += 2 * v23;
          v25 = (_BYTE *)(v5 + v24);
          do
          {
            v26 = *v4++;
            v27 = *(_BYTE *)(v46 + 4 * (v26 >> 4));
            v25[1] = *(_BYTE *)(v46 + 4 * (v26 & 0xF));
            *v25 = v27;
            v25 += 2;
            --v23;
          }
          while ( v23 );
          v1 = a1;
          v22 = v44;
        }
        if ( v22 )
        {
          v28 = v8++;
          *(_BYTE *)(v28 + v5) = *(_BYTE *)(v46 + 4 * ((unsigned __int64)*v4 >> 4));
          v29 = (unsigned __int64)&v4[((unsigned __int64)v21 >> 1) + 1];
        }
        else
        {
          v29 = (unsigned __int64)&v4[(unsigned __int64)(v21 + 1) >> 1];
        }
        v8 += v21;
        v9 = v50;
      }
      v13 = v18 + v17;
      v4 = (unsigned __int8 *)(v18 + v29);
LABEL_48:
      v2 = v42;
    }
    v11 = v48;
    goto LABEL_51;
  }
  --v7;
  v5 += v49;
  v8 = v11;
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
