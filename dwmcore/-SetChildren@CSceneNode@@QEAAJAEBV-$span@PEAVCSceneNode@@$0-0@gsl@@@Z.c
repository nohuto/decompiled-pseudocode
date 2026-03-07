__int64 __fastcall CSceneNode::SetChildren(CSceneNode *this, _QWORD *a2)
{
  gsl::details **v2; // rbx
  gsl::details **v4; // rsi
  gsl::details *v6; // rcx
  gsl::details **v7; // r8
  gsl::details **v8; // rdx
  gsl::details **v9; // rax
  int appended; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx

  v2 = (gsl::details **)*((_QWORD *)this + 9);
  v4 = (gsl::details **)*((_QWORD *)this + 10);
  while ( v2 != v4 )
  {
    v6 = *v2;
    if ( *((CSceneNode **)*v2 + 16) == this )
    {
      v7 = (gsl::details **)a2[1];
      v8 = &v7[*a2];
      if ( v7 > v8 )
      {
        gsl::details::terminate(v6);
        __debugbreak();
      }
      v9 = (gsl::details **)a2[1];
      if ( v7 != v8 )
      {
        do
        {
          if ( *v9 == v6 )
            break;
          ++v9;
        }
        while ( v9 != v8 );
      }
      if ( v9 == v8 )
        CSceneNode::SetParent(v6, 0LL);
    }
    ++v2;
  }
  appended = CSceneNodeGeneratedT<CSceneNode,CSceneObject>::SetOrAppendChildren(
               (struct CResource ***)this,
               (__int64)a2,
               0);
  v12 = appended;
  if ( appended < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, appended, 0x7Cu, 0LL);
  else
    return 0;
  return v12;
}
