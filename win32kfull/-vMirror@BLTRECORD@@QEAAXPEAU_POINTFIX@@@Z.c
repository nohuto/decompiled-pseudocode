/*
 * XREFs of ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C0292088
 * Callers:
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z @ 0x1C02912E0 (-bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C02913F8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C0291AAC (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0291D14 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::vMirror(BLTRECORD *this, struct _POINTFIX *a2)
{
  struct _POINTFIX *v2; // r11
  FIX *p_y; // rbx
  FIX *v5; // r9
  struct _POINTFIX *v7; // r10
  FIX v8; // ecx
  FIX x; // edx
  FIX v10; // eax
  FIX v11; // ecx
  FIX y; // eax
  FIX v13; // ecx
  FIX v14; // ecx
  FIX v15; // eax
  FIX v16; // ecx
  FIX v17; // eax
  FIX v18; // ecx
  FIX v19; // eax
  FIX v20; // ecx

  v2 = a2 + 1;
  p_y = &a2[1].y;
  v5 = &a2->y;
  v7 = a2 + 3;
  if ( (*((_DWORD *)this + 53) & 8) != 0 )
  {
    v8 = *p_y;
    x = v2->x;
    v2->x = a2->x;
    *p_y = *v5;
    v10 = a2[2].x;
    *v5 = v8;
    v11 = v7->x;
    v7->x = v10;
    y = a2[2].y;
    a2[2].x = v11;
    v13 = a2[3].y;
    a2[3].y = y;
    a2[2].y = v13;
    a2->x = x;
  }
  if ( (*((_DWORD *)this + 53) & 0x10) != 0 )
  {
    v14 = a2[2].x;
    a2[2].x = a2->x;
    v15 = *v5;
    a2->x = v14;
    v16 = a2[2].y;
    a2[2].y = v15;
    v17 = v2->x;
    *v5 = v16;
    v18 = v7->x;
    v7->x = v17;
    v19 = *p_y;
    v2->x = v18;
    v20 = a2[3].y;
    a2[3].y = v19;
    *p_y = v20;
  }
}
