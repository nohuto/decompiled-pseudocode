/*
 * XREFs of FixedPointSubPixel @ 0x1C014511E
 * Callers:
 *     ?DCEInverseTransform@@YA_NPEBUtagRECT@@PEBU_D3DVERTEX@@PEBU_SUBPIXELS@@PEAUtagPOINT@@@Z @ 0x1C01447C8 (-DCEInverseTransform@@YA_NPEBUtagRECT@@PEBU_D3DVERTEX@@PEBU_SUBPIXELS@@PEAUtagPOINT@@@Z.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C0145150 (PhysicalToLogicalInPlacePointWithParent.c)
 *     TransformVector @ 0x1C01E7DD8 (TransformVector.c)
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
