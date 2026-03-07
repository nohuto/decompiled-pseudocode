__int64 __fastcall CSceneNode::HydrateSpectreResources(CSceneNode *this, struct CSceneWorld *a2)
{
  __int64 v4; // rdi
  __int64 *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  CSceneComponent **v12; // rdi
  CSceneComponent **i; // rbx
  CSceneNode **v14; // rdi
  CSceneNode **j; // rbx

  if ( !*((_QWORD *)this + 15) )
  {
    v4 = *((_QWORD *)this + 16);
    v5 = (__int64 *)((char *)this + 136);
    *((_QWORD *)this + 15) = a2;
    if ( v4 )
    {
      v7 = *(_QWORD *)(v4 + 136);
      v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 32LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 17);
      v9 = v8(v7, v5);
      v11 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xD0u, 0LL);
        return v11;
      }
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 11) + 32LL))(*((_QWORD *)a2 + 11));
      wil::com_ptr_t<ISpectreNode,wil::err_returncode_policy>::operator=(v5, v6);
    }
    CSceneNode::ApplyTransformToSpectreResources(this);
    v12 = (CSceneComponent **)*((_QWORD *)this + 13);
    for ( i = (CSceneComponent **)*((_QWORD *)this + 12); i != v12; ++i )
      CSceneComponent::HydrateSpectreResources(*i, this);
    v14 = (CSceneNode **)*((_QWORD *)this + 10);
    for ( j = (CSceneNode **)*((_QWORD *)this + 9); j != v14; ++j )
    {
      if ( *((CSceneNode **)*j + 16) == this )
        CSceneNode::HydrateSpectreResources(*j, a2);
    }
  }
  return 0;
}
