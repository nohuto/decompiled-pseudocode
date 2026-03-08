/*
 * XREFs of ?IsClosePointF@@YA_NAEBUMilPoint2F@@0M@Z @ 0x1801AF7A0
 * Callers:
 *     ?TryAddEdgeFromEndPoints@?$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_POINT_2F@@0AEBIM@Z @ 0x1801FDF84 (-TryAddEdgeFromEndPoints@-$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_POINT_2F@@0AEBIM@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsClosePointF(const struct MilPoint2F *a1, const struct MilPoint2F *a2, float a3)
{
  return a3 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - *(float *)a2) & _xmm)
      && a3 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 1) - *((float *)a2 + 1)) & _xmm);
}
