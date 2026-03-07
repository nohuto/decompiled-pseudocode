bool __fastcall IsUnspecifiedFrequency(const struct _D3DDDI_RATIONAL *a1)
{
  return *a1 == 0xFFFFFFFEFFFFFFFEuLL || a1->Numerator == -1 && a1->Denominator == -1;
}
