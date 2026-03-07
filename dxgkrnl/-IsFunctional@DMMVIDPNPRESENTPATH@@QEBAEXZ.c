bool __fastcall DMMVIDPNPRESENTPATH::IsFunctional(DMMVIDPNPRESENTPATH *this)
{
  struct DMMVIDPNTARGETMODESET *v2; // rax
  struct DMMVIDPNTARGETMODESET *v3; // rax
  struct DMMVIDPNTARGETMODESET *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)this + 11));
  v5 = v2;
  if ( *((struct DMMVIDPNTARGETMODESET **)v2 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v2 + 48)
    || !*((_QWORD *)v2 + 18) )
  {
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v5, 0LL);
  }
  else
  {
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v5, 0LL);
    v3 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)this + 12));
    v5 = v3;
    if ( *((struct DMMVIDPNTARGETMODESET **)v3 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v3 + 48)
      || !*((_QWORD *)v3 + 18) )
    {
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v5, 0LL);
    }
    else
    {
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v5, 0LL);
      if ( DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(
             this,
             *((enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)this + 28)) )
      {
        return DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(*((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)this
                                                                    + 29));
      }
    }
  }
  return 0;
}
