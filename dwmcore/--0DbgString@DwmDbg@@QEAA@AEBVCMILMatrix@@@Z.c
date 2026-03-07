char **__fastcall DwmDbg::DbgString::DbgString(char **this, const struct CMILMatrix *a2)
{
  DwmDbg::DbgString::DbgString(
    this,
    "(%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f)",
    *(float *)a2,
    *((float *)a2 + 1),
    *((float *)a2 + 2),
    *((float *)a2 + 3),
    *((float *)a2 + 4),
    *((float *)a2 + 5),
    *((float *)a2 + 6),
    *((float *)a2 + 7),
    *((float *)a2 + 8),
    *((float *)a2 + 9),
    *((float *)a2 + 10),
    *((float *)a2 + 11),
    *((float *)a2 + 12),
    *((float *)a2 + 13),
    *((float *)a2 + 14),
    *((float *)a2 + 15));
  return this;
}
