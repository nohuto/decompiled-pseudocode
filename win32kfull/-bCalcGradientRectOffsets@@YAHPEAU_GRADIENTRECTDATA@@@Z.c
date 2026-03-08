/*
 * XREFs of ?bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z @ 0x1C0004FB8
 * Callers:
 *     ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C00175F0 (-bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCalcGradientRectOffsets(struct _GRADIENTRECTDATA *a1)
{
  int v1; // edi
  int v3; // ebx
  int v4; // r10d
  int v5; // r11d
  int v6; // r9d
  int v7; // edx
  int v8; // ebp
  int v9; // r8d
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // edx
  int v14; // ebp
  int v15; // r11d
  int v16; // eax
  int v17; // edi
  int v18; // eax

  v1 = *((_DWORD *)a1 + 1);
  v3 = *((_DWORD *)a1 + 5);
  v4 = v1;
  v5 = *(_DWORD *)a1;
  v6 = *((_DWORD *)a1 + 4);
  v7 = *(_DWORD *)a1;
  v8 = *((_DWORD *)a1 + 3);
  if ( v1 <= v3 )
    v4 = *((_DWORD *)a1 + 5);
  v9 = *((_DWORD *)a1 + 7);
  v10 = *((_DWORD *)a1 + 2);
  v11 = *((_DWORD *)a1 + 6);
  if ( v5 <= v6 )
    v7 = v6;
  *((_DWORD *)a1 + 8) = v7;
  *((_DWORD *)a1 + 9) = v4;
  if ( v10 >= v11 )
    v10 = v11;
  v12 = v10 - v7;
  *((_DWORD *)a1 + 10) = v12;
  if ( v8 >= v9 )
    v8 = v9;
  v13 = 0;
  v14 = v8 - v4;
  v15 = v5 - v6;
  *((_DWORD *)a1 + 11) = v14;
  v16 = 0;
  if ( v15 > 0 )
    v16 = v15;
  v17 = v1 - v3;
  *((_DWORD *)a1 + 44) = v16;
  v18 = 0;
  if ( v17 > 0 )
    v18 = v17;
  *((_DWORD *)a1 + 45) = v18;
  if ( v12 > 0 && v14 > 0 )
    return 1;
  return v13;
}
