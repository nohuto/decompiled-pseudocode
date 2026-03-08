/*
 * XREFs of ?isSorted@@YA_NPEAU_SODISPSURF@@0JJ@Z @ 0x1C02B52A0
 * Callers:
 *     ?vSortBltOrderWorker@@YAXPEAPEAU_SODISPSURF@@JJ@Z @ 0x1C02B56CC (-vSortBltOrderWorker@@YAXPEAPEAU_SODISPSURF@@JJ@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall isSorted(struct _SODISPSURF *a1, struct _SODISPSURF *a2, int a3, int a4)
{
  _DWORD *v4; // r10
  _DWORD *v5; // r11
  int v6; // ecx
  int v8; // edx
  int v9; // ebx

  v4 = (_DWORD *)*((_QWORD *)a1 + 1);
  v5 = (_DWORD *)*((_QWORD *)a2 + 1);
  v6 = v4[5];
  if ( !v6 && !v5[5] )
    return v4[4] < v5[4];
  if ( v5[5] != v6 )
    return v6 == 0;
  v8 = v5[7];
  v9 = v4[9];
  return v8 + a3 < v9 && a3 + v5[9] > v4[7] && a4 + v5[8] < v4[10] && a4 + v5[10] > v4[8]
      || a3 + v4[7] >= v5[9]
      || v9 + a3 <= v8
      || a4 + v4[8] >= v5[10]
      || a4 + v4[10] <= v5[8];
}
