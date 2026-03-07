void __fastcall CLegacyRenderTarget::SetSDRBoost(CLegacyRenderTarget *this, float a2)
{
  float v3; // xmm0_4
  CDDARenderTarget *v4; // rcx
  __int64 v5; // rcx

  v3 = ValidateSDRBoost(CCommonRegistryData::m_flSDRBoostOverride, (CLegacyRenderTarget *)((char *)this + 112));
  if ( *((float *)this + 4619) != v3 )
  {
    v4 = (CDDARenderTarget *)*((_QWORD *)this + 24);
    *((float *)this + 4619) = v3;
    if ( v4 )
      CDDARenderTarget::SetSDRBoost(v4, v3);
    v5 = *((_QWORD *)this + 23);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 248LL))(v5);
    *((_BYTE *)this + 141) = 1;
  }
}
