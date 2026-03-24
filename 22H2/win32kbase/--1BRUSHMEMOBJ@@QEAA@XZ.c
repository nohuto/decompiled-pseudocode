/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001D070
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C001CEC0 (GreCreatePatternBrushInternal.c)
 *     hCreateSolidBrushInternal @ 0x1C001D000 (hCreateSolidBrushInternal.c)
 *     bInitBrush @ 0x1C02971F0 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C02972A0 (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteBrush @ 0x1C001D7B0 (bDeleteBrush.c)
 *     PopThreadGuardedObject @ 0x1C002D4F0 (PopThreadGuardedObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C002F510 (DEC_SHARE_REF_CNT.c)
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
