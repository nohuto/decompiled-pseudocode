/*
 * XREFs of ?vLine32Octant07@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C0151BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLine32Octant07(struct _DDALINE *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v4; // r10d
  int v5; // edi
  int v6; // ebx
  int v7; // r11d
  unsigned __int8 *v8; // rcx

  v4 = *((_DWORD *)a1 + 6);
  v5 = *((_DWORD *)a1 + 4);
  v6 = *((_DWORD *)a1 + 5);
  v7 = *((_DWORD *)a1 + 3);
  v8 = &a2[4 * *((int *)a1 + 1)];
  while ( 1 )
  {
    *(_DWORD *)v8 = a4;
    if ( !--v7 )
      break;
    v8 += 4;
    v4 += v6;
    if ( v4 >= 0 )
    {
      v4 -= v5;
      v8 += a3;
    }
  }
}
