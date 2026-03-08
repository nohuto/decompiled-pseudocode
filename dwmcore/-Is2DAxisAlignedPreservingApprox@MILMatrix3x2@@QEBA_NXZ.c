/*
 * XREFs of ?Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ @ 0x180017754
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18001707C (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall MILMatrix3x2::Is2DAxisAlignedPreservingApprox(MILMatrix3x2 *this)
{
  return COERCE_FLOAT(*((_DWORD *)this + 1) & _xmm) < 0.0000081380213
      && COERCE_FLOAT(*((_DWORD *)this + 2) & _xmm) < 0.0000081380213
      || COERCE_FLOAT(*(_DWORD *)this & _xmm) < 0.0000081380213
      && COERCE_FLOAT(*((_DWORD *)this + 3) & _xmm) < 0.0000081380213;
}
