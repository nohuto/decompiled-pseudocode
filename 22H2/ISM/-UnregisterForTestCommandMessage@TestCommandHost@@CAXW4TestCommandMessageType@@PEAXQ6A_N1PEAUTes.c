/*
 * XREFs of ?UnregisterForTestCommandMessage@TestCommandHost@@CAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@Z@Z @ 0x1800BC740
 * Callers:
 *     ??1DWMCursor@@MEAA@XZ @ 0x18019C8B4 (--1DWMCursor@@MEAA@XZ.c)
 * Callees:
 *     ??$_Try_emplace@AEBW4TestCommandMessageType@@$$V@?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@std@@_N@1@AEBW4TestCommandMessageType@@@Z @ 0x1800241C8 (--$_Try_emplace@AEBW4TestCommandMessageType@@$$V@-$unordered_map@W4TestCommandMessageType@@U-$pa.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x180046380 (-equal_range@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBW4TestCommandMessageType@@@Z @ 0x1800BCA2C (-erase@-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMes.c)
 */

TestCommandHost *__fastcall TestCommandHost::UnregisterForTestCommandMessage(int a1, __int64 a2, __int64 a3)
{
  TestCommandHost *result; // rax
  char *v6; // rbx
  __int64 v7; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-10h] BYREF
  int v9; // [rsp+40h] [rbp+10h] BYREF

  v9 = a1;
  result = TestCommandHost::m_instance;
  if ( TestCommandHost::m_instance )
  {
    v6 = (char *)TestCommandHost::m_instance + 72;
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
      (_QWORD *)TestCommandHost::m_instance + 9,
      v8,
      (const unsigned __int8 *)&v9);
    result = (TestCommandHost *)v8[0];
    v7 = 0LL;
    while ( result != (TestCommandHost *)v8[1] )
    {
      result = *(TestCommandHost **)result;
      ++v7;
    }
    if ( v7 )
    {
      std::unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>::_Try_emplace<enum TestCommandMessageType const &,>(
        (__int64)v6,
        (__int64)v8,
        (const unsigned __int8 *)&v9);
      result = (TestCommandHost *)v8[0];
      if ( *(_QWORD *)(v8[0] + 24LL) == a2 )
      {
        std::unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>::_Try_emplace<enum TestCommandMessageType const &,>(
          (__int64)TestCommandHost::m_instance + 72,
          (__int64)v8,
          (const unsigned __int8 *)&v9);
        result = (TestCommandHost *)v8[0];
        if ( *(_QWORD *)(v8[0] + 32LL) == a3 )
          return (TestCommandHost *)std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::erase(
                                      (char *)TestCommandHost::m_instance + 72,
                                      &v9);
      }
    }
  }
  return result;
}
