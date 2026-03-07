__int64 __fastcall CCompositionDistantLight::ProcessSetCoordinateSpace(
        CCompositionDistantLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  __int64 Resource; // rax
  __int64 v8; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 && (Resource = CResourceTable::GetResource((__int64)a2, v5, 0xC4u)) == 0 )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0xBAu, 0LL);
  }
  else if ( Resource != *((_QWORD *)this + 32) )
  {
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=((char *)this + 256, Resource);
    CCompositionLight::UpdateRegistrationWithCompositor(this);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return v4;
}
