/*
 * XREFs of ?AdvanceDeltaDueToScale@CPositionMotion@@AEAAXXZ @ 0x18026BFA0
 * Callers:
 *     ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z @ 0x18026BFF8 (-AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z.c)
 *     ?CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z @ 0x18026C0C8 (-CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPositionMotion::AdvanceDeltaDueToScale(CPositionMotion *this)
{
  float v1; // xmm0_4
  float v2; // xmm3_4

  v1 = *((float *)this + 37);
  v2 = *(float *)&FLOAT_1_0;
  if ( v1 > 0.0 )
    v2 = *((float *)this + 30) / v1;
  *((float *)this + 35) = (float)((float)((float)(*((float *)this + 36) - *((float *)this + 32)) * v2)
                                + *((float *)this + 32))
                        - *((float *)this + 36);
}
