/*
 * XREFs of ?vLine24Octant16@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C02FE9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLine24Octant16(struct _DDALINE *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v4; // r10d
  int v5; // edi
  int v6; // esi
  int v7; // r14d
  unsigned __int8 *v8; // rdx
  int i; // r10d
  int v10; // ecx
  unsigned __int8 *v11; // rax
  int v12; // edi

  v4 = *((_DWORD *)a1 + 3);
  v5 = *((_DWORD *)a1 + 6);
  v6 = *((_DWORD *)a1 + 4);
  v7 = *((_DWORD *)a1 + 5);
  v8 = &a2[3 * *((_DWORD *)a1 + 1)];
  *(_WORD *)v8 = a4;
  v8[2] = BYTE2(a4);
  for ( i = v4 - 1; i; --i )
  {
    v11 = &v8[a3];
    v8 = v11 + 3;
    v12 = v7 + v5;
    v10 = v12;
    if ( v12 < 0 )
      v8 = v11;
    v5 = v12 - v6;
    if ( v10 < 0 )
      v5 = v10;
    *(_WORD *)v8 = a4;
    v8[2] = BYTE2(a4);
  }
}
