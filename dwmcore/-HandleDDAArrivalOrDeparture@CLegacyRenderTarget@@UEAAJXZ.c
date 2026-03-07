__int64 __fastcall CLegacyRenderTarget::HandleDDAArrivalOrDeparture(CLegacyRenderTarget *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  CResource *v5; // rdx
  int v6; // eax
  __int64 v7; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 4);
  if ( v3 && *((_BYTE *)this + 18553) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    v5 = (CResource *)*((_QWORD *)this + 6);
    if ( (v4 != 0) == (v5 != 0LL) )
    {
      if ( v5 )
        *((_BYTE *)v5 + 141) = 1;
    }
    else
    {
      *((_QWORD *)this + 6) = 0LL;
      if ( v5 )
      {
        CResource::InternalRelease(v5);
      }
      else
      {
        v6 = CDDARenderTarget::Create(
               *((struct IDXGIOutputDWM **)this + 4),
               *((struct CDesktopTree **)this + 3),
               (CLegacyRenderTarget *)((char *)this + 18316),
               (CLegacyRenderTarget *)((char *)this + 18024),
               (struct CDDARenderTarget **)this + 6);
        v2 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x32Eu, 0LL);
      }
    }
  }
  return v2;
}
