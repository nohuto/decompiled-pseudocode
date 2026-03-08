/*
 * XREFs of ?cComputeGISET@@YAKPEBGKPEAU_GISET@@K@Z @ 0x1C0113274
 * Callers:
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C0115D54 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cComputeGISET(const unsigned __int16 *a1, unsigned int a2, struct _GISET *a3, int a4)
{
  int v4; // esi
  int v5; // ebx
  __int64 v6; // r11
  __int64 v9; // r8
  const unsigned __int16 *v10; // r9
  int v11; // ebx
  int v12; // r9d

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  if ( a2 )
  {
    do
    {
      v9 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v9 < a2 )
      {
        v10 = &a1[v9];
        do
        {
          if ( *v10 - a1[(unsigned int)(v9 - 1)] > 1 )
            break;
          LODWORD(v9) = v9 + 1;
          ++v10;
        }
        while ( (unsigned int)v9 < a2 );
      }
      v11 = a1[v5];
      v12 = a1[(unsigned int)(v9 - 1)] - v11 + 1;
      v4 += v12;
      if ( a3 )
      {
        *((_WORD *)a3 + 2 * v6 + 4) = v11;
        *((_WORD *)a3 + 2 * v6 + 5) = v12;
      }
      v6 = (unsigned int)(v6 + 1);
      v5 = v9;
    }
    while ( (unsigned int)v9 < a2 );
  }
  if ( a3 )
  {
    *((_DWORD *)a3 + 1) = a4;
    *(_DWORD *)a3 = v4;
  }
  return (unsigned int)v6;
}
