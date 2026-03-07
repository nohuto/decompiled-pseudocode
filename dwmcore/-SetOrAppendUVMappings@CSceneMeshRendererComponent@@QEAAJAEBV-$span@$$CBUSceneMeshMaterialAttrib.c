__int64 __fastcall CSceneMeshRendererComponent::SetOrAppendUVMappings(__int64 a1, __int64 *a2, char a3)
{
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  gsl::details *v7; // r14
  __int64 v8; // rax
  char *v9; // rdi
  char *v10; // rsi
  gsl::details *v11; // rcx
  char *v12; // rdx
  int v13; // ebx
  __int64 v14; // rax
  char v16[16]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-38h] BYREF
  gsl::details *v18; // [rsp+40h] [rbp-28h]
  int v19; // [rsp+80h] [rbp+18h] BYREF

  if ( !a3 )
  {
    v5 = a1 + 96;
    v6 = *(_QWORD **)(a1 + 96);
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      a1 + 96,
      a1 + 96,
      v6[1]);
    v6[1] = v6;
    *v6 = v6;
    v6[2] = v6;
    *(_QWORD *)(v5 + 8) = 0LL;
  }
  v7 = (gsl::details *)a2[1];
  v8 = *a2;
  v9 = (char *)v7;
  v17[0] = v7;
  v18 = v7;
  v10 = (char *)v7 + 8 * v8;
  v17[1] = v10;
  while ( 1 )
  {
    v11 = (gsl::details *)a2[1];
    v12 = (char *)v11 + 8 * *a2;
    if ( v7 != v11 || v10 != v12 )
    {
LABEL_13:
      gsl::details::terminate(v11);
      JUMPOUT(0x18024C419LL);
    }
    if ( v9 == v12 )
      break;
    v19 = *(_DWORD *)gsl::details::span_iterator<SceneMeshMaterialAttributeData const>::operator->((gsl::details *)v17);
    v13 = *(_DWORD *)(gsl::details::span_iterator<SceneMeshMaterialAttributeData const>::operator->((gsl::details *)v17)
                    + 4);
    v14 = std::map<enum SceneMaterialInputType::Enum,unsigned int>::_Try_emplace<enum SceneMaterialInputType::Enum const &,>(
            (__int64 *)(a1 + 96),
            (__int64)v16,
            &v19);
    v11 = *(gsl::details **)v14;
    *(_DWORD *)(*(_QWORD *)v14 + 32LL) = v13;
    if ( !v7 || !v9 || !v10 || v9 >= v10 )
      goto LABEL_13;
    v9 += 8;
    v18 = (gsl::details *)v9;
  }
  *(_BYTE *)(a1 + 112) = 1;
  return 0LL;
}
