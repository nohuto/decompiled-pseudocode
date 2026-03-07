void __fastcall WIDEPENOBJ::vDetermineDrawVertex(WIDEPENOBJ *this, struct EVECTORFX *a2, struct LINEDATA *a3)
{
  _DWORD *v4; // r9
  int *v5; // r15
  __int64 *v6; // rsi
  __int64 *v7; // rdi
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // r11
  char *v10; // r14
  unsigned int v11; // ecx
  char *i; // rbx
  char *v13; // r8
  unsigned __int64 v14; // r9
  _DWORD *v15; // rbx
  __int64 *v16; // r12
  int *v17; // r14
  __int64 *v18; // r13
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // r8
  _DWORD *v21; // rax

  v4 = *(_DWORD **)(*((_QWORD *)this + 1) + 32LL);
  *((_QWORD *)a3 + 1) = v4;
  if ( *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) == *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) )
  {
    v5 = (int *)((char *)a2 + 4);
    v6 = (__int64 *)((char *)a3 + 24);
    v7 = (__int64 *)((char *)a3 + 32);
    v8 = *(int *)a2 * (__int64)(v4[9] - v4[7]) - *((int *)a2 + 1) * (__int64)(v4[8] - v4[6]);
    *((_QWORD *)a3 + 3) = v8;
    *((_QWORD *)a3 + 4) = -(__int64)v8;
    v9 = v8 >> 63;
  }
  else
  {
    v15 = v4;
    v16 = (__int64 *)((char *)a3 + 24);
    v17 = (int *)((char *)a2 + 4);
    v18 = (__int64 *)((char *)a3 + 32);
    while ( 1 )
    {
      v5 = (int *)((char *)a2 + 4);
      v7 = v18;
      v6 = v16;
      v19 = *(int *)a2 * (__int64)(v15[9] - v15[7]) - *v17 * (__int64)(v15[8] - v15[6]);
      *v16 = v19;
      v9 = v19 >> 63;
      v20 = *(int *)a2 * (__int64)(v15[2 * (v15[5] - 2) + 9] - v15[2 * (v15[5] - 2) + 7])
          - *v17 * (__int64)(v15[2 * (v15[5] - 2) + 8] - v15[2 * (v15[5] - 2) + 6]);
      *v18 = v20;
      if ( (unsigned int)v9 != v20 >> 63 )
        break;
      v21 = *(_DWORD **)v15;
      v15 = v21;
      if ( !v21 )
        break;
      *((_QWORD *)a3 + 1) = v21;
      v4 = v21;
    }
  }
  v10 = (char *)(v4 + 6);
  v11 = *(_DWORD *)a3 | 1;
  if ( !(_DWORD)v9 )
    v11 = *(_DWORD *)a3 & 0xFFFFFFFE;
  *(_DWORD *)a3 = v11;
  for ( i = (char *)&v4[2 * (v4[5] - 2) + 6]; ; v10 += 8 * ((i - v10) >> 4) )
  {
    while ( 1 )
    {
      v13 = &v10[8 * ((i - v10) >> 4)];
      v14 = *(int *)a2 * (__int64)(*((_DWORD *)v13 + 3) - *((_DWORD *)v13 + 1))
          - *v5 * (__int64)(*((_DWORD *)v13 + 2) - *(_DWORD *)v13);
      if ( v14 >> 63 == (_DWORD)v9 )
        break;
      *v7 = v14;
      if ( v13 == v10 + 8 )
        goto LABEL_16;
      i = &v10[8 * ((i - v10) >> 4)];
    }
    *v6 = v14;
    if ( i == v13 + 8 )
      break;
  }
  v13 = i;
LABEL_16:
  *((_QWORD *)a3 + 2) = v13;
  *v6 = abs64(*v6);
  *v7 = abs64(*v7);
}
