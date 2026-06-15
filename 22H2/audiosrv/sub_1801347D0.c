/*
 * XREFs of sub_1801347D0 @ 0x1801347D0
 * Callers:
 *     sub_1800600A4 @ 0x1800600A4 (sub_1800600A4.c)
 *     sub_180133EDC @ 0x180133EDC (sub_180133EDC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1801347D0(__int64 a1, char *a2, __int64 a3)
{
  char *v4; // rax
  char *v5; // r10
  __int64 v6; // r8
  char v7; // cl
  signed __int64 v8; // r10
  unsigned __int16 v9; // dx
  int v10; // eax

  v4 = (char *)a3;
  if ( *(_QWORD *)(a3 + 24) >= 8uLL )
    v4 = *(char **)a3;
  v5 = a2;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    v5 = *(char **)a2;
  v6 = *((_QWORD *)a2 + 2);
  if ( v6 != *(_QWORD *)(a3 + 16) )
    return 1;
  v7 = 0;
  if ( v6 )
  {
    v8 = v5 - v4;
    while ( 1 )
    {
      v9 = *(_WORD *)&v4[v8];
      if ( v9 != *(_WORD *)v4 )
        break;
      v4 += 2;
      if ( !--v6 )
        goto LABEL_10;
    }
    v10 = v9 < *(_WORD *)v4 ? -1 : 1;
  }
  else
  {
LABEL_10:
    v10 = 0;
  }
  if ( v10 )
    return 1;
  return v7;
}
