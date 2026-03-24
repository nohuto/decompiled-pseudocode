/*
 * XREFs of ?bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z @ 0x1C0019E3C
 * Callers:
 *     EngHTBlt @ 0x1C0019E98 (EngHTBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSetHTSurfInfo(struct _SURFOBJ *a1, struct _HTSURFACEINFO *a2, char a3)
{
  __int64 result; // rax
  PVOID pvScan0; // rbx
  __int16 v5; // di
  LONG cx; // r9d
  LONG cy; // r10d
  LONG lDelta; // r11d

  result = 1LL;
  pvScan0 = a1->pvScan0;
  v5 = a1->fjBitmap & 1;
  cx = a1->sizlBitmap.cx;
  cy = a1->sizlBitmap.cy;
  lDelta = a1->lDelta;
  *(_QWORD *)a2 = a1;
  *((_WORD *)a2 + 4) = v5;
  *((_BYTE *)a2 + 10) = a3;
  *((_BYTE *)a2 + 11) = 4;
  *((_DWORD *)a2 + 3) = cx;
  *((_DWORD *)a2 + 4) = cy;
  *((_DWORD *)a2 + 5) = lDelta;
  *((_QWORD *)a2 + 3) = pvScan0;
  *((_QWORD *)a2 + 4) = 0LL;
  return result;
}
