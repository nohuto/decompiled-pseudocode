/*
 * XREFs of ?vStripSolidDiagonal24@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02FC3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidDiagonal24(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int v3; // r11d
  int *v4; // r9
  int v5; // r8d
  int v7; // r14d
  char *v8; // r15
  __int64 v9; // rdx
  int v10; // ecx

  v3 = *((_DWORD *)a3 + 1);
  v4 = (int *)((char *)a1 + 28);
  v5 = *(_DWORD *)a3;
  v7 = -4 * *((_DWORD *)a1 + 2);
  v8 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v7 = 4 * *((_DWORD *)a1 + 2);
  v9 = *((_QWORD *)a1 + 2);
  do
  {
    v10 = *v4;
    while ( 1 )
    {
      *(_WORD *)v9 = v3 ^ v5 & *(_WORD *)v9;
      *(_BYTE *)(v9 + 2) = BYTE2(v3) ^ BYTE2(v5) & *(_BYTE *)(v9 + 2);
      v9 += 3LL;
      if ( !--v10 )
        break;
      v9 += v7;
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
      v9 += v7 - 3;
    ++v4;
  }
  while ( v4 < (int *)v8 );
  *((_QWORD *)a1 + 2) = v9;
}
