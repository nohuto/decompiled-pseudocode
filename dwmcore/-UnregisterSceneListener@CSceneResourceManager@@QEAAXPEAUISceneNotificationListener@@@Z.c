void __fastcall CSceneResourceManager::UnregisterSceneListener(
        CSceneResourceManager *this,
        struct ISceneNotificationListener *a2)
{
  struct ISceneNotificationListener **i; // rbx
  struct ISpectreRenderer *SpectreRenderer; // rdx
  __int64 v5; // r8

  for ( i = (struct ISceneNotificationListener **)*((_QWORD *)this + 5);
        i != *((struct ISceneNotificationListener ***)this + 6);
        ++i )
  {
    if ( *i == a2 )
    {
      SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
      if ( SpectreRenderer )
        (*(void (__fastcall **)(__int64, struct ISpectreRenderer *))(*(_QWORD *)v5 + 8LL))(v5, SpectreRenderer);
      memmove_0(i, i + 1, *((_QWORD *)this + 6) - (_QWORD)(i + 1));
      *((_QWORD *)this + 6) -= 8LL;
      return;
    }
  }
}
