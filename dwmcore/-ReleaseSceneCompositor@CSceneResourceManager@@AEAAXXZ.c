void __fastcall CSceneResourceManager::ReleaseSceneCompositor(CSceneResourceManager *this)
{
  CD3DResource *v2; // rcx
  struct ISpectreRenderer *SpectreRenderer; // r14
  _QWORD *v4; // rbp
  _QWORD *i; // rdi
  CD3DDevice *v6; // rcx

  v2 = (CD3DResource *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CD3DResource::RemoveResourceNotifier(v2, this);
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
    if ( SpectreRenderer )
    {
      v4 = (_QWORD *)*((_QWORD *)this + 6);
      for ( i = (_QWORD *)*((_QWORD *)this + 5); i != v4; ++i )
        (*(void (__fastcall **)(_QWORD, struct ISpectreRenderer *))(*(_QWORD *)*i + 8LL))(*i, SpectreRenderer);
    }
    wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((char *)this + 24);
  }
  v6 = (CD3DDevice *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v6 )
    CD3DDevice::Release(v6);
}
