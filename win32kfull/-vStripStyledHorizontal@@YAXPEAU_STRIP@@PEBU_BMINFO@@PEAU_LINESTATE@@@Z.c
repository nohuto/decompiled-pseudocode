void __fastcall vStripStyledHorizontal(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r14
  int v5; // ebx
  int *v6; // r11
  int v7; // r13d
  int v8; // edi
  char *v9; // r15
  int v10; // r10d
  int v11; // r9d
  int v12; // eax
  int v13; // ecx
  int v14; // r9d
  int v15; // ebx
  __int64 v16; // rax
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  int v19; // [rsp+38h] [rbp+8h]

  v3 = (char *)a1 + 28;
  v5 = *((_DWORD *)a1 + 6);
  v6 = (int *)*((_QWORD *)a1 + 2);
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 20);
  v9 = (char *)a1 + 4 * *(int *)a1 + 28;
  v10 = *((_DWORD *)a3 + 5);
  v11 = 4 * *((_DWORD *)a1 + 2);
  v19 = *((_DWORD *)a3 + 1);
  v12 = *((_DWORD *)a1 + 1);
  v13 = -4 * *((_DWORD *)a1 + 2);
  if ( (v12 & 8) == 0 )
    v13 = v11;
  do
  {
    v14 = *(_DWORD *)v3;
    do
    {
      if ( !v8 )
        *v6 = v19 & *(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v5) ^ *v6 & (v7 | ~*(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v5));
      v15 = v5 + 1;
      v10 -= *((_DWORD *)a3 + 2);
      v16 = v15;
      v5 = *((_DWORD *)a2 + 7) & v15;
      v6 += v16 >> *((_DWORD *)a2 + 6);
      if ( v10 <= 0 )
      {
        v17 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
        *((_QWORD *)a3 + 7) = v17;
        if ( (unsigned __int64)v17 > *((_QWORD *)a3 + 6) )
        {
          v17 = (_DWORD *)*((_QWORD *)a3 + 5);
          *((_QWORD *)a3 + 7) = v17;
        }
        v10 += *v17;
        v8 = v8 == 0;
      }
      --v14;
    }
    while ( v14 );
    v10 -= *((_DWORD *)a3 + 3);
    v6 = (int *)((char *)v6 + v13);
    if ( v10 <= 0 )
    {
      v18 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
      *((_QWORD *)a3 + 7) = v18;
      if ( (unsigned __int64)v18 > *((_QWORD *)a3 + 6) )
      {
        v18 = (_DWORD *)*((_QWORD *)a3 + 5);
        *((_QWORD *)a3 + 7) = v18;
      }
      v10 += *v18;
      v8 = v8 == 0;
    }
    v3 += 4;
  }
  while ( v3 != v9 );
  *((_DWORD *)a1 + 6) = v5;
  *((_QWORD *)a1 + 2) = v6;
  *((_DWORD *)a3 + 20) = v8;
  *((_DWORD *)a3 + 5) = v10;
}
