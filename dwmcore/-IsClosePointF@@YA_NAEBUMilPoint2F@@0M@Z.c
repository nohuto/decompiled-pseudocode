bool __fastcall IsClosePointF(const struct MilPoint2F *a1, const struct MilPoint2F *a2, float a3)
{
  return a3 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - *(float *)a2) & _xmm)
      && a3 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 1) - *((float *)a2 + 1)) & _xmm);
}
