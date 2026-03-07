bool __fastcall operator==(float *a1, float *a2)
{
  return *a1 == *a2 && a1[1] == a2[1];
}
