/*
 * XREFs of ?vStripSolidHorizontal24@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02FC700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidHorizontal24(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int *v3; // r9
  int v5; // eax
  int v6; // r11d
  int v7; // ebx
  unsigned int v8; // ebp
  __int64 v9; // r8
  int v10; // edx
  char *v11; // r15
  int v12; // ecx
  unsigned int v13; // ebp
  __int64 v14; // rdx
  int v15; // ecx

  v3 = (int *)((char *)a1 + 28);
  v5 = *((_DWORD *)a1 + 1);
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *(_DWORD *)a3;
  v9 = *((_QWORD *)a1 + 2);
  v10 = 4 * *((_DWORD *)a1 + 2);
  v11 = (char *)a1 + 4 * *(int *)a1 + 28;
  v12 = -4 * *((_DWORD *)a1 + 2);
  v13 = HIWORD(v8);
  if ( (v5 & 8) == 0 )
    v12 = v10;
  v14 = v12;
  do
  {
    v15 = *v3;
    do
    {
      *(_WORD *)v9 = v7 ^ v6 & *(_WORD *)v9;
      *(_BYTE *)(v9 + 2) = BYTE2(v7) ^ *(_BYTE *)(v9 + 2) & v13;
      v9 += 3LL;
      --v15;
    }
    while ( v15 );
    v9 += v14;
    ++v3;
  }
  while ( v3 < (int *)v11 );
  *((_QWORD *)a1 + 2) = v9;
}
