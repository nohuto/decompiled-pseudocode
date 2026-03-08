/*
 * XREFs of _hypot_0 @ 0x1801176A4
 * Callers:
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x180016234 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?CalculateClipPlanesFromLineSegments@ClipPlaneIterator@@AEAAXPEAULineSegment@1@IPEAUD2D_VECTOR_4F@@@Z @ 0x1801D6698 (-CalculateClipPlanesFromLineSegments@ClipPlaneIterator@@AEAAXPEAULineSegment@1@IPEAUD2D_VECTOR_4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl hypot_0(double X, double Y)
{
  return _hypot(X, Y);
}
