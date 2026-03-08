/*
 * XREFs of ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C00D91B8
 * Callers:
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C008C990 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     GreSetDIBColorTable @ 0x1C02D3CA0 (GreSetDIBColorTable.c)
 * Callees:
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C00D922C (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall XEPALOBJ::vCopy_rgbquad(XEPALOBJ *this, struct tagRGBQUAD *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rax
  unsigned int v6; // ecx
  _BYTE *v7; // r10
  BYTE *p_rgbGreen; // rcx
  char *v9; // rdx
  BYTE v10; // al

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
  XEPALOBJ::vUpdateTime(this);
}
