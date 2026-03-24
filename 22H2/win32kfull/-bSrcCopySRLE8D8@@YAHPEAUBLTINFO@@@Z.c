/*
 * XREFs of ?bSrcCopySRLE8D8@@YAHPEAUBLTINFO@@@Z @ 0x1C014E470
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall bSrcCopySRLE8D8(struct BLTINFO *a1)
{
  int v2; // r10d
  int v3; // r15d
  int v4; // r8d
  unsigned int v5; // r11d
  int v6; // r9d
  unsigned __int8 *v7; // rsi
  __int64 v8; // r13
  int v9; // r12d
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // ebp
  unsigned int v14; // r14d
  __int64 v15; // rdx
  int v16; // edx
  int v17; // r15d
  unsigned int v18; // ebp
  int v19; // r10d
  int v20; // r8d
  _BYTE *v21; // r9
  __int64 v22; // rax
  unsigned __int8 *v23; // rsi
  unsigned int v25; // ecx
  int v26; // ecx
  unsigned int v27; // [rsp+20h] [rbp-68h]
  int v28; // [rsp+24h] [rbp-64h]
  int v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  int v31; // [rsp+90h] [rbp+8h]
  int v32; // [rsp+98h] [rbp+10h]
  int v33; // [rsp+A0h] [rbp+18h]
  int v34; // [rsp+A8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 23);
  v3 = *((_DWORD *)a1 + 11);
  v4 = *((_DWORD *)a1 + 22);
  v5 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v6 = *((_DWORD *)a1 + 24);
  v7 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  v9 = *((_DWORD *)a1 + 15);
  v10 = *((_DWORD *)a1 + 32);
  v30 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v11 = *((_DWORD *)a1 + 25);
  v12 = *((_DWORD *)a1 + 14);
  v29 = v12;
  v33 = v3;
  v27 = v5;
  v31 = v4;
  v32 = v6;
  v28 = v2;
  v34 = v11;
  if ( v9 < v2 )
    return 1LL;
  v13 = *((_DWORD *)a1 + 30) + 2;
  if ( v13 > v5 )
    return 0LL;
  while ( 1 )
  {
    v14 = *v7;
    v15 = v7[1];
    v7 += 2;
    if ( v14 )
    {
      if ( v10 >= v6 || v9 >= v11 || (int)(v14 + v10) <= v4 )
      {
        v10 += v14;
      }
      else
      {
        v16 = *(_DWORD *)(v30 + 4 * v15);
        if ( v10 < v4 )
        {
          v14 += v10 - v4;
          v10 = v4;
        }
        if ( (int)(v14 + v10) > v6 )
        {
          v17 = v10 + v14 - v6;
          v14 = v6 - v10;
        }
        else
        {
          v17 = 0;
        }
        if ( v14 )
        {
          memset((void *)(v8 + v10), v16, v14);
          v4 = v31;
          v10 += v14;
          v6 = v32;
          v5 = v27;
        }
        v10 += v17;
        v3 = v33;
      }
      goto LABEL_14;
    }
    if ( !(_DWORD)v15 )
    {
      --v9;
      v8 += v3;
      v10 = v12;
      if ( v9 < v2 )
      {
        *((_DWORD *)a1 + 34) = v12;
        goto LABEL_39;
      }
      goto LABEL_14;
    }
    if ( (_DWORD)v15 == 1 )
      return 0LL;
    if ( (_DWORD)v15 != 2 )
    {
      v18 = v15 + v13;
      if ( v18 > v5 )
        return 0LL;
      v19 = v15 & 1;
      if ( v9 >= v34 || v10 >= v6 || (int)v15 + v10 <= v4 )
      {
        v10 += v15;
        v23 = &v7[v15];
      }
      else
      {
        if ( v10 < v4 )
        {
          v25 = v4 - v10;
          v10 = v4;
          v7 += v25;
          LODWORD(v15) = v15 - v25;
        }
        if ( (int)v15 + v10 > v6 )
        {
          v20 = v10 + v15 - v6;
          LODWORD(v15) = v6 - v10;
        }
        else
        {
          v20 = 0;
        }
        if ( (_DWORD)v15 )
        {
          v21 = (_BYTE *)(v8 + v10);
          v10 += v15;
          do
          {
            v22 = *v7++;
            *v21++ = *(_BYTE *)(v30 + 4 * v22);
            LODWORD(v15) = v15 - 1;
          }
          while ( (_DWORD)v15 );
          v6 = v32;
          v3 = v33;
        }
        v23 = &v7[v20];
        v10 += v20;
        v4 = v31;
      }
      v13 = v19 + v18;
      v7 = &v23[v19];
      goto LABEL_14;
    }
    v13 += 2;
    if ( v13 > v5 )
      return 0LL;
    v26 = v7[1];
    v10 += *v7;
    v7 += 2;
    v9 -= v26;
    v8 += v26 * v3;
    if ( v9 < v2 )
      break;
LABEL_14:
    v13 += 2;
    if ( v13 > v5 )
      return 0LL;
    v2 = v28;
    v12 = v29;
    v11 = v34;
  }
  *((_DWORD *)a1 + 34) = v10;
LABEL_39:
  *((_QWORD *)a1 + 14) = v8;
  *((_QWORD *)a1 + 13) = v7;
  *((_DWORD *)a1 + 31) = v13;
  *((_DWORD *)a1 + 33) = v9;
  return 1LL;
}
