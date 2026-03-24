/*
 * XREFs of ?bEfToL@EFLOAT@@QEAAHAEAJ@Z @ 0x1C026E524
 * Callers:
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C013F6DC (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C00FB538 (bFToL.c)
 */

__int64 __fastcall EFLOAT::bEfToL(EFLOAT *this, int *a2)
{
  return bFToL(*(float *)this, a2, 6u);
}
