__int64 __fastcall CWindowBackgroundTreatment::OnChanged(CBrush **a1)
{
  __int64 v2; // rdx

  CWindowBackgroundTreatment::InvalidateBitmapRealization((__int64)a1);
  CWindowBackgroundTreatment::UpdateBackdropFlags(a1, v2);
  return 1LL;
}
