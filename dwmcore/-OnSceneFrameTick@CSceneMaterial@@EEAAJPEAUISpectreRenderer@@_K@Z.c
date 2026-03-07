__int64 __fastcall CSceneMaterial::OnSceneFrameTick(CSceneMaterial *this, struct ISpectreRenderer *a2, char a3)
{
  struct CSceneObject *v3; // rsi
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(struct ISpectreRenderer *, __int64); // rdi
  int v10; // eax
  __int64 v11; // rcx
  struct CSceneMeshRendererComponent *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  char v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v3 = (CSceneMaterial *)((char *)this - 64);
  v6 = 0;
  v7 = **((_QWORD **)this + 1);
  v17 = v7;
  while ( v7 != *((_QWORD *)this + 1) )
  {
    if ( !*(_QWORD *)(v7 + 40) )
    {
      v8 = *(_QWORD *)a2;
      v16 = 0;
      v9 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, __int64))(v8 + 64);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(v7 + 40));
      v10 = v9(a2, v7 + 40);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x63u, 0LL);
        return v6;
      }
      (*(void (__fastcall **)(struct CSceneObject *, _QWORD, char *))(*(_QWORD *)v3 + 192LL))(
        v3,
        *(_QWORD *)(v7 + 40),
        &v16);
      if ( v16 )
        CSceneComponent::AddDirtySceneObject(*(CSceneComponent **)(v7 + 32), v3);
      (*(void (__fastcall **)(struct CSceneObject *, _QWORD, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, 0LL, 0LL);
    }
    v12 = *(struct CSceneMeshRendererComponent **)(v7 + 32);
    if ( *((_BYTE *)v12 + 112) )
    {
      v13 = CSceneMaterial::ApplyTexCoordsToSpectreResource(v3, v12, a3);
      v6 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x70u, 0LL);
        return v6;
      }
      *(_BYTE *)(*(_QWORD *)(v7 + 32) + 112LL) = 0;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v17);
    v7 = v17;
  }
  return v6;
}
