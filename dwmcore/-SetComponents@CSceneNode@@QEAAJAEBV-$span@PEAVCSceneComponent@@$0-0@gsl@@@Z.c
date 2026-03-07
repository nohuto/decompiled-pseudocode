__int64 __fastcall CSceneNode::SetComponents(CSceneNode *this, _QWORD *a2)
{
  gsl::details **v2; // rbx
  gsl::details **v4; // rsi
  gsl::details **v6; // r8
  gsl::details *v7; // rcx
  gsl::details **v8; // rdx
  gsl::details **v9; // rax
  int appended; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx

  v2 = (gsl::details **)*((_QWORD *)this + 12);
  v4 = (gsl::details **)*((_QWORD *)this + 13);
  while ( v2 != v4 )
  {
    v6 = (gsl::details **)a2[1];
    v7 = *v2;
    v8 = &v6[*a2];
    if ( v6 > v8 )
    {
      gsl::details::terminate(v7);
      __debugbreak();
    }
    v9 = (gsl::details **)a2[1];
    if ( v6 != v8 )
    {
      do
      {
        if ( *v9 == v7 )
          break;
        ++v9;
      }
      while ( v9 != v8 );
    }
    if ( v9 == v8 )
      CSceneComponent::DehydrateSpectreResources(v7, this);
    ++v2;
  }
  appended = CSceneNodeGeneratedT<CSceneNode,CSceneObject>::SetOrAppendComponents(
               (struct CResource ***)this,
               (__int64)a2,
               0);
  v12 = appended;
  if ( appended < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, appended, 0xA3u, 0LL);
  else
    return 0;
  return v12;
}
