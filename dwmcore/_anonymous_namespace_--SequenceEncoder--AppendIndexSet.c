/*
 * XREFs of _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x18010C108
 * Callers:
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x18010C1B8 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 * Callees:
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x18010CA14 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@std@@@1@AEB_K@Z @ 0x18010CC64 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KIU-$less@_K@std@@V-$allocator@U-$pair@$$CB_KI@.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x18010CCB4 (-_Min@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@SAPEAU-$_Tree_node@_KPEAX@2@PEAU32@@Z.c)
 */

void __fastcall anonymous_namespace_::SequenceEncoder::AppendIndexSet(Base853Encoder *this, __int64 a2)
{
  __int64 i; // rbx
  unsigned __int64 v5; // r10
  __int64 v6; // rcx
  __int64 j; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  Base853Encoder::AppendVarInt(this, *(_DWORD *)(a2 + 8));
  for ( i = **(_QWORD **)a2; !*(_BYTE *)(i + 25); i = j )
  {
    std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::_Find_lower_bound<unsigned __int64>(
      *((_QWORD *)this + 3),
      v8);
    if ( *(_BYTE *)(v9 + 25) || v5 < *(_QWORD *)(v9 + 32) )
    {
      std::_Xout_of_range("invalid map<K, T> key");
      __debugbreak();
      JUMPOUT(0x18010C1B1LL);
    }
    Base853Encoder::AppendVarInt(this, *(_DWORD *)(v9 + 40));
    v6 = *(_QWORD *)(i + 16);
    if ( *(_BYTE *)(v6 + 25) )
    {
      for ( j = *(_QWORD *)(i + 8); !*(_BYTE *)(j + 25) && i == *(_QWORD *)(j + 16); j = *(_QWORD *)(j + 8) )
        i = j;
    }
    else
    {
      j = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Min(v6);
    }
  }
}
