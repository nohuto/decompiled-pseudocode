void __fastcall CSceneResourceManager::RegisterSceneListener(
        CSceneResourceManager *this,
        struct ISceneNotificationListener *a2)
{
  const void **v4; // rcx
  _BYTE *v5; // rdx
  struct ISpectreRenderer *SpectreRenderer; // rdx
  void (__fastcall ***v7)(_QWORD, struct ISpectreRenderer *); // r8
  struct ISceneNotificationListener *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v4 = (const void **)((char *)this + 40);
  v5 = (_BYTE *)*((_QWORD *)this + 6);
  if ( v5 == *((_BYTE **)this + 7) )
  {
    std::vector<ISceneNotificationListener *>::_Emplace_reallocate<ISceneNotificationListener * const &>(v4, v5, &v8);
  }
  else
  {
    *(_QWORD *)v5 = a2;
    *((_QWORD *)this + 6) += 8LL;
  }
  SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
  if ( SpectreRenderer )
    (**v7)(v7, SpectreRenderer);
}
