/*
 * XREFs of ??0TestCommandHost@@AEAA@XZ @ 0x1800223C0
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180021E48 (-Initialize@InputStateManager@@IEAAJXZ.c)
 * Callees:
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180022278 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ??$_Try_emplace@AEBW4TestCommandMessageType@@$$V@?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@std@@_N@1@AEBW4TestCommandMessageType@@@Z @ 0x1800241C8 (--$_Try_emplace@AEBW4TestCommandMessageType@@$$V@-$unordered_map@W4TestCommandMessageType@@U-$pa.c)
 *     ??0?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@1@AEBV?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@1@@Z @ 0x180024DE4 (--0-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessage.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F94C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
TestCommandHost *__fastcall TestCommandHost::TestCommandHost(TestCommandHost *this)
{
  char *v2; // rdi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v9; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v2 = (char *)this + 72;
  v9 = (char *)this + 72;
  LODWORD(v9) = 0;
  std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>(
    (char *)this + 72,
    &v9);
  *((_QWORD *)this + 1) = 0LL;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(this);
  v3 = CoreUICreate(this);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x53,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v3,
      v7[0]);
    JUMPOUT(0x180058A58LL);
  }
  TestCommandHost::CreateEndpointToReceiveMessages(this, v4);
  LODWORD(v9) = 1;
  std::unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>::_Try_emplace<enum TestCommandMessageType const &,>(
    v2,
    v7,
    &v9);
  v5 = v7[0];
  *(_QWORD *)(v7[0] + 24LL) = this;
  *(_QWORD *)(v5 + 32) = &lambda_e553b185ff1de720e49cf48bc3fd719c_::_lambda_invoker_cdecl_;
  return this;
}
