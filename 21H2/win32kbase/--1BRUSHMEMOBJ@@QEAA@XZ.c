/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001BC00
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C001BA50 (GreCreatePatternBrushInternal.c)
 *     hCreateSolidBrushInternal @ 0x1C001BB90 (hCreateSolidBrushInternal.c)
 *     bInitBrush @ 0x1C02981F0 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C02982A0 (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteBrush @ 0x1C001C340 (bDeleteBrush.c)
 *     PopThreadGuardedObject @ 0x1C002C080 (PopThreadGuardedObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C002E0A0 (DEC_SHARE_REF_CNT.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(HBRUSH **this)
{
  HBRUSH *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    if ( !*((_DWORD *)this + 12) )
      bDeleteBrush(**this);
    *this = 0LL;
  }
  PopThreadGuardedObject(this + 2);
}
