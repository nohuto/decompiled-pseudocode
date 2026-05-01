/*
 * XREFs of _lambda_cdb60d23c2a90c24b7bbcc9711020c83_::operator() @ 0x180442FAC
 * Callers:
 *     wil::ResultFromException__lambda_cdb60d23c2a90c24b7bbcc9711020c83___ @ 0x180442620 (wil--ResultFromException__lambda_cdb60d23c2a90c24b7bbcc9711020c83___.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180044910 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180442894 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_T_ea_180442894.c)
 */

void __fastcall lambda_cdb60d23c2a90c24b7bbcc9711020c83_::operator()(__int64 a1)
{
  __int64 *v1; // r9
  unsigned int *v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 *v7; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // edx
  void **v11; // rbx
  const struct _GUID *v12; // rdx
  __int64 v13; // rcx
  int Instance; // eax
  __int64 *v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // edx
  __int64 *v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // edx
  int v23; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  unsigned int *v25; // [rsp+40h] [rbp+10h] BYREF
  __int64 v26; // [rsp+48h] [rbp+18h] BYREF

  v1 = *(__int64 **)a1;
  v3 = *(unsigned int **)(a1 + 8);
  v4 = **(_QWORD **)a1;
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(_BYTE *)(v5 + 25) )
    goto LABEL_9;
  v6 = *v3;
  do
  {
    if ( *(_DWORD *)(v5 + 32) >= v6 )
    {
      v4 = v5;
      v5 = *(_QWORD *)v5;
    }
    else
    {
      v5 = *(_QWORD *)(v5 + 16);
    }
  }
  while ( !*(_BYTE *)(v5 + 25) );
  if ( v4 == *v1 || v6 < *(_DWORD *)(v4 + 32) )
  {
LABEL_9:
    v25 = v3;
    v4 = *std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
            v1,
            &v26,
            v4,
            (__int64)v1,
            &v25);
  }
  if ( !*(_QWORD *)(v4 + 40) )
  {
    v7 = *(__int64 **)a1;
    v8 = **(_QWORD **)a1;
    v9 = *(_QWORD *)(v8 + 8);
    if ( *(_BYTE *)(v9 + 25) )
      goto LABEL_19;
    v10 = **(_DWORD **)(a1 + 8);
    do
    {
      if ( *(_DWORD *)(v9 + 32) >= v10 )
      {
        v8 = v9;
        v9 = *(_QWORD *)v9;
      }
      else
      {
        v9 = *(_QWORD *)(v9 + 16);
      }
    }
    while ( !*(_BYTE *)(v9 + 25) );
    if ( v8 == *v7 || v10 < *(_DWORD *)(v8 + 32) )
    {
LABEL_19:
      v25 = *(unsigned int **)(a1 + 8);
      v8 = *std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
              v7,
              &v26,
              v8,
              (__int64)v7,
              &v25);
    }
    v11 = (void **)(v8 + 40);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v8 + 40));
    Instance = CEnumerableObjectCollection::CreateInstance(v13, v12, v11);
    if ( Instance < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3BF,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)Instance);
  }
  v15 = *(__int64 **)a1;
  v16 = **(_QWORD **)a1;
  v17 = *(_QWORD *)(v16 + 8);
  if ( *(_BYTE *)(v17 + 25) )
    goto LABEL_30;
  v18 = **(_DWORD **)(a1 + 8);
  do
  {
    if ( *(_DWORD *)(v17 + 32) >= v18 )
    {
      v16 = v17;
      v17 = *(_QWORD *)v17;
    }
    else
    {
      v17 = *(_QWORD *)(v17 + 16);
    }
  }
  while ( !*(_BYTE *)(v17 + 25) );
  if ( v16 == *v15 || v18 < *(_DWORD *)(v16 + 32) )
  {
LABEL_30:
    v25 = *(unsigned int **)(a1 + 8);
    v16 = *std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
             v15,
             &v26,
             v16,
             (__int64)v15,
             &v25);
  }
  if ( *(_QWORD *)(v16 + 40) )
  {
    v19 = *(__int64 **)a1;
    v20 = **(_QWORD **)a1;
    v21 = *(_QWORD *)(v20 + 8);
    if ( *(_BYTE *)(v21 + 25) )
      goto LABEL_40;
    v22 = **(_DWORD **)(a1 + 8);
    do
    {
      if ( *(_DWORD *)(v21 + 32) >= v22 )
      {
        v20 = v21;
        v21 = *(_QWORD *)v21;
      }
      else
      {
        v21 = *(_QWORD *)(v21 + 16);
      }
    }
    while ( !*(_BYTE *)(v21 + 25) );
    if ( v20 == *v19 || v22 < *(_DWORD *)(v20 + 32) )
    {
LABEL_40:
      v25 = *(unsigned int **)(a1 + 8);
      v20 = *std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
               v19,
               &v26,
               v20,
               (__int64)v19,
               &v25);
    }
    v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v20 + 40) + 40LL))(
            *(_QWORD *)(v20 + 40),
            **(_QWORD **)(a1 + 16));
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3BF,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v23);
  }
}
