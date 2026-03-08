/*
 * XREFs of ?ProbeAndConvertXFORM@@YAHPEAU_XFORML@@0@Z @ 0x1C0002340
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C0019720 (NtGdiExtCreateRegion.c)
 * Callees:
 *     ?bConvertDwordToFloat@@YAHKPEAM@Z @ 0x1C0002400 (-bConvertDwordToFloat@@YAHKPEAM@Z.c)
 */

__int64 __fastcall ProbeAndConvertXFORM(struct _XFORML *a1, struct _XFORML *a2)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( (unsigned int)bConvertDwordToFloat(LODWORD(a1->eM11), &a2->eM11)
    && (unsigned int)bConvertDwordToFloat(LODWORD(a1->eM12), &a2->eM12)
    && (unsigned int)bConvertDwordToFloat(LODWORD(a1->eM21), &a2->eM21)
    && (unsigned int)bConvertDwordToFloat(LODWORD(a1->eM22), &a2->eM22)
    && (unsigned int)bConvertDwordToFloat(LODWORD(a1->eDx), &a2->eDx) )
  {
    return (unsigned int)bConvertDwordToFloat(LODWORD(a1->eDy), &a2->eDy) != 0;
  }
  return v4;
}
