__int64 __fastcall CProjectedShadowScene::ProcessAddCasters(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS *a3,
        _DWORD *a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rsi
  struct CResource *ResourceWithoutType; // rax
  unsigned int v11; // ecx
  const struct CProjectedShadowCaster *v12; // rbx
  __int64 v13; // r15
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  char *v16; // rcx
  _QWORD *v17; // rdx
  char v19[8]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-40h]
  const struct CProjectedShadowCaster *v21; // [rsp+90h] [rbp+18h] BYREF
  CProjectedShadowScene *v22; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0LL;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, a4[v5]);
      v12 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              131LL) )
      {
        break;
      }
      v21 = v12;
      if ( !CProjectedShadowScene::FindCasterEntry(this, v12) )
      {
        v13 = *((_QWORD *)this + 8);
        if ( *((_QWORD *)this + 9) == 0x1745D1745D1745DLL )
          std::_Xlength_error("list too long");
        std::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>(
          v19,
          (char *)this + 64,
          &v21);
        v14 = v20;
        ++*((_QWORD *)this + 9);
        v15 = *(_QWORD **)(v13 + 8);
        v20 = 0LL;
        *v14 = v13;
        v14[1] = v15;
        *(_QWORD *)(v13 + 8) = v14;
        *v15 = v14;
        std::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>(v19);
        v16 = (char *)v21 + 96;
        v22 = this;
        v17 = (_QWORD *)*((_QWORD *)v21 + 13);
        if ( v17 == *((_QWORD **)v21 + 14) )
        {
          std::vector<CProjectedShadowScene *>::_Emplace_reallocate<CProjectedShadowScene * const &>(v16, v17, &v22);
        }
        else
        {
          *v17 = this;
          *((_QWORD *)v16 + 1) += 8LL;
        }
        CProjectedShadowScene::RequestRedrawAll(this);
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *((_DWORD *)a3 + 2) )
        return v4;
    }
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x2Au, 0LL);
  }
  return v4;
}
