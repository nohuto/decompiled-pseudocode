/*
 * XREFs of ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C00A9A78
 * Callers:
 *     GreCreateDIBitmapReal @ 0x1C00ABE5C (GreCreateDIBitmapReal.c)
 *     GreStretchDIBitsInternal @ 0x1C00ADD74 (GreStretchDIBitsInternal.c)
 *     GreSetDIBColorTable @ 0x1C02B73B0 (GreSetDIBColorTable.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vCopy_rgbquad(XEPALOBJ *this, struct tagRGBQUAD *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rax
  unsigned int v6; // ecx
  _BYTE *v7; // r10
  BYTE *p_rgbGreen; // rcx
  char *v9; // rdx
  BYTE v10; // al
  signed __int32 v11; // ecx
  __int64 v12; // rdx

  v5 = *(_QWORD *)(*(_QWORD *)this + 112LL);
  v6 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  v7 = (_BYTE *)(v5 + 4LL * a3);
  if ( a3 + a4 > v6 )
    a4 = v6 - a3;
  if ( a4 )
  {
    p_rgbGreen = &a2->rgbGreen;
    v9 = (char *)((char *)a2 - v7);
    do
    {
      v7[3] = 0;
      v7[2] = v7[(_QWORD)v9];
      *v7 = p_rgbGreen[1];
      v7 += 4;
      v10 = *p_rgbGreen;
      p_rgbGreen += 4;
      *(v7 - 3) = v10;
      --a4;
    }
    while ( a4 );
  }
  v11 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
  *(_DWORD *)(*(_QWORD *)this + 32LL) = v11;
  v12 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v12 != *(_QWORD *)this )
    *(_DWORD *)(v12 + 32) = v11;
}
