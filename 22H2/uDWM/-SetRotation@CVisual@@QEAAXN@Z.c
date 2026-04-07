/*
 * XREFs of ?SetRotation@CVisual@@QEAAXN@Z @ 0x180095A54
 * Callers:
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800AC1C8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800ACCDC (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x1800AD40C (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::SetRotation(CVisual *this, double a2)
{
  float v2; // xmm0_4
  double v3; // rax

  v2 = a2;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 20) - v2) & _xmm) > 0.0000011920929 )
  {
    v3 = *(double *)this;
    *((double *)this + 20) = a2;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)&v3 + 24LL))(this, 16LL);
  }
}
