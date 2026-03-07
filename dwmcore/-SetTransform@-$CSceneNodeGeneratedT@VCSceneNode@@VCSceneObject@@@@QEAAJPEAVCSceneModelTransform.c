__int64 __fastcall CSceneNodeGeneratedT<CSceneNode,CSceneObject>::SetTransform(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  __int64 v6; // rcx
  bool v7; // zf

  v2 = 0;
  if ( a2 != this[8] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x13D3u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[8]);
      v7 = this[17] == 0LL;
      this[8] = a2;
      if ( !v7 )
      {
        CSceneNode::ApplyTransformToSpectreResources((CSceneNode *)this);
        (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))*this + 9))(this, 0LL, 0LL);
      }
    }
  }
  return v2;
}
