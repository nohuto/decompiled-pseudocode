void __fastcall vStripStyledVertical(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // rsi
  int v4; // r11d
  int *v6; // r10
  int v7; // r13d
  char *v8; // r15
  int v9; // ebx
  int v10; // edx
  int v11; // r9d
  int v12; // eax
  int v13; // edi
  int v14; // ecx
  __int64 v15; // r12
  __int64 v16; // rax
  int v17; // ebp
  int v18; // ecx
  int v19; // r9d
  _DWORD *v20; // rax
  int v21; // r11d
  __int64 v22; // rax
  _DWORD *v23; // rax

  v3 = (char *)a1 + 28;
  v4 = *((_DWORD *)a1 + 6);
  v6 = (int *)*((_QWORD *)a1 + 2);
  v7 = *((_DWORD *)a3 + 1);
  v8 = (char *)a1 + 4 * *(int *)a1 + 28;
  v9 = *((_DWORD *)a3 + 20);
  v10 = *((_DWORD *)a3 + 5);
  v11 = 4 * *((_DWORD *)a1 + 2);
  v12 = *((_DWORD *)a1 + 1);
  v13 = *(_DWORD *)a3;
  v14 = -4 * *((_DWORD *)a1 + 2);
  if ( (v12 & 8) == 0 )
    v14 = v11;
  v15 = v14;
  do
  {
    v16 = *((_QWORD *)a2 + 1);
    v17 = *(_DWORD *)v3;
    v18 = v7 & *(_DWORD *)(v16 + 4LL * v4);
    v19 = v13 | ~*(_DWORD *)(v16 + 4LL * v4);
    do
    {
      if ( !v9 )
        *v6 = v18 ^ *v6 & v19;
      v10 -= *((_DWORD *)a3 + 2);
      v6 = (int *)((char *)v6 + v15);
      if ( v10 <= 0 )
      {
        v20 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
        *((_QWORD *)a3 + 7) = v20;
        if ( (unsigned __int64)v20 > *((_QWORD *)a3 + 6) )
        {
          v20 = (_DWORD *)*((_QWORD *)a3 + 5);
          *((_QWORD *)a3 + 7) = v20;
        }
        v10 += *v20;
        v9 = v9 == 0;
      }
      --v17;
    }
    while ( v17 );
    v21 = v4 + 1;
    v10 -= *((_DWORD *)a3 + 3);
    v22 = v21;
    v4 = *((_DWORD *)a2 + 7) & v21;
    v6 += v22 >> *((_DWORD *)a2 + 6);
    if ( v10 <= 0 )
    {
      v23 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
      *((_QWORD *)a3 + 7) = v23;
      if ( (unsigned __int64)v23 > *((_QWORD *)a3 + 6) )
      {
        v23 = (_DWORD *)*((_QWORD *)a3 + 5);
        *((_QWORD *)a3 + 7) = v23;
      }
      v10 += *v23;
      v9 = v9 == 0;
    }
    v3 += 4;
  }
  while ( v3 < v8 );
  *((_DWORD *)a1 + 6) = v4;
  *((_QWORD *)a1 + 2) = v6;
  *((_DWORD *)a3 + 20) = v9;
  *((_DWORD *)a3 + 5) = v10;
}
