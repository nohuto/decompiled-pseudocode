/*
 * XREFs of ?vGetInfo@RFONTOBJ@@QEBAXPEAU_FONTINFO@@@Z @ 0x1C02B99D4
 * Callers:
 *     FONTOBJ_vGetInfo @ 0x1C029B1A0 (FONTOBJ_vGetInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vGetInfo(RFONTOBJ *this, struct _FONTINFO *a2)
{
  _DWORD *v2; // r8

  *(_QWORD *)&a2->cjThis = 28LL;
  *(_QWORD *)&a2->cjMaxGlyph1 = 0LL;
  *(_QWORD *)&a2->cjMaxGlyph8 = 0LL;
  v2 = *(_DWORD **)this;
  a2->cGlyphsSupported = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 472LL) + 8LL);
  switch ( v2[42] )
  {
    case 1:
      a2->cjMaxGlyph1 = v2[158];
      break;
    case 4:
      a2->cjMaxGlyph4 = v2[158];
      break;
    case 8:
      a2->cjMaxGlyph8 = v2[158];
      break;
    case 0x20:
      a2->cjMaxGlyph32 = v2[158];
      break;
  }
  if ( v2[23] )
    a2->flCaps |= 1u;
  if ( (v2[179] & 0x8000) != 0 )
    a2->flCaps |= 2u;
}
