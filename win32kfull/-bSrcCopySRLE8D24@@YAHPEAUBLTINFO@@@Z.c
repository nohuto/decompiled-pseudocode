__int64 __fastcall bSrcCopySRLE8D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  int v2; // r15d
  int v3; // r12d
  int v4; // r8d
  unsigned int v5; // ebp
  int v6; // r13d
  unsigned __int8 *v7; // r11
  __int64 v8; // r14
  int v9; // esi
  int v10; // r10d
  int v11; // eax
  int v12; // ecx
  unsigned int v14; // ebx
  int v15; // edx
  __int64 v16; // rdi
  unsigned int v17; // ebx
  int v18; // r15d
  unsigned int v19; // ecx
  __int64 v20; // r12
  int v21; // ebp
  __int64 v22; // r13
  __int64 v23; // rax
  int v24; // r8d
  __int64 v25; // rax
  unsigned __int8 *v26; // r11
  int v27; // ecx
  int v28; // r12d
  int v29; // r8d
  int v30; // edi
  int v31; // r10d
  __int64 v32; // rdi
  int v33; // [rsp+0h] [rbp-68h]
  int v34; // [rsp+4h] [rbp-64h]
  int v35; // [rsp+8h] [rbp-60h]
  int v36; // [rsp+Ch] [rbp-5Ch]
  __int64 v37; // [rsp+10h] [rbp-58h]
  unsigned int v39; // [rsp+78h] [rbp+10h]
  int v40; // [rsp+80h] [rbp+18h]
  int v41; // [rsp+88h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 23);
  v3 = *((_DWORD *)a1 + 11);
  v4 = *((_DWORD *)a1 + 22);
  v5 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v6 = *((_DWORD *)a1 + 24);
  v7 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  v9 = *((_DWORD *)a1 + 15);
  v10 = *((_DWORD *)a1 + 32);
  v37 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v11 = *((_DWORD *)a1 + 25);
  v12 = *((_DWORD *)a1 + 14);
  v35 = v12;
  v36 = v3;
  v39 = v5;
  v33 = v4;
  v41 = v6;
  v34 = v2;
  v40 = v11;
  if ( v9 < v2 )
    return 1LL;
  v14 = *((_DWORD *)v1 + 30) + 2;
  if ( v14 > v5 )
    return 0LL;
  while ( 1 )
  {
    v15 = *v7;
    v16 = v7[1];
    v7 += 2;
    if ( v15 )
    {
      if ( v9 >= v11 || v10 >= v6 || v15 + v10 <= v4 )
      {
        v10 += v15;
      }
      else
      {
        v28 = *(_DWORD *)(v37 + 4 * v16);
        if ( v10 < v4 )
        {
          v15 += v10 - v4;
          v10 = v4;
        }
        if ( v15 + v10 <= v6 )
        {
          v29 = 0;
        }
        else
        {
          v29 = v10 + v15 - v6;
          v15 = v6 - v10;
        }
        v30 = 3 * v10;
        v31 = v15 + v10;
        if ( v15 )
        {
          v32 = (unsigned int)(v30 + 2);
          do
          {
            *(_BYTE *)(v32 + v8) = BYTE2(v28);
            *(_BYTE *)((unsigned int)(v32 - 2) + v8) = v28;
            *(_BYTE *)((unsigned int)(v32 - 1) + v8) = BYTE1(v28);
            v32 = (unsigned int)(v32 + 3);
            --v15;
          }
          while ( v15 );
          v5 = v39;
        }
        v10 = v29 + v31;
      }
      goto LABEL_44;
    }
    if ( !(_DWORD)v16 )
      break;
    if ( (_DWORD)v16 == 1 )
      return 0LL;
    if ( (_DWORD)v16 == 2 )
    {
      v14 += 2;
      if ( v14 > v5 )
        return 0LL;
      v27 = v7[1];
      v10 += *v7;
      v7 += 2;
      v9 -= v27;
      v8 += v27 * v3;
      if ( v9 < v2 )
      {
        *((_DWORD *)v1 + 34) = v10;
        goto LABEL_27;
      }
    }
    else
    {
      v17 = v16 + v14;
      if ( v17 > v5 )
        return 0LL;
      v18 = v16 & 1;
      if ( v9 >= v40 || v10 >= v6 || (int)v16 + v10 <= v4 )
      {
        v10 += v16;
        v26 = &v7[v16];
      }
      else
      {
        if ( v10 < v4 )
        {
          v19 = v4 - v10;
          v10 = v4;
          v7 += v19;
          LODWORD(v16) = v16 - v19;
        }
        v20 = (unsigned int)(3 * v10);
        if ( (int)v16 + v10 <= v6 )
        {
          v21 = 0;
        }
        else
        {
          v21 = v10 + v16 - v6;
          LODWORD(v16) = v6 - v10;
        }
        if ( (_DWORD)v16 )
        {
          v22 = (unsigned int)(v20 + 2);
          v10 += v16;
          do
          {
            v23 = *v7++;
            v24 = *(_DWORD *)(v37 + 4 * v23);
            *(_BYTE *)(v20 + v8) = v24;
            v25 = (unsigned int)(v22 - 1);
            v20 = (unsigned int)(v20 + 3);
            *(_BYTE *)(v22 + v8) = BYTE2(v24);
            v22 = (unsigned int)(v22 + 3);
            *(_BYTE *)(v25 + v8) = BYTE1(v24);
            LODWORD(v16) = v16 - 1;
          }
          while ( (_DWORD)v16 );
          v1 = a1;
          v6 = v41;
        }
        v26 = &v7[v21];
        v10 += v21;
        v5 = v39;
      }
      v14 = v18 + v17;
      v7 = &v26[v18];
    }
LABEL_44:
    v14 += 2;
    if ( v14 > v5 )
      return 0LL;
    v4 = v33;
    v2 = v34;
    v12 = v35;
    v3 = v36;
    v11 = v40;
  }
  --v9;
  v8 += v3;
  v10 = v12;
  if ( v9 >= v2 )
    goto LABEL_44;
  *((_DWORD *)v1 + 34) = v12;
LABEL_27:
  *((_QWORD *)v1 + 14) = v8;
  *((_QWORD *)v1 + 13) = v7;
  *((_DWORD *)v1 + 31) = v14;
  *((_DWORD *)v1 + 33) = v9;
  return 1LL;
}
