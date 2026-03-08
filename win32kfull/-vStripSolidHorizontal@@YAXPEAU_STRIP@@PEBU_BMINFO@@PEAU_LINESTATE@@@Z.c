/*
 * XREFs of ?vStripSolidHorizontal@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C00099D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidHorizontal(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // rbx
  __int64 v4; // r10
  int v6; // edi
  int *v8; // rdx
  int v9; // esi
  char *v10; // r12
  int v11; // r9d
  int v12; // r8d
  int v13; // eax
  int v14; // ecx
  __int64 v15; // r13
  int v16; // r9d
  int v17; // r14d
  unsigned int v18; // r9d
  int v19; // ebp
  int v20; // ecx
  __int64 v21; // r8
  int v22; // eax

  v3 = (char *)a1 + 28;
  v4 = *((int *)a1 + 6);
  v6 = *(_DWORD *)a3;
  v8 = (int *)*((_QWORD *)a1 + 2);
  v9 = *((_DWORD *)a3 + 1);
  v10 = (char *)a1 + 4 * *(int *)a1 + 28;
  v11 = 4 * *((_DWORD *)a1 + 2);
  v12 = *(_DWORD *)(*(_QWORD *)a2 + 4 * v4);
  v13 = *((_DWORD *)a1 + 1);
  v14 = -4 * *((_DWORD *)a1 + 2);
  if ( (v13 & 8) == 0 )
    v14 = v11;
  v15 = v14;
  do
  {
    v16 = *(_DWORD *)v3 + v4;
    LODWORD(v4) = *((_DWORD *)a2 + 7) & v16;
    v17 = *v8;
    v18 = v16 >> *((_DWORD *)a2 + 6);
    v19 = *(_DWORD *)(*(_QWORD *)a2 + 4LL * (int)v4);
    v20 = ~v19;
    if ( !v18 )
    {
      v22 = v9 & v20 & v12 ^ v17 & (v6 | ~(v20 & v12));
LABEL_13:
      *v8 = v22;
      goto LABEL_9;
    }
    *v8++ = v9 & v12 ^ v17 & (v6 | ~v12);
    if ( v18 > 1 )
    {
      v21 = v18 - 1;
      do
      {
        *v8 = v9 ^ v6 & *v8;
        ++v8;
        --v21;
      }
      while ( v21 );
    }
    if ( v19 != -1 )
    {
      v22 = v9 & v20 ^ *v8 & (v6 | v19);
      goto LABEL_13;
    }
LABEL_9:
    v8 = (int *)((char *)v8 + v15);
    v3 += 4;
    v12 = v19;
  }
  while ( v3 < v10 );
  *((_DWORD *)a1 + 6) = v4;
  *((_QWORD *)a1 + 2) = v8;
}
