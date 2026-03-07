_BOOL8 __fastcall EXFORMOBJ::bEqualExceptTranslations(float **this, struct MATRIX *a2)
{
  float *v2; // rax

  v2 = *this;
  return *this == (float *)a2
      || *v2 == *(float *)a2
      && v2[1] == *((float *)a2 + 1)
      && v2[2] == *((float *)a2 + 2)
      && v2[3] == *((float *)a2 + 3);
}
