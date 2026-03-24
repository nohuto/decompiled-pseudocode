/*
 * XREFs of ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C028BF3C
 * Callers:
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z @ 0x1C028B120 (-bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028B248 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C028B960 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C028BBC4 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::vMirror(BLTRECORD *this, struct _POINTFIX *a2)
{
  int v2; // eax
  FIX y; // ecx
  FIX x; // r8d
  FIX v6; // eax
  FIX v7; // ecx
  FIX v8; // eax
  FIX v9; // ecx
  FIX v10; // ecx
  FIX v11; // eax
  FIX v12; // ecx
  FIX v13; // eax
  FIX v14; // ecx
  FIX v15; // eax
  FIX v16; // ecx

  v2 = *((_DWORD *)this + 55);
  if ( (v2 & 8) != 0 )
  {
    y = a2[1].y;
    x = a2[1].x;
    a2[1] = *a2;
    v6 = a2[2].x;
    a2->y = y;
    v7 = a2[3].x;
    a2[3].x = v6;
    v8 = a2[2].y;
    a2[2].x = v7;
    v9 = a2[3].y;
    a2[3].y = v8;
    a2[2].y = v9;
    a2->x = x;
    v2 = *((_DWORD *)this + 55);
  }
  if ( (v2 & 0x10) != 0 )
  {
    v10 = a2[2].x;
    a2[2].x = a2->x;
    v11 = a2->y;
    a2->x = v10;
    v12 = a2[2].y;
    a2[2].y = v11;
    v13 = a2[1].x;
    a2->y = v12;
    v14 = a2[3].x;
    a2[3].x = v13;
    v15 = a2[1].y;
    a2[1].x = v14;
    v16 = a2[3].y;
    a2[3].y = v15;
    a2[1].y = v16;
  }
}
