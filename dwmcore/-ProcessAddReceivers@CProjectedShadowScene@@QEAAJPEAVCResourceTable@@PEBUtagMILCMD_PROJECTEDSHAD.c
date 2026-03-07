__int64 __fastcall CProjectedShadowScene::ProcessAddReceivers(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS *a3,
        _DWORD *a4)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  struct CResource *ResourceWithoutType; // rax
  unsigned int v11; // ecx
  CProjectedShadowReceiver *v12; // rbx
  __int64 v13; // r15
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  CProjectedShadowReceiver *v16; // rbx
  char *v17; // rcx
  _QWORD *v18; // rdx
  _BYTE v20[8]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-40h]
  CProjectedShadowReceiver *v22; // [rsp+90h] [rbp+18h] BYREF
  CProjectedShadowScene *v23; // [rsp+98h] [rbp+20h] BYREF

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
              132LL) )
      {
        break;
      }
      v22 = v12;
      if ( !CProjectedShadowScene::FindReceiverEntry(this, v12) )
      {
        v13 = *((_QWORD *)this + 10);
        if ( *((_QWORD *)this + 11) == 0x222222222222222LL )
          std::_Xlength_error("list too long");
        std::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
          v20,
          (char *)this + 80,
          &v22);
        v14 = v21;
        ++*((_QWORD *)this + 11);
        v15 = *(_QWORD **)(v13 + 8);
        v21 = 0LL;
        *v14 = v13;
        v14[1] = v15;
        *(_QWORD *)(v13 + 8) = v14;
        *v15 = v14;
        std::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(v20);
        v16 = v22;
        v23 = this;
        v17 = (char *)v22 + 72;
        v18 = (_QWORD *)*((_QWORD *)v22 + 10);
        if ( v18 == *((_QWORD **)v22 + 11) )
        {
          std::vector<CProjectedShadowScene *>::_Emplace_reallocate<CProjectedShadowScene * const &>(v17, v18, &v23);
        }
        else
        {
          *v18 = this;
          *((_QWORD *)v17 + 1) += 8LL;
        }
        CProjectedShadowReceiver::RequestRedraw(v16);
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *((_DWORD *)a3 + 2) )
        return v4;
    }
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x4Cu, 0LL);
  }
  return v4;
}
