__int64 __fastcall bSetHTSurfInfo(struct _SURFOBJ *a1, struct _HTSURFACEINFO *a2, char a3)
{
  __int64 result; // rax
  LONG lDelta; // ebx
  __int16 v5; // r9
  PVOID pvScan0; // rdi
  LONG cx; // r10d
  LONG cy; // r11d

  result = 1LL;
  lDelta = a1->lDelta;
  v5 = a1->fjBitmap & 1;
  pvScan0 = a1->pvScan0;
  cx = a1->sizlBitmap.cx;
  cy = a1->sizlBitmap.cy;
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
