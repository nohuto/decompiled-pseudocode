/*
 * XREFs of ?vStripSolidDiagonal@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02FC4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidDiagonal(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // rsi
  int v5; // eax
  int v6; // r10d
  int *v7; // r11
  int v8; // ebp
  int v9; // r14d
  char *v10; // r15
  int v11; // r9d
  int v12; // ecx
  int v13; // r8d
  int v14; // r10d
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r10d
  __int64 v18; // rax

  v3 = (char *)a1 + 28;
  v5 = *((_DWORD *)a1 + 1);
  v6 = *((_DWORD *)a1 + 6);
  v7 = (int *)*((_QWORD *)a1 + 2);
  v8 = *((_DWORD *)a3 + 1);
  v9 = *(_DWORD *)a3;
  v10 = (char *)a1 + 4 * *(int *)a1 + 28;
  v11 = 4 * *((_DWORD *)a1 + 2);
  v12 = -4 * *((_DWORD *)a1 + 2);
  if ( (v5 & 8) == 0 )
    v12 = v11;
  do
  {
    v13 = *(_DWORD *)v3;
    while ( 1 )
    {
      *v7 = v8 & *(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v6) ^ *v7 & (v9 | ~*(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v6));
      if ( !--v13 )
        break;
      v14 = v6 + 1;
      v15 = v14;
      v6 = *((_DWORD *)a2 + 7) & v14;
      v7 = (int *)((char *)v7 + 4 * (v15 >> *((_DWORD *)a2 + 6)) + v12);
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
    {
      v16 = v12;
    }
    else
    {
      v17 = v6 + 1;
      v18 = v17;
      v6 = *((_DWORD *)a2 + 7) & v17;
      v16 = 4 * (v18 >> *((_DWORD *)a2 + 6));
    }
    v7 = (int *)((char *)v7 + v16);
    v3 += 4;
  }
  while ( v3 < v10 );
  *((_DWORD *)a1 + 6) = v6;
  *((_QWORD *)a1 + 2) = v7;
}
