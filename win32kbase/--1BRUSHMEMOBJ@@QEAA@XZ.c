/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001CC00
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C001A060 (GreCreatePatternBrushInternal.c)
 *     hCreateSolidBrushInternal @ 0x1C001C240 (hCreateSolidBrushInternal.c)
 *     bInitBrush @ 0x1C031D430 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C031D4F4 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     bDeleteBrush @ 0x1C00D59D0 (bDeleteBrush.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(struct HOBJ__ ***this)
{
  struct HOBJ__ **v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCountEx(v2, 0LL);
    if ( !*((_DWORD *)this + 4) )
      bDeleteBrush(**this);
    *this = 0LL;
  }
}
