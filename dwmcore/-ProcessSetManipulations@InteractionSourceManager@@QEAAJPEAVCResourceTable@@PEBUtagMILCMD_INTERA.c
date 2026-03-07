__int64 __fastcall InteractionSourceManager::ProcessSetManipulations(
        InteractionSourceManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS *a3,
        const struct MarshaledManipulationInfo *a4)
{
  __int64 v4; // rax
  _BYTE *v5; // rdi
  unsigned int v6; // r13d
  CResourceTable *v8; // r9
  _BYTE *v10; // r14
  struct CResource *ResourceWithoutType; // rax
  CResourceTable *v12; // r9
  unsigned int v13; // edx
  __int64 v14; // rbx
  struct CInteraction *v15; // r15
  struct CManipulation *v16; // rbx
  __int64 v17; // rcx
  __int64 appended; // rax
  __int64 v19; // rbx
  CChainingHelper *v20; // rcx
  CChainingHelper *v21; // rax
  __int64 *v22; // rdi
  __int64 *v23; // rcx
  int v24; // eax
  unsigned int v25; // edi
  int v26; // eax
  unsigned int v27; // ebx
  CChainingHelper *v28; // rax
  __int64 *v29; // rbx
  void *v31; // [rsp+20h] [rbp-40h] BYREF
  CResource *v32; // [rsp+28h] [rbp-38h]
  char v33[16]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v34; // [rsp+40h] [rbp-20h] BYREF
  _BYTE *v35; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct CManipulation *v37; // [rsp+A0h] [rbp+40h] BYREF
  struct CResourceTable *v38; // [rsp+A8h] [rbp+48h]
  const struct tagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS *v39; // [rsp+B0h] [rbp+50h]

  v39 = a3;
  v38 = a2;
  v4 = *((_QWORD *)this + 1);
  v5 = 0LL;
  v6 = 0;
  v35 = 0LL;
  v8 = a2;
  v32 = *(CResource **)(v4 + 16);
  v34 = 0LL;
  if ( !*((_DWORD *)a3 + 2) )
  {
LABEL_28:
    InteractionSourceManager::CleanupManipulationMap(this, (_QWORD **)&v34);
    if ( !*((_DWORD *)v32 + 44) )
      InteractionSourceManager::ReconfigureAllManipulations(this);
    if ( (_QWORD)v34 )
      std::_Deallocate<16,0>((void *)v34, (unsigned __int64)&v35[-v34] & 0xFFFFFFFFFFFFFFF8uLL);
    return 0LL;
  }
  v10 = (_BYTE *)*((_QWORD *)&v34 + 1);
  while ( 1 )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(v8, *(_DWORD *)a4);
    v13 = *((_DWORD *)a4 + 1);
    v14 = (__int64)ResourceWithoutType;
    v15 = v13 ? CResourceTable::GetResourceWithoutType(v12, v13) : 0LL;
    if ( !v14
      || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 56LL))(v14, 105LL)
      || v15 && !(*(unsigned __int8 (__fastcall **)(struct CInteraction *, __int64))(*(_QWORD *)v15 + 56LL))(v15, 89LL) )
    {
      break;
    }
    wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::com_ptr_t<CManipulation,wil::err_returncode_policy>(
      &v37,
      v14);
    v16 = v37;
    v31 = v37;
    if ( v10 == v5 )
    {
      std::vector<CManipulation *>::_Emplace_reallocate<CManipulation *>((const void **)&v34, v10, &v31);
      v10 = (_BYTE *)*((_QWORD *)&v34 + 1);
    }
    else
    {
      *(_QWORD *)v10 = v37;
      v10 += 8;
      *((_QWORD *)&v34 + 1) = v10;
    }
    if ( InteractionSourceManager::IsManipulationInMap(this, v16) )
    {
      if ( !InteractionSourceManager::IsManipulationActive(this, v16) )
        goto LABEL_27;
      v31 = v16;
      appended = std::_Fnv1a_append_bytes(v17, (const unsigned __int8 *const)&v31, 8uLL);
      v19 = std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::_Find<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(
              (_QWORD *)this + 2,
              &v37,
              appended);
      v20 = *(CChainingHelper **)(v19 + 24);
      if ( *((struct CInteraction **)v20 + 5) == v15 )
        goto LABEL_27;
      CChainingHelper::ClearAllConfigurations(v20);
      v21 = (CChainingHelper *)operator new(0x30uLL);
      if ( v21 )
        v21 = CChainingHelper::CChainingHelper(v21, v15);
      v22 = *(__int64 **)(v19 + 24);
      *(_QWORD *)(v19 + 24) = v21;
      if ( !v22 )
        goto LABEL_27;
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v22 + 5);
      v23 = v22;
      goto LABEL_26;
    }
    v24 = CManipulation::SetAutoReset_RenderThread(v16);
    v25 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x58,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\animations\\interactionsourcemanager.cpp",
        (const char *)(unsigned int)v24);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
      v27 = v25;
      goto LABEL_36;
    }
    v26 = CResource::RegisterNotifier(v32, v16);
    v27 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\animations\\interactionsourcemanager.cpp",
        (const char *)(unsigned int)v26);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
      goto LABEL_36;
    }
    v28 = (CChainingHelper *)operator new(0x30uLL);
    if ( v28 )
      v28 = CChainingHelper::CChainingHelper(v28, v15);
    v31 = v28;
    std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::emplace<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> &,std::unique_ptr<CChainingHelper>>(
      (float *)this + 4,
      (__int64)v33,
      (__int64 *)&v37,
      (__int64 *)&v31);
    v29 = (__int64 *)v31;
    if ( v31 )
    {
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v31 + 5);
      v23 = v29;
LABEL_26:
      operator delete(v23);
    }
LABEL_27:
    a4 = (const struct MarshaledManipulationInfo *)((char *)a4 + 8);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
    ++v6;
    v5 = v35;
    v8 = v38;
    if ( v6 >= *((_DWORD *)v39 + 2) )
      goto LABEL_28;
  }
  v27 = -2003303421;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\animations\\interactionsourcemanager.cpp",
    (const char *)0x88980403LL);
LABEL_36:
  std::vector<DepthGraphNode *>::~vector<DepthGraphNode *>((__int64)&v34);
  return v27;
}
