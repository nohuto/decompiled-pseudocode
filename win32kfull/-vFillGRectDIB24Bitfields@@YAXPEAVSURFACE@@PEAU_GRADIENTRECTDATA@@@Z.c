void __fastcall vFillGRectDIB24Bitfields(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // r13d
  struct _GRADIENTRECTDATA *v3; // rbx
  __int64 v4; // r11
  int v5; // edi
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  unsigned __int8 v9; // rdx^6
  unsigned __int8 v10; // r9^6
  unsigned __int8 v11; // r10^6
  __int64 v12; // rax
  _BYTE *v13; // rbp
  const void *v14; // r11
  _BYTE *v15; // rsi
  _BYTE *v16; // rdi
  int v17; // eax
  char *v18; // rsi
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // r13
  int v24; // eax
  __int64 v25; // [rsp+20h] [rbp-78h]
  __int64 v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+38h] [rbp-60h]
  __int64 v28; // [rsp+40h] [rbp-58h]
  _BYTE *v29; // [rsp+48h] [rbp-50h]
  int v30; // [rsp+A0h] [rbp+8h]
  __int64 v31; // [rsp+A0h] [rbp+8h]
  __int64 v33; // [rsp+A8h] [rbp+10h]
  __int64 v34; // [rsp+B0h] [rbp+18h]
  _BYTE *v35; // [rsp+B8h] [rbp+20h]
  __int64 v36; // [rsp+B8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = a2;
  v4 = *((_QWORD *)a2 + 21);
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  v25 = v4;
  v30 = v5;
  if ( *((_DWORD *)a2 + 38) )
  {
    v20 = *((int *)a2 + 45);
    v33 = *((_QWORD *)a2 + 10);
    v31 = *((_QWORD *)a2 + 11);
    v34 = *((_QWORD *)a2 + 12);
    if ( (int)v20 > 0 )
    {
      v6 += *((_QWORD *)a2 + 10) * v20;
      v7 += *((_QWORD *)a2 + 11) * v20;
      v8 += *((_QWORD *)a2 + 12) * v20;
    }
    v21 = *((_QWORD *)a1 + 10) + 3 * *((_DWORD *)a2 + 8) + (__int64)(*((_DWORD *)a2 + 9) * v2);
    if ( v5 )
    {
      v36 = *((int *)a1 + 22);
      do
      {
        --v5;
        v22 = v21;
        v23 = v21 + 3 * *((_DWORD *)v3 + 10);
        v24 = XEPALOBJ::ulDispatchGFPEFunction(
                v4,
                *(unsigned int *)(*(_QWORD *)v4 + 100LL),
                BYTE6(v6) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8));
        if ( v21 != v23 )
        {
          do
          {
            *(_WORD *)v22 = v24;
            *(_BYTE *)(v22 + 2) = BYTE2(v24);
            v22 += 3LL;
          }
          while ( v22 != v23 );
        }
        v6 += v33;
        v7 += v31;
        v8 += v34;
        v21 += v36;
        v4 = v25;
      }
      while ( v5 );
    }
  }
  else
  {
    v9 = BYTE6(*((_QWORD *)a2 + 8));
    v10 = BYTE6(v7);
    v11 = BYTE6(v6);
    v27 = *((_QWORD *)v3 + 15);
    v12 = *((int *)v3 + 44);
    v28 = *((_QWORD *)v3 + 16);
    if ( (int)v12 > 0 )
    {
      v6 += *((_QWORD *)v3 + 14) * v12;
      v7 += *((_QWORD *)v3 + 15) * v12;
      v11 = BYTE6(v6);
      v10 = BYTE6(v7);
      v8 += *((_QWORD *)v3 + 16) * v12;
      v9 = BYTE6(v8);
    }
    v13 = (_BYTE *)(*((_QWORD *)a1 + 10) + *((_DWORD *)v3 + 9) * v2 + 3 * *((_DWORD *)v3 + 8));
    v14 = v13;
    v35 = v13;
    v29 = v13;
    v15 = v13;
    if ( v13 != &v13[3 * *((_DWORD *)v3 + 10)] )
    {
      v26 = *((_QWORD *)v3 + 14);
      v16 = &v13[3 * *((_DWORD *)v3 + 10)];
      do
      {
        v17 = XEPALOBJ::ulDispatchGFPEFunction(
                v25,
                *(unsigned int *)(*(_QWORD *)v25 + 100LL),
                v11 | ((v10 | (v9 << 8)) << 8));
        *v13 = v17;
        v6 += v26;
        v7 += v27;
        v8 += v28;
        v9 = BYTE6(v8);
        v13[1] = BYTE1(v17);
        v10 = BYTE6(v7);
        v13[2] = BYTE2(v17);
        v11 = BYTE6(v6);
        v13 += 3;
      }
      while ( v13 != v16 );
      v15 = v29;
      v3 = a2;
      v14 = v29;
      v5 = v30;
    }
    v18 = &v15[v2];
    v19 = v5 - 1;
    while ( v19 > 0 )
    {
      --v19;
      memmove(v18, v14, 3 * *((_DWORD *)v3 + 10));
      v14 = v35;
      v18 += v2;
    }
  }
}
