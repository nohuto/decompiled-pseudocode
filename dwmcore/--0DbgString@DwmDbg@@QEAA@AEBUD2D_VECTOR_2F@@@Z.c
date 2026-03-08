/*
 * XREFs of ??0DbgString@DwmDbg@@QEAA@AEBUD2D_VECTOR_2F@@@Z @ 0x180217404
 * Callers:
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18004CF18 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008883C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 */

char **__fastcall DwmDbg::DbgString::DbgString(char **this, const struct D2D_VECTOR_2F *a2)
{
  DwmDbg::DbgString::DbgString(this, "%.2f, %.2f", a2->x, a2->y);
  return this;
}
