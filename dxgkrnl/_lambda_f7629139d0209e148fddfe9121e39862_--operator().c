char __fastcall lambda_f7629139d0209e148fddfe9121e39862_::operator()(
        unsigned __int64 **a1,
        const struct _D3DDDI_RATIONAL *a2)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 i; // rsi
  const struct _D3DDDI_RATIONAL *v6; // rdx
  struct _D3DDDI_RATIONAL v7; // rax
  unsigned __int64 *v8; // rbx

  v2 = *a1;
  for ( i = 0LL; i < **a1; ++i )
  {
    v6 = (const struct _D3DDDI_RATIONAL *)(*a1[1] + 8 * i);
    if ( a2->Denominator * (unsigned __int64)v6->Numerator < a2->Numerator * (unsigned __int64)v6->Denominator )
      break;
    LOBYTE(v7.Numerator) = DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(a2, v6, 0);
    if ( LOBYTE(v7.Numerator) )
      return v7.Numerator;
    v2 = *a1;
  }
  v8 = a1[1];
  memmove((void *)(*v8 + 8 * i + 8), (const void *)(*v8 + 8 * i), 8 * (*v2 - i));
  v7 = *a2;
  *(struct _D3DDDI_RATIONAL *)(*v8 + 8 * i) = *a2;
  ++*v2;
  return v7.Numerator;
}
