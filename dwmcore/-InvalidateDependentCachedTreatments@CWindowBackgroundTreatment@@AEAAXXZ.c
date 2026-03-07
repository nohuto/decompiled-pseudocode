void __fastcall CWindowBackgroundTreatment::InvalidateDependentCachedTreatments(CWindowBackgroundTreatment *this)
{
  __int64 *v1; // rsi
  __int64 *i; // rdi
  __int64 v3; // rbx

  v1 = (__int64 *)*((_QWORD *)this + 42);
  for ( i = (__int64 *)*((_QWORD *)this + 41); i != v1; ++i )
  {
    v3 = *i;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)(*i + 24));
    *(_BYTE *)(v3 + 140) = 1;
  }
}
