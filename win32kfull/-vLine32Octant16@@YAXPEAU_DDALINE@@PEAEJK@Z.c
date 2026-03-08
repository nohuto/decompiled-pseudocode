/*
 * XREFs of ?vLine32Octant16@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C0151C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLine32Octant16(struct _DDALINE *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v4; // r10d
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  unsigned __int8 *v8; // r11
  int i; // r10d
  int v10; // ecx
  unsigned __int8 *v11; // rax
  int v12; // ebx

  v4 = *((_DWORD *)a1 + 3);
  v5 = *((_DWORD *)a1 + 6);
  v6 = *((_DWORD *)a1 + 4);
  v7 = *((_DWORD *)a1 + 5);
  v8 = &a2[4 * *((int *)a1 + 1)];
  *(_DWORD *)v8 = a4;
  for ( i = v4 - 1; i; --i )
  {
    v11 = &v8[a3];
    v8 = v11 + 4;
    v12 = v7 + v5;
    v10 = v12;
    if ( v12 < 0 )
      v8 = v11;
    v5 = v12 - v6;
    if ( v10 < 0 )
      v5 = v10;
    *(_DWORD *)v8 = a4;
  }
}
