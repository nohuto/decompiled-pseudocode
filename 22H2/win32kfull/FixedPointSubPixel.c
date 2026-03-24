/*
 * XREFs of FixedPointSubPixel @ 0x1C01E507C
 * Callers:
 *     DCEInverseTransform @ 0x1C01E4750 (DCEInverseTransform.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01E550C (PhysicalToLogicalInPlacePointWithParent.c)
 *     TransformVector @ 0x1C0216FBC (TransformVector.c)
 * Callees:
 *     <none>
 */

float __fastcall FixedPointSubPixel(__int64 a1)
{
  unsigned __int64 v1; // rax

  if ( a1 < 0 )
    v1 = a1 + (-a1 & 0xFFFFFFFFFFFF0000uLL);
  else
    LODWORD(v1) = (unsigned __int16)a1;
  return (float)(int)v1 * 0.000015258789;
}
