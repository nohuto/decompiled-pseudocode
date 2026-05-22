/*
 * XREFs of ?AddInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18006E2FC
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_0768ca99b5f0498451ffc3dbd3bcf85b_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180197630 (--$_Callback_once@V-$tuple@$$QEAV_lambda_0768ca99b5f0498451ffc3dbd3bcf85b_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?CheckTypeExistence@MPCConstantManager@@QEAA_NW4InputType@@@Z @ 0x180036474 (-CheckTypeExistence@MPCConstantManager@@QEAA_NW4InputType@@@Z.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBW4InputType@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBW4InputType@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180038EAC (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBW4InputType@@@2@V-$tuple@$$V@2@@-$_Tr.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCConstantManager::AddInputType(MPCConstantManager *this, struct IMPCInputProviderBase *a2)
{
  int v3; // ebx
  const char *v4; // r9
  __int64 *v5; // rcx
  __int64 *v6; // r8
  __int64 *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+48h] [rbp+10h] BYREF
  int *v10; // [rsp+50h] [rbp+18h] BYREF
  char v11; // [rsp+58h] [rbp+20h] BYREF

  v9 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2);
  v3 = v9;
  if ( MPCConstantManager::CheckTypeExistence((__int64)this, v9) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      139LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v4);
    __debugbreak();
  }
  v5 = (__int64 *)((char *)this + 56);
  v6 = (__int64 *)*((_QWORD *)this + 7);
  v7 = (__int64 *)v6[1];
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_10;
  do
  {
    if ( *((_DWORD *)v7 + 8) >= v3 )
    {
      v6 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  while ( !*((_BYTE *)v7 + 25) );
  if ( v6 == (__int64 *)*v5 || v3 < *((_DWORD *)v6 + 8) )
  {
LABEL_10:
    v10 = &v9;
    std::_Tree<std::_Tmap_traits<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<enum InputType>,std::allocator<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<enum InputType const &>,std::tuple<>>(
      v5,
      (__int64)&v11,
      (int)v6,
      (__int64)v4,
      &v10);
  }
}
