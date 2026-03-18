/*
 * XREFs of ?bSrcCopySRLE8D32@@YAHPEAUBLTINFO@@@Z @ 0x1C0001490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

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
  unsigned int v14; // r10d
  unsigned int v15; // r11d
  __int64 v16; // rdi
  int v17; // ebp
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rcx
  _DWORD *v21; // rdi
  unsigned int v23; // r10d
  int v24; // ebp
  unsigned int v25; // ecx
  int v26; // r11d
  __int64 v27; // rax
  _DWORD *v28; // rbx
  __int64 v29; // rax
  unsigned __int8 *v30; // r9
  int v31; // ecx
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
  v14 = *((_DWORD *)v1 + 30) + 2;
  if ( v14 > v9 )
    return 0LL;
  while ( 1 )
  {
    v15 = *v2;
    v16 = v2[1];
    v2 += 2;
    if ( v15 )
    {
      if ( v7 < v13 && v12 < v11 && (int)(v15 + v12) > v10 )
      {
        v17 = *(_DWORD *)(v33 + 4 * v16);
        if ( v12 < v10 )
        {
          v15 -= v10 - v12;
          v12 = v10;
        }
        if ( (int)(v15 + v12) > v11 )
        {
          v18 = v12 + v15 - v11;
          v15 = v11 - v12;
        }
        else
        {
          v18 = 0;
        }
        if ( v15 )
        {
          v19 = v12;
          v12 += v15;
          v20 = v15;
          v21 = (_DWORD *)(v3 + 4 * v19);
          while ( v20 )
          {
            *v21++ = v17;
            --v20;
          }
        }
        v12 += v18;
LABEL_16:
        v6 = v35;
        goto LABEL_17;
      }
      v12 += v15;
      goto LABEL_17;
    }
    if ( !(_DWORD)v16 )
    {
      --v7;
      v12 = v8;
      v3 += 4LL * v6;
      if ( v7 < v5 )
      {
        *((_DWORD *)v1 + 34) = v8;
        goto LABEL_26;
      }
      goto LABEL_17;
    }
    if ( (_DWORD)v16 == 1 )
      return 0LL;
    if ( (_DWORD)v16 != 2 )
    {
      v23 = v16 + v14;
      if ( v23 > v9 )
        return 0LL;
      v24 = v16 & 1;
      if ( v7 >= v36 || v12 >= v11 || (int)v16 + v12 <= v10 )
      {
        v12 += v16;
        v30 = &v2[v16];
      }
      else
      {
        if ( v12 < v10 )
        {
          v25 = v10 - v12;
          v12 = v10;
          v2 += v25;
          LODWORD(v16) = v16 - v25;
        }
        if ( (int)v16 + v12 <= v11 )
        {
          v26 = 0;
        }
        else
        {
          v26 = v12 + v16 - v11;
          LODWORD(v16) = v11 - v12;
        }
        if ( (_DWORD)v16 )
        {
          v27 = v12;
          v12 += v16;
          v28 = (_DWORD *)(v3 + 4 * v27);
          do
          {
            v29 = *v2++;
            *v28++ = *(_DWORD *)(v33 + 4 * v29);
            LODWORD(v16) = v16 - 1;
          }
          while ( (_DWORD)v16 );
          v1 = a1;
        }
        v12 += v26;
        v30 = &v2[v26];
      }
      v14 = v24 + v23;
      v2 = &v30[v24];
      goto LABEL_16;
    }
    v14 += 2;
    if ( v14 > v9 )
      return 0LL;
    v31 = v2[1];
    v12 += *v2;
    v2 += 2;
    v7 -= v31;
    v3 += 4LL * v31 * v6;
    if ( v7 < v5 )
      break;
LABEL_17:
    v14 += 2;
    if ( v14 > v9 )
      return 0LL;
    v8 = v37;
    v5 = v32;
    v13 = v36;
  }
  *((_DWORD *)v1 + 34) = v12;
LABEL_26:
  *((_QWORD *)v1 + 14) = v3;
  *((_QWORD *)v1 + 13) = v2;
  *((_DWORD *)v1 + 31) = v14;
  *((_DWORD *)v1 + 33) = v7;
  return 1LL;
}
