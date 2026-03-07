__int64 __fastcall CCompositionLight::ProcessSetEnabled(
        CCompositionLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONLIGHT_SETENABLED *a3)
{
  char v3; // al

  v3 = *((_BYTE *)a3 + 8);
  if ( *((_BYTE *)this + 170) != v3 )
  {
    *((_BYTE *)this + 170) = v3;
    CCompositionLight::UpdateRegistrationWithCompositor(this);
    (*(void (__fastcall **)(CCompositionLight *, __int64))(*(_QWORD *)this + 72LL))(this, 5LL);
    (*(void (__fastcall **)(CCompositionLight *, __int64))(*(_QWORD *)this + 72LL))(this, 1LL);
  }
  return 0LL;
}
