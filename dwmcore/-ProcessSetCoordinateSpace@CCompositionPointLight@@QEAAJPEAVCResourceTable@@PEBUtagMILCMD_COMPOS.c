__int64 __fastcall CCompositionPointLight::ProcessSetCoordinateSpace(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  __int64 Resource; // rax
  __int64 v8; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = CResourceTable::GetResource((__int64)a2, v5, 0xC4u)) != 0 )
  {
    if ( Resource != *((_QWORD *)this + 32) )
    {
      wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=((__int64 *)this + 32, Resource);
      CCompositionLight::UpdateRegistrationWithCompositor(this);
      CCompositionLight::IssueLightChangedNotification(this);
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x103u, 0LL);
  }
  return v4;
}
