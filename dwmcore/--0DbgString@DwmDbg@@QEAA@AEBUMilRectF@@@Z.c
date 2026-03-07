char **__fastcall DwmDbg::DbgString::DbgString(char **this, const struct MilRectF *a2)
{
  DwmDbg::DbgString::DbgString(
    this,
    "%.2f, %.2f, %.2f, %.2f (%.2f x %.2f)",
    *(float *)a2,
    *((float *)a2 + 1),
    *((float *)a2 + 2),
    *((float *)a2 + 3),
    COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 2) - *(float *)a2) & _xmm),
    COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 3) - *((float *)a2 + 1)) & _xmm));
  return this;
}
