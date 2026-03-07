char **__fastcall DwmDbg::DbgString::DbgString(char **this, const struct D2D_VECTOR_2F *a2)
{
  DwmDbg::DbgString::DbgString(this, "%.2f, %.2f", a2->x, a2->y);
  return this;
}
