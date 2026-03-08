/*
 * XREFs of ?vStripStyledDiagonal@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02FCCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripStyledDiagonal(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r14
  int v4; // r10d
  int *v5; // r11
  int v6; // r13d
  int v7; // ebx
  int v8; // r15d
  int v9; // r9d
  int v10; // ebp
  _DWORD *v11; // rax
  int v12; // r10d
  __int64 v13; // rax
  _DWORD *v14; // rax
  __int64 v15; // rax
  int v16; // r10d
  __int64 v17; // rax
  int v18; // [rsp+38h] [rbp+8h]
  char *v19; // [rsp+48h] [rbp+18h]

  v3 = (char *)a1 + 28;
  v4 = *((_DWORD *)a1 + 6);
  v5 = (int *)*((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a3 + 1);
  v7 = *((_DWORD *)a3 + 20);
  v19 = (char *)a1 + 4 * *(int *)a1 + 28;
  v8 = -4 * *((_DWORD *)a1 + 2);
  v18 = *(_DWORD *)a3;
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v8 = 4 * *((_DWORD *)a1 + 2);
  v9 = *((_DWORD *)a3 + 5);
  do
  {
    v10 = *(_DWORD *)v3;
    while ( 1 )
    {
      if ( !v7 )
        *v5 = v6 & *(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v4) ^ *v5 & (v18 | ~*(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v4));
      if ( !--v10 )
        break;
      v9 -= *((_DWORD *)a3 + 4);
      if ( v9 <= 0 )
      {
        v11 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
        *((_QWORD *)a3 + 7) = v11;
        if ( (unsigned __int64)v11 > *((_QWORD *)a3 + 6) )
        {
          v11 = (_DWORD *)*((_QWORD *)a3 + 5);
          *((_QWORD *)a3 + 7) = v11;
        }
        v9 += *v11;
        v7 = v7 == 0;
      }
      v12 = v4 + 1;
      v13 = v12;
      v4 = *((_DWORD *)a2 + 7) & v12;
      v5 = (int *)((char *)v5 + 4 * (v13 >> *((_DWORD *)a2 + 6)) + v8);
    }
    v9 -= *((_DWORD *)a3 + 2);
    if ( v9 <= 0 )
    {
      v14 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
      *((_QWORD *)a3 + 7) = v14;
      if ( (unsigned __int64)v14 > *((_QWORD *)a3 + 6) )
      {
        v14 = (_DWORD *)*((_QWORD *)a3 + 5);
        *((_QWORD *)a3 + 7) = v14;
      }
      v9 += *v14;
      v7 = v7 == 0;
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
    {
      v15 = v8;
    }
    else
    {
      v16 = v4 + 1;
      v17 = v16;
      v4 = *((_DWORD *)a2 + 7) & v16;
      v15 = 4 * (v17 >> *((_DWORD *)a2 + 6));
    }
    v5 = (int *)((char *)v5 + v15);
    v3 += 4;
  }
  while ( v3 < v19 );
  *((_DWORD *)a1 + 6) = v4;
  *((_QWORD *)a1 + 2) = v5;
  *((_DWORD *)a3 + 20) = v7;
  *((_DWORD *)a3 + 5) = v9;
}
