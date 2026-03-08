/*
 * XREFs of ?vStripSolidVertical@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C0151AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidVertical(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // rdi
  int v5; // eax
  int v6; // r10d
  int *v8; // r11
  int v9; // r14d
  int v10; // r15d
  char *v11; // rbp
  int v12; // r9d
  int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // rax
  int v16; // r8d
  int v17; // ecx
  int v18; // edx
  int v19; // r10d
  __int64 v20; // rax

  v3 = (char *)a1 + 28;
  v5 = *((_DWORD *)a1 + 1);
  v6 = *((_DWORD *)a1 + 6);
  v8 = (int *)*((_QWORD *)a1 + 2);
  v9 = *((_DWORD *)a3 + 1);
  v10 = *(_DWORD *)a3;
  v11 = (char *)a1 + 4 * *(int *)a1 + 28;
  v12 = 4 * *((_DWORD *)a1 + 2);
  v13 = -4 * *((_DWORD *)a1 + 2);
  if ( (v5 & 8) == 0 )
    v13 = v12;
  v14 = v13;
  do
  {
    v15 = *((_QWORD *)a2 + 1);
    v16 = *(_DWORD *)v3;
    v17 = v9 & *(_DWORD *)(v15 + 4LL * v6);
    v18 = v10 | ~*(_DWORD *)(v15 + 4LL * v6);
    do
    {
      *v8 = v17 ^ *v8 & v18;
      v8 = (int *)((char *)v8 + v14);
      --v16;
    }
    while ( v16 );
    v19 = v6 + 1;
    v20 = v19;
    v3 += 4;
    v6 = *((_DWORD *)a2 + 7) & v19;
    v8 += v20 >> *((_DWORD *)a2 + 6);
  }
  while ( v3 < v11 );
  *((_DWORD *)a1 + 6) = v6;
  *((_QWORD *)a1 + 2) = v8;
}
