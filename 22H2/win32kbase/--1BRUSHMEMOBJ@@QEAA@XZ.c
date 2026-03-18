/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0060894
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C005E410 (GreCreatePatternBrushInternal.c)
 *     hCreateSolidBrushInternal @ 0x1C0060550 (hCreateSolidBrushInternal.c)
 *     bInitBRUSHOBJ @ 0x1C02DB1F8 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C02DB738 (bInitBrush.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0042440 (DEC_SHARE_REF_CNT.c)
 *     bDeleteBrush @ 0x1C00C64F0 (bDeleteBrush.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(HBRUSH **this)
{
  HBRUSH *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT((struct OBJECT *)v2);
    if ( !*((_DWORD *)this + 12) )
      bDeleteBrush(**this);
    *this = 0LL;
  }
  PopThreadGuardedObject(this + 2);
}
