/*
 * XREFs of ?D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z @ 0x18027F918
 * Callers:
 *     _anonymous_namespace_::CanAddThisColumnVectorToMatrix @ 0x1801AC368 (_anonymous_namespace_--CanAddThisColumnVectorToMatrix.c)
 *     _anonymous_namespace_::ReverseAndLeftShift @ 0x1801B0004 (_anonymous_namespace_--ReverseAndLeftShift.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall D3DXVectorAreCloseToZero(const struct D2DVector3 *a1)
{
  return (COERCE_FLOAT(*(_DWORD *)a1 & _xmm) < 0.000099999997 && 0.000099999997 > 0.0
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - 0.0) & _xmm) <= 0.0049999999)
      && (COERCE_FLOAT(*((_DWORD *)a1 + 1) & _xmm) < 0.000099999997 && 0.000099999997 > 0.0
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 1) - 0.0) & _xmm) <= 0.0049999999)
      && (COERCE_FLOAT(*((_DWORD *)a1 + 2) & _xmm) < 0.000099999997 && 0.000099999997 > 0.0
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 2) - 0.0) & _xmm) <= 0.0049999999);
}
