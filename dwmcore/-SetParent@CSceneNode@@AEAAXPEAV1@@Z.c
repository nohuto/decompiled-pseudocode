void __fastcall CSceneNode::SetParent(CSceneNode *this, struct CSceneNode *a2)
{
  struct CSceneWorld **v4; // rsi
  __int64 v5; // rcx

  if ( *((struct CSceneNode **)this + 16) != a2 )
  {
    v4 = (struct CSceneWorld **)((char *)a2 + 120);
    if ( !a2 || *((struct CSceneWorld **)this + 15) != *v4 )
      CSceneNode::DehydrateSpectreResources(this);
    *((_QWORD *)this + 16) = a2;
    if ( a2 && *((_QWORD *)a2 + 17) )
    {
      v5 = *((_QWORD *)this + 17);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
      else
        CSceneNode::HydrateSpectreResources(this, *v4);
    }
  }
}
