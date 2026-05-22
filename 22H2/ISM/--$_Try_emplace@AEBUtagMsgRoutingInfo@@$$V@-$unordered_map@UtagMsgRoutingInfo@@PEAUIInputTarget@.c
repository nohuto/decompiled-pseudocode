/*
 * XREFs of ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$unordered_map@UtagMsgRoutingInfo@@PEAUIInputTarget@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x180036720
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18002A590 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180035628 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUtagMsgRoutingInfo@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUtagMsgRoutingInfo@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800367D0 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBUtagMsgRoutingInfo@@@2@V-$tuple@$$V@2@@-$_.c)
 */

__int64 __fastcall std::unordered_map<tagMsgRoutingInfo,IInputTarget *,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>>::_Try_emplace<tagMsgRoutingInfo const &,>(
        _QWORD *a1,
        __int64 a2,
        int *a3)
{
  __int64 appended; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r11
  __int64 v11; // r14
  __int64 v12; // r10
  __int64 v13; // rdi
  __int64 i; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 *v19; // r9
  char v20; // al
  __int64 v21; // r9
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF
  int v23; // [rsp+60h] [rbp+18h] BYREF

  v23 = *a3;
  LODWORD(v22) = a3[1];
  appended = std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)&v22, 4uLL);
  v8 = std::_Fnv1a_append_bytes(v6, (const unsigned __int8 *const)&v23, v7);
  v11 = a1[3];
  v12 = a1[1];
  v13 = 2 * (a1[6] & (v8 ^ appended));
  for ( i = *(_QWORD *)(v11 + 8 * v13); ; i = *v19 )
  {
    if ( *(_QWORD *)(v11 + 8 * v13) == v12 )
      v15 = v12;
    else
      v15 = **(_QWORD **)(v11 + 8 * v13 + 8);
    if ( i == v15 )
    {
      v16 = v12;
      v17 = v12;
      goto LABEL_6;
    }
    if ( operator==(i + 16, v10) )
      break;
  }
  v20 = operator==(v10, (__int64)(v19 + 2));
  v16 = v12;
  if ( v20 )
    v16 = v21;
  v17 = v16;
LABEL_6:
  if ( v17 == v12 )
  {
    v22 = v10;
    std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<tagMsgRoutingInfo const &>,std::tuple<>>(
      a1,
      a2,
      v9,
      &v22);
  }
  else
  {
    *(_QWORD *)a2 = v16;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
