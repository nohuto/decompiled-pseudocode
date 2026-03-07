__int64 __fastcall bSrcCopySRLE8D32(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r8
  unsigned __int8 *v2; // r9
  __int64 v3; // r14
  __int64 v4; // rdx
  int v5; // ebx
  int v6; // ebp
  int v7; // esi
  int v8; // ecx
  unsigned int v9; // r13d
  int v10; // r15d
  int v11; // r12d
  int v12; // edx
  int v13; // eax
  unsigned int v15; // r10d
  unsigned int v16; // r11d
  __int64 v17; // rdi
  unsigned int v18; // r10d
  int v19; // ebp
  unsigned int v20; // ecx
  int v21; // r11d
  __int64 v22; // rax
  _DWORD *v23; // rbx
  __int64 v24; // rax
  unsigned __int8 *v25; // r9
  int v26; // ecx
  int v27; // ebp
  int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rcx
  _DWORD *v31; // rdi
  int v32; // [rsp+0h] [rbp-58h]
  __int64 v33; // [rsp+8h] [rbp-50h]
  int v35; // [rsp+68h] [rbp+10h]
  int v36; // [rsp+70h] [rbp+18h]
  int v37; // [rsp+78h] [rbp+20h]

  v1 = a1;
  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_QWORD *)a1 + 9);
  v5 = *((_DWORD *)a1 + 23);
  v6 = *((_DWORD *)a1 + 11) / 4;
  v7 = *((_DWORD *)a1 + 15);
  v8 = *((_DWORD *)a1 + 14);
  v9 = *(_DWORD *)(v4 + 64);
  v10 = *((_DWORD *)v1 + 22);
  v11 = *((_DWORD *)v1 + 24);
  v35 = v6;
  v12 = *((_DWORD *)v1 + 32);
  v33 = *(_QWORD *)(*(_QWORD *)v1 + 16LL);
  v13 = *((_DWORD *)v1 + 25);
  v36 = v13;
  v32 = v5;
  v37 = v8;
  if ( v7 < v5 )
    return 1LL;
  v15 = *((_DWORD *)v1 + 30) + 2;
  if ( v15 > v9 )
    return 0LL;
  while ( 1 )
  {
    v16 = *v2;
    v17 = v2[1];
    v2 += 2;
    if ( !v16 )
      break;
    if ( v7 < v13 && v12 < v11 && (int)(v16 + v12) > v10 )
    {
      v27 = *(_DWORD *)(v33 + 4 * v17);
      if ( v12 < v10 )
      {
        v16 += v12 - v10;
        v12 = v10;
      }
      if ( (int)(v16 + v12) <= v11 )
      {
        v28 = 0;
      }
      else
      {
        v28 = v12 + v16 - v11;
        v16 = v11 - v12;
      }
      if ( v16 )
      {
        v29 = v12;
        v12 += v16;
        v30 = v16;
        v31 = (_DWORD *)(v3 + 4 * v29);
        while ( v30 )
        {
          *v31++ = v27;
          --v30;
        }
      }
      v12 += v28;
LABEL_43:
      v6 = v35;
      goto LABEL_45;
    }
    v12 += v16;
LABEL_45:
    v15 += 2;
    if ( v15 > v9 )
      return 0LL;
    v8 = v37;
    v5 = v32;
    v13 = v36;
  }
  if ( (_DWORD)v17 )
  {
    if ( (_DWORD)v17 == 1 )
      return 0LL;
    if ( (_DWORD)v17 != 2 )
    {
      v18 = v17 + v15;
      if ( v18 > v9 )
        return 0LL;
      v19 = v17 & 1;
      if ( v7 >= v36 || v12 >= v11 || (int)v17 + v12 <= v10 )
      {
        v12 += v17;
        v25 = &v2[v17];
      }
      else
      {
        if ( v12 < v10 )
        {
          v20 = v10 - v12;
          v12 = v10;
          v2 += v20;
          LODWORD(v17) = v17 - v20;
        }
        if ( (int)v17 + v12 <= v11 )
        {
          v21 = 0;
        }
        else
        {
          v21 = v12 + v17 - v11;
          LODWORD(v17) = v11 - v12;
        }
        if ( (_DWORD)v17 )
        {
          v22 = v12;
          v12 += v17;
          v23 = (_DWORD *)(v3 + 4 * v22);
          do
          {
            v24 = *v2++;
            *v23++ = *(_DWORD *)(v33 + 4 * v24);
            LODWORD(v17) = v17 - 1;
          }
          while ( (_DWORD)v17 );
          v1 = a1;
        }
        v12 += v21;
        v25 = &v2[v21];
      }
      v15 = v19 + v18;
      v2 = &v25[v19];
      goto LABEL_43;
    }
    v15 += 2;
    if ( v15 > v9 )
      return 0LL;
    v26 = v2[1];
    v12 += *v2;
    v2 += 2;
    v7 -= v26;
    v3 += 4LL * v26 * v6;
    if ( v7 < v5 )
    {
      *((_DWORD *)v1 + 34) = v12;
      goto LABEL_27;
    }
    goto LABEL_45;
  }
  --v7;
  v12 = v8;
  v3 += 4LL * v6;
  if ( v7 >= v5 )
    goto LABEL_45;
  *((_DWORD *)v1 + 34) = v8;
LABEL_27:
  *((_QWORD *)v1 + 14) = v3;
  *((_QWORD *)v1 + 13) = v2;
  *((_DWORD *)v1 + 31) = v15;
  *((_DWORD *)v1 + 33) = v7;
  return 1LL;
}
