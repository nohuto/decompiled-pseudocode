_BOOL8 __fastcall D2DMatrixIsIdentity(const struct D2DMatrix *a1)
{
  return *(float *)a1 == 1.0
      && *((float *)a1 + 1) == 0.0
      && *((float *)a1 + 2) == 0.0
      && *((float *)a1 + 3) == 0.0
      && *((float *)a1 + 4) == 0.0
      && *((float *)a1 + 5) == 1.0
      && *((float *)a1 + 6) == 0.0
      && *((float *)a1 + 7) == 0.0
      && *((float *)a1 + 8) == 0.0
      && *((float *)a1 + 9) == 0.0
      && *((float *)a1 + 10) == 1.0
      && *((float *)a1 + 11) == 0.0
      && *((float *)a1 + 12) == 0.0
      && *((float *)a1 + 13) == 0.0
      && *((float *)a1 + 14) == 0.0
      && *((float *)a1 + 15) == 1.0;
}
