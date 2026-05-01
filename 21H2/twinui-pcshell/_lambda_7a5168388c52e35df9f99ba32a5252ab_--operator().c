/*
 * XREFs of _lambda_7a5168388c52e35df9f99ba32a5252ab_::operator() @ 0x180039398
 * Callers:
 *     wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___ @ 0x180039378 (wil--ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___.c)
 * Callees:
 *     wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___ @ 0x180039480 (wil--ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1804406B0 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_T_ea_1804406B0.c)
 */

_QWORD **__fastcall lambda_7a5168388c52e35df9f99ba32a5252ab_::operator()(__int64 a1)
{
  unsigned int *v2; // rdx
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // r9d
  __int64 v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // rax
  _QWORD **result; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  int v13; // [rsp+20h] [rbp-28h]
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF
  unsigned int *v17; // [rsp+58h] [rbp+10h] BYREF
  char v18; // [rsp+60h] [rbp+18h] BYREF

  v2 = **(unsigned int ***)(a1 + 8);
  v14[0] = &v17;
  v14[1] = *(_QWORD *)a1;
  v17 = v2;
  v3 = wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___(v14);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FD,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v3,
      v13);
  else
    v4 = 0;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x241,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v4,
      v13);
    __debugbreak();
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(***(_QWORD ***)(a1 + 8) + 24LL))(**(_QWORD **)(a1 + 8), &v16);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x245,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v5,
      v13);
    __debugbreak();
  }
  v7 = *(_QWORD *)a1 + 136LL;
  v8 = *(__int64 **)v7;
  v9 = *(__int64 **)(*(_QWORD *)v7 + 8LL);
  if ( *((_BYTE *)v9 + 25) )
    goto LABEL_18;
  do
  {
    if ( *((_DWORD *)v9 + 8) < v16 )
    {
      v9 = (__int64 *)v9[2];
    }
    else
    {
      v8 = v9;
      v9 = (__int64 *)*v9;
    }
  }
  while ( !*((_BYTE *)v9 + 25) );
  if ( v8 == *(__int64 **)v7 || v16 < *((_DWORD *)v8 + 8) )
  {
LABEL_18:
    v17 = &v16;
    v8 = *(__int64 **)std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                        v7,
                        (unsigned int)&v18,
                        (_DWORD)v8,
                        v6,
                        (__int64)&v17);
  }
  result = *(_QWORD ***)(a1 + 16);
  v11 = v8[5];
  v12 = *result;
  if ( v11 )
  {
    result = (_QWORD **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v11 = v8[5];
  }
  *v12 = v11;
  return result;
}
